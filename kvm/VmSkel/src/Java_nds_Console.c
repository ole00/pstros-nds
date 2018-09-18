#include <nds.h>
#include <nds/arm9/video.h>
#include <kni.h> 
#include <stdio.h> 


KNIEXPORT KNI_RETURNTYPE_VOID Java_nds_Console_cls() { 
    iprintf("\x1b[2J");
    KNI_ReturnVoid(); 
} 

KNIEXPORT KNI_RETURNTYPE_VOID Java_nds_Console_cll() { 
    iprintf("\x1b[2J");
    iprintf("\x1b[0;0H");
    KNI_ReturnVoid(); 
} 

KNIEXPORT KNI_RETURNTYPE_VOID Java_nds_Console_setpos() { 
    int x = KNI_GetParameterAsInt(1);
    int y = KNI_GetParameterAsInt(2);
    iprintf("\x1b[%d;%dH", y, x);
    KNI_ReturnVoid(); 
} 

KNIEXPORT KNI_RETURNTYPE_VOID Java_nds_Console_up() { 
    iprintf("\x1b[10A");
    KNI_ReturnVoid(); 
} 

KNIEXPORT KNI_RETURNTYPE_VOID Java_nds_Console_down() { 
    iprintf("\x1b[19B");
    KNI_ReturnVoid(); 
} 

KNIEXPORT KNI_RETURNTYPE_VOID Java_nds_Console_left() { 
    iprintf("\x1b[28D");
    KNI_ReturnVoid(); 
} 

KNIEXPORT KNI_RETURNTYPE_VOID Java_nds_Console_right() { 
    iprintf("\x1b[5C");
    KNI_ReturnVoid(); 
} 

KNIEXPORT KNI_RETURNTYPE_VOID Java_nds_Console_erase() { 
    iprintf("\x1b[2J");
    KNI_ReturnVoid(); 
} 

 
