//
//   cl /nologo /W4 /wd4100 /GS- MessageBox.c /link /nodefaultlib /entry:start /subsystem:Windows user32.lib kernel32.lib
//

#include <windows.h>

int start(void* PEB) {

   char  arg1[100];
   char* arg2 = "The title";


   wsprintfA(arg1,
     "arg1 = %I64d\n"
     "arg2 = %I64d"  , arg1, arg2);

   MessageBoxA(0, arg1, arg2, 0);

   ExitProcess(0);
}
