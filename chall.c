#include <stdio.h>
#include <string.h>

void decodeHexToString(const char *hex, char *output) {
    int len = strlen(hex);
    for (int i = 0; i < len; i += 2) {
        sscanf(hex + i, "%2hhx", &output[i / 2]);
    }
    output[len / 2] = '\0'; // Null-terminate the string
}

void hiddenFlag() {
	const char whatIsThis[] = "534b494354467b723376657273335f656e67696e653372316e675f6131745f746834745f683472645f72316768743f7d";
	char flag[65];

	decodeHexToString(whatIsThis, flag);
	printf("%s", flag);
}

int main() {
	printf("%s", "There's probably nothing hidden inside this binary :).\n");
	return 0;
}
