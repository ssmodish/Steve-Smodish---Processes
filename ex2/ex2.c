// Write a program that opens the text.txt file (with the `fopen()` library call) located in this directory 
// and then calls `fork()` to create a new process. Can both the child and parent access the file descriptor 
// returned by `fopen()`? What happens when they are written to the file concurrently?

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    // Your code here 
    FILE * text;
    text = fopen("text.txt", "w");

    int rc = fork();

    if (rc == 0)
    { // child process satisfies this branch
        fprintf(text, "hello, child here. \n");
        fclose(text);
    }
    else
    {
        fprintf(text, "hello, parent here. \n");
        fclose(text);
    }

    
    return 0;
}
