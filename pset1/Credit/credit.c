#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //Prompt for card number
    long number = get_long("Number: ");

    //Check whether given number can be a credit card
    int counter = 0;

    //Loop accros all digits
    for (int c = 0; c < 13; c++)
    {
        counter++;
    }

    if (counter < 12)
    {
        printf("INVALID\n");
        return 0;
    }
    if (counter == 14)
    {
        printf("INVALID\n");
        return 0;
    }
    if (counter > 17)
    {
        printf("INVALID\n");
        return 0;
    }
    printf("%i\n", counter);

    //Multiplying every alternate digit starting from second last
    int isum = 0;
    int length[12];

    for (int i = 0; i < counter; i++)
    {
        if (counter == 13 && i % 2 == 1)
        {
            isum = length[i] * 2;
            printf("%d\n", length[i]);
            printf("%i\n", isum);
        }
    }












}