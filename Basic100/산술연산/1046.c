/*합과 평균을 줄을 바꿔 출력한다.
평균은 소수점 이하 둘째 자리에서 반올림해서 소수점 이하 첫째 자리까지 출력한다.
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