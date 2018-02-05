#include <stdio.h>
 #include<conio.h>
long power (int, int);
int main()
{
    int pow, num;
    long result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter it's power: ");
    scanf("%d", &pow);
    result = power(num, pow);
    printf("%d^%d is %ld", num, pow, result);
    return 0;
}
