#include <stdio.h>

int main(void) {
    int i = 10;

    printf("Initial value of i: %d\n", i);

    // Post-Increment
    int postInc = i++;
    printf("After post-increment (i++): i = %d, postInc = %d\n", i, postInc);

    // Pre-Increment
    int preInc = ++i;
    printf("After pre-increment (++i): i = %d, preInc = %d\n", i, preInc);

    // Post-Decrement
    int postDec = i--;
    printf("After post-decrement (i--): i = %d, postDec = %d\n", i, postDec);

    // Pre-Decrement
    int preDec = --i;
    printf("After pre-decrement (--i): i = %d, preDec = %d\n", i, preDec);

    return 0;
}
