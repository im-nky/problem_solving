#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(char ** p) {
   *p = malloc(32);
   strcpy(*p, "Qualcomm");
}

int main() {
   char* ptr = NULL;
   foo(&ptr);
   printf("%s\n", ptr);
   free(ptr);
   return 0;
}
