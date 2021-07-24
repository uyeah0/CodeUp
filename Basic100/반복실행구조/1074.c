//1씩 줄이면서 한 줄에 하나씩 1이 될 때까지 출력한다.
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n != 0)
    {
        printf("%d\n", n);
        n = n - 1;
    }
    return 0;
}
