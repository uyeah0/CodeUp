// ������(a ~ z) 1���� �ԷµǾ��� �� �� ���ڱ����� ���ĺ��� ������� ����غ���.
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
