#include <string.h>
#include <stdio.h>
#include<cs50.h>
#include<ctype.h>//has toupper function

int main(void)
{
    string name  = get_string();
    //we need a loop to iterate through every letter.
    for(int i = 0; i < strlen(name); i++)
    {
        //first index will always be the first letter
        //if i=0 print it out.
        if (i == 0)
        {
            printf("%C", toupper(name[i]));
        }
        //check for a space, and takes its index + 1 to get the next initial.
        if (name[i] == ' ')//single char has to be in single quotes
        {
            printf("%c", toupper(name[i+1]));
        }
    }
         printf("\n");
}