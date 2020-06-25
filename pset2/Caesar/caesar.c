// Standard inclusions
#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

// Do not use void here !

int main(int argc, string argv[])
{
    // Getting proper key

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    char *key = argv[1];

    for (int i = 0 ; i < strlen(key) ; i++)
    {
        if (isalpha(key[i]) != 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Changing the string to integer for further caclulations

    int k = atoi(argv[1]);

    // Get the plaintext

    string ptext = get_string("plaintext: ");

    // Encipher the plaintext

    // a = (p + k) % 26 = Formula

    char a;

    printf("ciphertext: ");

    // Loop with conditions for ciphering

    for (int b = 0 ; b < strlen(ptext) ; b++)
    {
        char p = ptext[b];

        if (isalpha(ptext[b]) == 0)
        {
            a = p;
            printf("%c", a);
        }
        if (isupper(ptext[b]) != 0)
        {
            p = p - 65;
            a = (p + k) % 26;
            printf("%c", a + 65);
        }
        if (islower(ptext[b]) != 0)
        {
            p = p - 97;
            a = (p + k) % 26;
            printf("%c", a + 97);
        }

    }

    printf("\n");



}