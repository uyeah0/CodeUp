// 영문자(a ~ z) 1개가 입력되었을 때 그 문자까지의 알파벳을 순서대로 출력해보자.
#include<stdio.h>

int main() {
    char c, a = 'a';
    scanf("%c", &c);
    do
    {
        printf("%c ", a);
        a += 1;
    } while (a < c + 1);

    return 0;
}
