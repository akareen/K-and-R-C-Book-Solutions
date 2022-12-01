#include <stdio.h>
#include <string.h>

void expand(char sourceString[], char resultString[]);
int validConvention(char c1, char c2, char c3);
int isAlphaNum(char c);



int main() {
	char source[] = "a-z";
	char result[] = "";
	expand(source, result);
	printf("%s\n", result);
}

void expand(char sourceString[], char resultString[]) {
	int resultIndex = 0;
	int sourceIndex = 0;

	char c;
	int sourceSize = 0;
	while ((c = sourceString[sourceSize]) != '\0')
		sourceSize++;

	char c2, c3;
	for (int i = 0; i < sourceSize - 2; i++) {
		printf("%d\n", i);
		c  = sourceString[i];
		c2 = sourceString[i + 1];
		c3 = sourceString[i + 2];
		printf("chars: %c %c %c\n", c,c2,c3);
		if (validConvention(c, c2, c3)) {
			for (int j = 0; j <= c3 - c; j++)
				resultString[resultIndex++] = c + j;
		}
	}
	resultString[resultIndex] = '\0';
}

int validConvention(char c1, char c2, char c3) {
	return isAlphaNum(c1) && c2 == '-' && isAlphaNum(c3);
}

int isAlphaNum(char c) {
	return (c >= 'a' && c <= 'z') 
	    || (c >= 'A' && c <= 'Z')
	    || (c >= '0' && c <= '9');
}