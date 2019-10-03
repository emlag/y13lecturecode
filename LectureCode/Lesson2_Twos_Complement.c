#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

/* put the function signature before main so that main knows it exists.*/
void printBits(size_t const size, void const * const ptr);

int main(int argc, char const *argv[])
{
    int sgned_int_pos = 7;
    int sgned_int_neg = -8;

    printf("\n");
    printf("%d: ", sgned_int_pos);
    printBits(sizeof(sgned_int_pos), &sgned_int_pos);
    printf("\n");
    printf("%d: ", sgned_int_neg);
    printBits(sizeof(sgned_int_neg), &sgned_int_neg);
    printf("\n");
    return 0;
}

void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        
        for (j=7;j>=0;j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
        if (i % 4)
        {
            printf(" ");
        }
    }
    puts("");
}
