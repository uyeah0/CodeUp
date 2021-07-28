//'q'가 입력될 때까지 입력한 문자를 계속 출력하는 프로그램을 작성해보자.
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