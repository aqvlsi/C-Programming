#include <stdio.h>

int main(void) {
    printf("Using pre-decrement (--i):\n");
    for (int i = 10; --i > 0;) {
        printf("%d\n", i);
    }

    return 0;
}
