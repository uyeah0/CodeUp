/*
    1, 2, 3 ... �� ��� ���� ���� ��,
    �� ���� �Է��� ����(0 ~ 1000)���� ���ų� ���� ������
    ��� ���ϴ� ���α׷��� �ۼ��غ���.
*/
#include<stdio.h>
int main() {
    int n, sum = 0, max;
    scanf("%d", &n);
    for (int i = 1; sum < n; i++) {
        sum += i;
        max = i;
    }
    printf("%d", max);
    return 0;
}