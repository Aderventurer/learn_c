#include<stdbool.h>
#include<stdio.h>

bool is_vowel(char c);
bool is_vowel(char character)
{
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char c;
    
    printf("enter a character :");
    scanf("%c",&c);

    if (is_vowel(c))
    {
        printf("%c is vowel",c);
    }
    else
    {
        printf("%c is consonant",c);
    }
    return 0;

}