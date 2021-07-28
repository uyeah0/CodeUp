/*
    1, 2, 3 ... 을 계속 더해 나갈 때,
    그 합이 입력한 정수(0 ~ 1000)보다 같거나 작을 때까지
    계속 더하는 프로그램을 작성해보자.
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