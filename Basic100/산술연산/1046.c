/*�հ� ����� ���� �ٲ� ����Ѵ�.
����� �Ҽ��� ���� ��° �ڸ����� �ݿø��ؼ� �Ҽ��� ���� ù° �ڸ����� ����Ѵ�.
*/

#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a + b + c);
    double avg = (a + b + c) / 3.0;
    printf("%.1lf\n", avg);
    return 0;
}