#include<stdio.h>
void main()
{
    char ch;
    printf("enter any character in lowercase:");
    scanf("%c",&ch);
    switch(ch)
    {
    case'a':
        print("character is vowel");
        break;
    case'e':
        print("character is vowel");
        break;
    case'i':
        print("character is vowel");
        break;
    case'o':
        print("character is vowel");
        break;
    case'u':
        print("character is vowel");
        break;
    default:
        printf("character is consonent");
    }
}
