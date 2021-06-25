#include<stdio.h>

int main() {
	char arr[50];
	scanf("%s", arr);
	for (int i = 0; arr[i] != NULL; i++) {
		printf("\'%c\'\n", arr[i]);
	}
	return 0;
}