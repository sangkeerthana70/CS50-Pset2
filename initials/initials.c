#include <string.h>
#include <stdio.h>
#include<cs50.h>
#include<ctype.h>//has toupper function

int main(void)
{
    string name  = get_string();
    //we need a loop to iterate through every letter.
    for (int i = 0; i < strlen(name); i++) // added space infront of for JE stlye50 recommended styling
    {
        //first index will always be the first letter
        //if i=0 print it out.
        if (i == 0)
        {
            printf("%C", toupper(name[i])); // prints uppercase letter from name array input string
        }
        //check for a space, and takes its index + 1 to get the next initial.
        if (name[i] == ' ')//single char has to be in single quotes
        {
            printf("%c", toupper(name[i + 1])); // prints uppercase letter from name array input string // added spacing i + 1 JE style 50
        }
    }
    printf("\n");// prints new line JE , removed 2 tabs style 50
}
//code looks good, passes
// i would just recommend changing from i variable to index
// added some styling to pass style50
//good job