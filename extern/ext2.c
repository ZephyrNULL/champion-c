extern int a; // 'a' is an extern variable
void ext2() {
 a = 5; // ext: a is accessed
 printf("a = %d\n", a); // a= 5
}
