#include <stdio.h>
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    evaluates to 1 if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    evaluates to 1 if c is an uppercase vowel
    is UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    evaluates to 1 if either is LowercaseVowel or is UppercaseVowel is true
    if
        printf("%c is a vowel", c);
    else
        printf("%c is a consonant", c);
    return 0;
}
