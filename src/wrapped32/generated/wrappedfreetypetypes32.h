/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedfreetypeTYPES32_H_
#define __wrappedfreetypeTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFp_t)(void*);
typedef uint32_t (*uFp_t)(void*);
typedef void* (*pFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef int32_t (*iFpi_t)(void*, int32_t);
typedef int32_t (*iFpu_t)(void*, uint32_t);
typedef int32_t (*iFpl_t)(void*, intptr_t);
typedef int32_t (*iFpp_t)(void*, void*);
typedef uint32_t (*uFpL_t)(void*, uintptr_t);
typedef uintptr_t (*LFpp_t)(void*, void*);
typedef void* (*pFpi_t)(void*, int32_t);
typedef void (*vFpll_t)(void*, intptr_t, intptr_t);
typedef void (*vFppp_t)(void*, void*, void*);
typedef int32_t (*iFpip_t)(void*, int32_t, void*);
typedef int32_t (*iFpui_t)(void*, uint32_t, int32_t);
typedef int32_t (*iFpuu_t)(void*, uint32_t, uint32_t);
typedef int32_t (*iFpll_t)(void*, intptr_t, intptr_t);
typedef int32_t (*iFpLi_t)(void*, uintptr_t, int32_t);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef uintptr_t (*LFpLp_t)(void*, uintptr_t, void*);
typedef int32_t (*iFpuip_t)(void*, uint32_t, int32_t, void*);
typedef int32_t (*iFpupu_t)(void*, uint32_t, void*, uint32_t);
typedef int32_t (*iFpplp_t)(void*, void*, intptr_t, void*);
typedef int32_t (*iFpuuup_t)(void*, uint32_t, uint32_t, uint32_t, void*);
typedef int32_t (*iFplluu_t)(void*, intptr_t, intptr_t, uint32_t, uint32_t);
typedef int32_t (*iFpLlpp_t)(void*, uintptr_t, intptr_t, void*, void*);
typedef int32_t (*iFppllp_t)(void*, void*, intptr_t, intptr_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(FT_Activate_Size, iFp_t) \
	GO(FT_Done_Face, iFp_t) \
	GO(FT_Done_Size, iFp_t) \
	GO(FT_Has_PS_Glyph_Names, iFp_t) \
	GO(FT_Get_Sfnt_Name_Count, uFp_t) \
	GO(FT_Get_Postscript_Name, pFp_t) \
	GO(FT_Get_X11_Font_Format, pFp_t) \
	GO(FT_Matrix_Multiply, vFpp_t) \
	GO(FT_Outline_Get_CBox, vFpp_t) \
	GO(FT_Outline_Transform, vFpp_t) \
	GO(FT_Select_Charmap, iFpi_t) \
	GO(FT_Select_Size, iFpi_t) \
	GO(FT_Render_Glyph, iFpu_t) \
	GO(FT_Outline_Embolden, iFpl_t) \
	GO(FT_Get_Glyph, iFpp_t) \
	GO(FT_Get_PS_Font_Info, iFpp_t) \
	GO(FT_Get_WinFNT_Header, iFpp_t) \
	GO(FT_New_Size, iFpp_t) \
	GO(FT_Outline_Copy, iFpp_t) \
	GO(FT_Outline_Done, iFpp_t) \
	GO(FT_Request_Size, iFpp_t) \
	GO(FT_Set_Charmap, iFpp_t) \
	GO(FT_Get_Char_Index, uFpL_t) \
	GO(FT_Get_First_Char, LFpp_t) \
	GO(FT_Get_Sfnt_Table, pFpi_t) \
	GO(FT_Outline_Translate, vFpll_t) \
	GO(FT_Set_Transform, vFppp_t) \
	GO(FT_Get_Sfnt_Name, iFpip_t) \
	GO(FT_Load_Glyph, iFpui_t) \
	GO(FT_Set_Pixel_Sizes, iFpuu_t) \
	GO(FT_Outline_EmboldenXY, iFpll_t) \
	GO(FT_Load_Char, iFpLi_t) \
	GO(FT_Get_BDF_Property, iFppp_t) \
	GO(FT_Outline_Decompose, iFppp_t) \
	GO(FT_Outline_Get_Bitmap, iFppp_t) \
	GO(FT_Get_Next_Char, LFpLp_t) \
	GO(FT_Outline_New, iFpuip_t) \
	GO(FT_Get_Glyph_Name, iFpupu_t) \
	GO(FT_New_Face, iFpplp_t) \
	GO(FT_Open_Face, iFpplp_t) \
	GO(FT_Get_Kerning, iFpuuup_t) \
	GO(FT_Set_Char_Size, iFplluu_t) \
	GO(FT_Load_Sfnt_Table, iFpLlpp_t) \
	GO(FT_New_Memory_Face, iFppllp_t)

#endif // __wrappedfreetypeTYPES32_H_
