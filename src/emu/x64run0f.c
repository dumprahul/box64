#define _GNU_SOURCE
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

#include "debug.h"
#include "box64stack.h"
#include "x64emu.h"
#include "x64run.h"
#include "x64emu_private.h"
#include "x64run_private.h"
#include "x64primop.h"
#include "x64trace.h"
#include "x87emu_private.h"
#include "box64context.h"
//#include "my_cpuid.h"
#include "bridge.h"
//#include "signals.h"
#ifdef DYNAREC
#include "../dynarec/arm_lock_helper.h"
#endif

#define F8      *(uint8_t*)(R_RIP++)
#define F8S     *(int8_t*)(R_RIP++)
#define F16     *(uint16_t*)(R_RIP+=2, R_RIP-2)
#define F32     *(uint32_t*)(R_RIP+=4, R_RIP-4)
#define F32S    *(int32_t*)(R_RIP+=4, R_RIP-4)
#define F64     *(uint64_t*)(R_RIP+=8, R_RIP-8)
#define F64S    *(int64_t*)(R_RIP+=8, R_RIP-8)
#define PK(a)   *(uint8_t*)(R_RIP+a)

#define GETED oped=GetEd(emu, rex, nextop)
#define GETGD opgd=GetGd(emu, rex, nextop)
#define GETEB oped=GetEb(emu, rex, nextop)
#define GETGB oped=GetGb(emu, rex, nextop)
#define ED  oped
#define GD  opgd
#define EB  oped
#define GB  oped->byte[0]

int Run0F(x64emu_t *emu)
{
    uint8_t opcode;
    uint8_t nextop;
    reg64_t *oped, *opgd;
    rex_t rex = {0};

    opcode = F8;
    while(opcode>=0x40 && opcode<=0x4f) {
        rex.rex = opcode;
        opcode = F8;
    }

    switch(opcode) {

        case 0x1F:                      /* NOP (multi-byte) */
            nextop = F8;
            GETED;
            break;
        
        default:
            return 1;
    }
    return 0;
}