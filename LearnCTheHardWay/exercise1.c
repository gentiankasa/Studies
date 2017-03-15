#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;
    int count = 0;
    
    // this is also a comment
    printf("You are %d miles away.\n", distance);
    printf("My name is %s.\n", "Gentian");
    count = printf("I can do %s for %d times.\n", "this", 100);
    printf("count: %d\n", count);
    
    // two equivalent formats
    printf("%*d\n", 100, 1000);
    printf("%2$*1$d\n", 100, 1000);
    
    return 0;
}
