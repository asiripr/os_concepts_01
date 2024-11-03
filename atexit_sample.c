#include <stdio.h>
#include <stdlib.h>

void exitfunc(){
    printf("called cleanup function - exitfunc()\n");
    return;
}

int main(){
    atexit(exitfunc);
    printf("Hello Sri Lanka\n");
    exit (0);
}