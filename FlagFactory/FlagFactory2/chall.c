#include <stdio.h>

int main() {
	char flag[] = {0xFF, 0xE7, 0xE5, 0xEF, 0xF8, 0xEA, 0xD7, 0xCA, 0xC0, 0x98, 0xCB, 0xF3, 0xCA, 0x98, 0xCF, 0xD8, 0x9C, 0xDE, 0xD5, 0xF3, 0x9E, 0xF3, 0x9D, 0xDF, 0xF3, 0xD9, 0xDF, 0x9D, 0xC2, 0xCB, 0xF3, 0xEF, 0xF3, 0xC2, 0x9C, 0xD8, 0xF3, 0xC6, 0x98, 0xDA, 0x98, 0xF3, 0xDF, 0xD8, 0x9D, 0xC0, 0xC0, 0xF3, 0xC9, 0xCD, 0xDF, 0xD5, 0xF3, 0xD8, 0xC4, 0x9C, 0xD1, 0xAC};
	
	for (int i = 0; i < sizeof(flag) / sizeof(flag[0]); i++) {
		printf("%c", flag[i] ^ 0xdeadbeef); // Try and find out the number used to XOR the flag
	}
	
	return 0;
}