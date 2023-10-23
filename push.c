#include "monty.h"

/**
 *
 * push - add node to the stack
 * @top - stack head
 * @arg - argument to the command
 * @line_number - line_number
 * Return - nothing
 */

void push(int *stack_t, int *top, const char *arg, unsigned int line_number) {
    if (arg == NULL || strlen(arg) == 0) {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    char *endptr;
    int value = strtol(arg, &endptr, 10);

    if (*endptr != '\0') {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack_t[*top] = value;
    (*top)++;
}
