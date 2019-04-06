#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

int shift(char c);

int main(int argc, string argv[])
{
    int argv_length;
    int plaintext_length;
    string plaintext;
    int k;
    int m;
    int l = 0;
    if (argc != 2)
    {
        printf ("Usage: ./vigenere key\n");
        return 1;
    }
        argv_length = strlen(argv[1]);
	    for (int j = 0; j < argv_length; ++j)
        {    
            if ((argv[1][j] > 64 && argv[1][j] < 91) || (argv[1][j] > 96 && argv[1][j] < 123))
                {    
                    plaintext = get_string("plaintext: ");
                    printf("ciphertext: ");
                    string s = (argv[1]);
                    for (int i = 0; i < strlen(plaintext); i++)
                    {    
                         if islower(plaintext[i])
                         {
                             m = (l % strlen(s));
                             k = (tolower(s[m]) - 97);
                             printf("%c", (((plaintext[i] + k) - 97) % 26) + 97);
                             l += 1;
                         }
                         else if isupper(plaintext[i])
                         {
                             m = (l % strlen(s));
                             k = (tolower(s[m]) - 97);
                             printf("%c", (((plaintext[i] + k) - 65) % 26) + 65);
                             l += 1;
                         }
                         else
                         {
                             printf("%c", plaintext[i]);
                         }
                    }    
                    printf("\n");
                    return 0;
               }           
          }                          
}
