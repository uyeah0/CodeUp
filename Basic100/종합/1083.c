//1 ���� �Էµ� ������ ������� ������ �ΰ� ���� ����ϴµ�,
//3 �Ǵ� 6 �Ǵ� 9�� ��� �� �� ��� ���� �빮�� X �� ����Ѵ�.

#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        if (i % 3 == 0 || i % 6 == 9 || i % 9 == 0)
            printf("%c ", 'X');
        else
            printf("%d ", i);

    }
    return 0;
}