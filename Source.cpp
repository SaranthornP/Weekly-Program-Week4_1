#define _CRT_SECURE_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char a[100];
	char b[100][100];
	int i = 0;
	while (strcmp(a, "finished") != 0) {
		scanf("%s", a);
		strcpy(b[i], a);
		i++;
	}
	for (int j = 0; j < i - 1; j++) {
		for (int k = 0; k < strlen(b[j]); k++) {
			if (b[j][k] >= 'a' && b[j][k] <= 'z' && k == 0) {
				printf("%c", b[j][k] - 32);
			}
			else if (b[j][k] >= 'A' && b[j][k] <= 'Z' && k != 0) {
				printf("%c", b[j][k] + 32);
			}
			else printf("%c", b[j][k]);
		}
		printf(" ");
	}
	return 0;
}