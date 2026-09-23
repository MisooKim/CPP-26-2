#include <stdio.h>

int main(){
    int number1, number2;

    printf("두 양수를 입력하세요");
    scanf_s("%d %d", &number1, &number2);

    printf("%d %d ", number1, number2);
}