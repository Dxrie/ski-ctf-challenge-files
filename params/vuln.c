#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void win(int first, int second) {
    if (first != 0xdeadbeef || second != 0xacacac) {
        printf("%s", "nice try!");
        return;
    }

    system("cat flag.txt");
}

void vulnerable() {
    char buffer[64];
    printf("Enter your input: ");
    gets(buffer);
}

int main() {
    setbuf(stdout, NULL);
    vulnerable();
    printf("Program finished.\n");
    return 0;
}
