#include "monty.h"
/**
 * pall- prints all values on the stack
 * top - Stack head
 *
 */

void pall(const int *stack_t, int top) {
    if (top <= 0) {
        
        return;
    }

    for (int i = top - 1; i >= 0; i--) {
        printf("%d\n", stack_t[i]);
    }
}
