// Write a program that calls `fork()`. Before calling `fork()`, have the main process access a variable
// (e.g., x) and set its value to something (e.g., 100). What value is the variable in the child process?
// What happens to the variable when both the child and parent change the value of x?

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    // Your code here
    int prevX = 12222;

    int pid = fork();

    if (pid == 0)
    { // child process satisfies this branch
        prevX = 2
        printf("hello, child here (prevX: %d) \n", prevX);
    }
    else
    {
        printf("hello, parent here (prevX: %d) \n", prevX);
    }

    return 0;
}
