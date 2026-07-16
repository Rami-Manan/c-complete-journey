#include <stdio.h>

/* All three share SAME 4 bytes of memory */
union TypePun
{
    int   i;
    float f;
    char  bytes[4];   /* View same memory as 4 individual bytes */
};

int main()
{
    union TypePun u;

    /* Store as float, read raw bytes */
    u.f = 3.14;

    printf("Stored float   : %f\n",  u.f);
    printf("Same as int    : %d\n",  u.i);   /* Reinterpreted as int */
    printf("Raw bytes      : ");

    int i;
    for(i = 0; i < 4; i++)
        printf("%02X ", (unsigned char)u.bytes[i]);   /* Hex bytes */
    printf("\n");

    /* Store as int, read as float */
    u.i = 1078523331;   /* This is the IEEE 754 representation of 3.14 */
    printf("\nStored int     : %d\n",  u.i);
    printf("Same as float  : %f\n",  u.f);

    printf("\nKey insight: Union = same memory, different interpretations\n");

    return 0;
}
