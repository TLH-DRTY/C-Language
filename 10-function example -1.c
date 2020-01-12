#include <stdio.h>
#include <stdlib.h>

int func();

int main() {

   // function call
   printf("mainde\n");
   int i = func();
   printf("cikti\n");
   printf("%d",i);
}

// function definition
int func() {
printf("fonk\n");
   return 25;
}
