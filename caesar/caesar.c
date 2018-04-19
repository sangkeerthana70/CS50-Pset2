#include <stdlib.h>//includes atoi function
#include <string.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check to see if argc value is > 2
    if (argc != 2)
    {
        printf("Please supply one parameter!\n");
        exit(1);//same as return 1
    }
    int key = atoi(argv[1]);
    printf("Value of Key : %i\n", key);
    //get user input for a string
    string inpStr = get_string("plaintext : ");
    printf("ciphertext: ");//since C has no concatenation in strings printing each char returned after every iteration
    int result;
    for (int i = 0, length = strlen(inpStr); i < length; i++)//runs this loop for arg[1] constant which is static
    {
        //check if a char is aplha
        if (isalpha(inpStr[i]))
        {
            int alpIndex; // declared variable index
            int asciiVal; // delcared variable ascii
            //check for each char if upper case
            if (isupper(inpStr[i]))
            {
                asciiVal = inpStr[i]; // takes uer input and puts it in asciVal
                alpIndex = asciiVal - 'A';//to calculate the alphabetical index from 'A' to inpStr[i]
                result = ((alpIndex +  key) % 26) + 'A'; // ciphered text + key JE
                printf("%c", result); // prints alpha cipher text from uppercase
            }
            //lower case check
            else
            {
                asciiVal = inpStr[i];  // takes user input and puts in asciVal JE
                alpIndex = asciiVal - 'a'; // takes asci value and - asci character by 'a' JE
                result = ((alpIndex +  key) % 26) + 'a'; // converts to cipher text JE
                printf("%c", result); // prints alpha character cipher text JE
            }
        }

        else
        {
            printf("%c", inpStr[i]); //print non-alpha chars JE
        }
    }
    printf("\n"); // goes to next line JE
    return 0; // returns null value JE
}


//added some additional comments with JE initial
// good variable names
// code passes check50 cs50/2018/x/caesar
//overall looks good, passes style50 standards
