#include <stdio.h>

int main()
{
	int value;
    char letter;

    printf("Enter a letter : ");
    scanf("%c",&letter);
    
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
// 	if ((value <= 90 && value >= 65) || (value >= 97 && value <= 122))
    {
        printf("(%c) is a letter of the alphabet",letter);
    }
    else
    {
        printf("i dont understan your synbol (%c) ?",letter);
    }
    

}


