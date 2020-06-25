// Standard files
#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(void)
{

    // Getting user to input text

    string text = get_string("Text : ");

    // Counting the number of letters

    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        // Conditions to know when to add letters

        if (text[i] >= 'a' && text[i] <= 'z')
        {
            letters++;
        }

        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            letters++;
        }
    }

// Counting number of words

    int words = 0;

    for (int j = 0 ; j < strlen(text) ; j++)
    {
        // Conditions to know when to add words

        if (j == 0)
        {
            words++;
        }

        if (text[j] == ' ')
        {
            if (text[j + 1] >= 'a' && text[j + 1] <= 'z')
            {
                words++;
            }

            if (text[j + 1] >= 'A' && text[j + 1] <= 'Z')
            {
                words++;
            }

            if (text[j + 1] == '"')
            {
                words++;
            }

        }

    }

    // Counting the number of sentences

    int sentences = 0;

    // Conditions to know when to add sentences

    for (int k = 0 ; k < strlen(text) ; k++)
    {
        if (text[k] == '.' || text[k] == '?' || text[k] == '!')
        {

            sentences++;

        }
    }

    // Calculating L and S

    float L = 0;
    L = (float)letters / words * 100;

    float S = 0;
    S = (float)sentences / words * 100;

    // Calculating Coleman-Liau index

    int index = 0;

    // Coleman-Liau formula

    index = round(0.0588 * L - 0.296 * S - 15.8);

    // Special Answers

    if (index <= 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }

    if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }

    // Printing Final result
    printf("Grade %i\n", index);

}