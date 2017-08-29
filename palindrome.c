#include <stdio.h>
int main()
{
    int n, reversedInteger = 0, remainder, original Int;
    printf("Enter an int ");
    scanf("%d", &n);
    original Int = n;
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversed Int*10 + remainder;
        n /= 10;
    }
    if 
        printf("%d is a palindrome", original Int);
    else
        printf("%d is not a palindrome", original Int);
     return 0;
}
