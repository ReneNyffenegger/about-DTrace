BEGIN {
  printf("execname = %s\n", execname);
}

pid$target:USER32:MessageBoxA:entry 
 /* /arg2 != 0/ */
{

/* 
   Did not work!

   printf("%s\n", copyinstr(args[1]) );

*/

   printf("arg1 = %d, arg2 = %d\n", arg1, arg2);
}

END {}
