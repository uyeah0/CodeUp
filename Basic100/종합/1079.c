//'q'�� �Էµ� ������ �Է��� ���ڸ� ��� ����ϴ� ���α׷��� �ۼ��غ���.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    char c;
    while (1) {
        scanf("%c", &c);
        if (c == 'q') {
            printf("%c", c); 
            break;
        }
        printf("%c", c);
    }
    return 0;
}