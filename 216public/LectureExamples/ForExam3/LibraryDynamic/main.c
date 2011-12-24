#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

typedef int (*funct_pntr)(int);

int main(){
   int a, b;
   void *handle;
   funct_pntr my_funct;
   const char *error;

   printf("Give 2 integers:");
   scanf("%d%d",&a, &b);

   handle = dlopen("libMyDynLib.so",RTLD_LAZY);
   if (!handle) {
       fprintf(stderr, "Couldn't open libMyDynLib.so: %s\n",
           dlerror());
       exit(-1);
   }

   dlerror();
   my_funct = dlsym(handle, "f");
   if ((error = dlerror())) {
       fprintf(stderr, "Couldn't find f: %s\n", error);
       exit(1);
   }
   printf("first(%d) = %d\n",a,my_funct(a));
   printf("first(%d) = %d\n",b,my_funct(b));

   dlerror();
   my_funct = dlsym(handle, "s");
   if ((error = dlerror())) {
       fprintf(stderr, "Couldn't find s: %s\n", error);
       exit(1);
   }
   printf("second(%d) = %d\n",a,my_funct(a));
   printf("second(%d) = %d\n",b,my_funct(b));

   dlclose(handle);
   return 0;
}
