#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void win() {
    system("cat flag.txt");
}

void vulnerable() {
    char buffer[64];
    printf("Enter your input: ");
    gets(buffer);
}

int main() {
    setbuf(stdout, NULL);
    setbuf(stdin, NULL);
    setbuf(stderr, NULL);
    
    vulnerable();
    printf("Program finished.\n");
    return 0;
}
