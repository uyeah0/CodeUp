#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    char a;
    scanf("%c", &a);
   
    switch ((int)a) {
       case 65: printf("best!!!"); break;
       case 66: printf("good!!"); break;
      case 67: printf("run!"); break;
      case 68: printf("slowly~"); break;
      default: printf("what?"); break;
    }

    return 0;
}