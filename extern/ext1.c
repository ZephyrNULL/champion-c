int b = 1; // definition of ext: b
 void ext1() {
 int a; // local a
 a = 3; // only local a is visible
 b = 2; // ext: b is accessed
 printf("a = %d\n", a); // a=3
 printf("b = %d\n", b); // b=2
 }