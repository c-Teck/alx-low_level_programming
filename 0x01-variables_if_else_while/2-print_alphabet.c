#include <stdio.h>

int main(void)
{
    //declare alphabet variable
    char alphabet;

    //loop through the letters of the alphabet
    for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
    {
        // print the value of the variable 
        putchar(alphabet);

    }

    putchar('\n');
    return (0);
}

