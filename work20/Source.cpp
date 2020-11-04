#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void letter(char *arr) {
	int i = 0;
	while (arr[i] != '\0') {
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			arr[i] = arr[i] - 32;
			printf("%c", arr[i]);
		}
		else if (arr[i] >= 'A' && arr[i] <= 'Z') {
			arr[i] = arr[i] + 32;
			printf("%c", arr[i]);
		}
		else {
			printf("%c", arr[i]);
		}
		i++;
	}
}
int main() {
	char eng[200];
	scanf("%s", &eng);
	letter(eng);
}