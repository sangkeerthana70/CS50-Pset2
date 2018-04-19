#include <stdlib.h>//includes atoi function
#include <string.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //check to see if argc value is > 2 or less than 2
    if (argc != 2)
    {
        printf("Please supply one parameter!\n");
        exit(1);//same as return 1
    }
    string key = argv[1];
    printf("key = %s\n", key);
    for (int x = 0; x < strlen(key); x++)
    {
        //printf("x = %i\n", x);
        if (!isalpha(key[x]))
        {
            //printf("key[x] = %c\n", key[x]);
            printf("Please supply an alphabetic char as keyword: \n");
            exit(1);
        }
    }

    //get user input for a string
    string plainText = get_string("plaintext : ");

    int result;
    int currChar;
    int currKeyChar;
    int currIndex;
    int currKeyIndex;
    printf("ciphertext: ");//since C has no concatenation in strings printing each char returned after every iteration

    int keyLength = strlen(key);
    int k = 0;
    for (int i = 0, j = 0, length = strlen(plainText); i < length; i++)//runs this loop for user's input of plainText.
    {
        currChar = plainText[i];
        k = j % keyLength;
        currKeyChar = key[k];
        if (isupper(currKeyChar))
        {
            currKeyIndex = currKeyChar - 'A';//to calculate Key char alpha index if the key[i] is upper case.
        }
        else
        {
            currKeyIndex = currKeyChar - 'a';//to calculate Key char alpha index if the key[i] is lower case.
        }
        //printf("currKeyChar = %i\n",  currKeyChar);
        //printf("currKeyIndex = %i\n", currKeyIndex);
        //check if a char in Plain text is alpha or not
        if (isalpha(currChar))
        {
            //check for each char(plain text) is upper case
            if (isupper(currChar))
            {
                currIndex = currChar - 'A';//to calculate the alphabetical index from 'A' to currChar
                //printf("currIndex: %i\n", currIndex);
                //printf("currKeyIndex: %i\n", currKeyIndex);
                result = ((currIndex +  currKeyIndex) % 26) + 'A';
                printf("%c", result);
            }
            //lower case check for each char(plain text).
            else
            {
                currIndex = currChar - 'a';
                //printf("currIndex: %i\n", currIndex);
                //printf("currKeyIndex: %i\n", currKeyIndex);
                result = ((currIndex +  currKeyIndex) % 26) + 'a';
                printf("%c", result);
            }
            j++;
        }
        //print non-alpha chars
        else
        {
            printf("%c", currChar);
        }
    }
    printf("\n");
    return 0;

}


//passes style50
//passes check50 cs50/2018/x/vigenere