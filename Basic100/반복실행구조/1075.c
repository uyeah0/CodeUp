// 1씩 줄이면서 한 줄에 하나씩 0이 될 때까지 출력한다.
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n != 0)
    {
        n = n - 1;
        printf("%d\n", n);
    }
    return 0;
}
