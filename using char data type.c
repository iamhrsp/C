#include <stdio.h>

int main(void)
{
    char letter, letter2;
    printf("Please enter two letters separated by a comma: ");
    scanf("%c,%c", &letter, &letter2);
    printf("I read the letters %c and %c.\n", letter, letter2);
    return 0;
}

//understanding the usage of spaces and char data type

// unlike number data type in C, char variables include spaces and new line characters into the assigned variables eg

//two letters are declared above. If %c%c used then letters have to be entered as "ab" and not as "a b", because the space character is also assigned to the variable. Unless any other type of format specifoer used like "%c %c" or "%c,%c"