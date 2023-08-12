#include <stdio.h>
int main()
{
    int num,remainder,original,reversed=0;
    printf("enter the number: ");
    scanf("%d",&num);
    original=num;
    while (num!=0)
    {
    remainder=num%10;
    reversed= reversed*10+remainder;
    num/=10;
    }
    if (original==reversed)
        printf("%d is palindrome ",original);
    else
        printf("%d is not palindrome ",original);
    return 0;

}
