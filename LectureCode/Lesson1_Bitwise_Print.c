#include <stdio.h>

int main(int argc, char const *argv[])
{
    long l1 = 8 , l2 = 3; // l1 = 8(00000000 00000000 00000000 00000000 00000000 00000000 00000000 00001000)
                          // l2 = 3(00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000011)

    int a = 8, b = 3;     // a = 8(00000000 00000000 00000000 00001000)
                          // b = 3(00000000 00000000 00000000 00000011) 

    short s1 = 3, s2 = 5; //s1 = 3(00000000 00000000)
                          //s2 = 5(00000000 00000000)

    char c1 = 4, c2 = 55; // c1 = 4(00000000)
                          // c2 = 55(00000000)

    printf("a = %d, b = %d\n", a, b); //original

    /* bitwise and : both are 1*/
    printf("a&b = %d\n", a&b); // The result is 00000000 

    /* bitwise or : both are 1 or either is 1 */
    printf("a|b = %d\n", a|b);  // The result is 0000000

    /* bitwise xor : either is 1 */
    printf("a^b = %d\n", a^b); // The result is 00000000 

    /* bitwise not : 0 if 1, 1 if 0 */
    printf("~a = %d\n", a = ~a);   // The result is 00000000 

    /* bitwise left shift : 0's are inserted from the right side */
    printf("b<<1 = %d\n", b<<1);  // The result is 00000000 

    /* bitwise right shift : 0's are inserted from the left side */ 
    printf("b>>1 = %d\n", b>>1);  // The result is 00000000  
    return 0;
}
