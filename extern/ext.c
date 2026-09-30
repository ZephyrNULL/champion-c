#include <stdio.h>
#include "ext1.c"
#include "ext2.c"

void ext1();
void ext2();
int a = 1; // definition of ext: a
int main(){
 printf("a = %d\n", a); // a= 1
 a = 2;
 printf("a = %d\n", a); // a= 2
 ext1(); // cannot change ext: a
 ext2(); // ext: a is changed
 printf("a = %d\n", a); // a= 5
return 0;
}