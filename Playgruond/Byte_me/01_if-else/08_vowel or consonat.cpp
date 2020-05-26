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
        if ((letter == 'a') || (letter == 'e') ||(letter == 'i') ||(letter == 'o') || (letter == 'u')
         || (letter == 'A') || (letter == 'E') ||(letter == 'I') ||(letter == 'O') || (letter == 'U')) // a e i o u 
        {
            printf("vowel!");
        }
        else
        {
            printf("consonat!");
        }
        
        
    }
    else
    {
        printf("i dont understan your synbol (%c) ?",letter);
    }
    

}


