#include <stdio.h>
#include <string.h>

void escapeSpacesToSequences(char result[], char source[]);
void escapeSequencesToSpaces(char result[], char source[]);


int main() {
	char result[] = "";
	char source[] = "wowiam\tthehd\nfahfa\n";
	escapeSpacesToSequences(result, source);
	printf("%s\n\n", result);

	char result1[] = "";
	char source1[] = "wowiam\\tthehd\\nfahfa\\n";
	escapeSequencesToSpaces(result1, source1);
	printf("%s\n", result1);

}

void escapeSpacesToSequences(char result[], char source[]) {
	int resultPointer = 0;
	int sourcePointer = 0;

	char c;
	while ((c = source[sourcePointer]) != EOF) {
		switch (c) {
			case '\n':
				result[resultPointer++] = '\\';
				result[resultPointer++] = 'n';
				break;
			case '\t':
				result[resultPointer++] = '\\';
				result[resultPointer++] = 't';
				break;
			default:
				result[resultPointer++] = c;
				break;
		}
		sourcePointer++;
	}
	result[resultPointer] = '\0';
}

void escapeSequencesToSpaces(char result[], char source[]) {
	int resultPointer = 0;
	int sourcePointer = 0;

	char c, cPlus1;
	while ((c = source[sourcePointer]) != EOF) {
		switch (c) {
			case '\\':
				cPlus1 = source[sourcePointer + 1];
				if (cPlus1 == 'n') {
					result[resultPointer++] = '\n';
					sourcePointer++; 
				}
				if (cPlus1 == 't') {
					result[resultPointer++] = '\t';
					sourcePointer++;
				}
				break;
			default:
				result[resultPointer++] = c;
				break;
		}
		sourcePointer++;
	}
	result[resultPointer] = '\0';
}


