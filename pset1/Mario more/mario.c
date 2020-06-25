#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get the proper height between 1 and 8 inclusive
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // Range of user input
    while (n < 1 || n > 8);

    // conditions for pyramid
    for (int r = 0; r < n; r++)
    {
        // Loop for left side of pyramid
        for (int left = 0; left < n ; left++)
        {
            // Left side of pyramid
            if (left + r < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        // Print the gap between the pyramids
        printf("  ");

        // Loop for right side of pyramid
        for (int right = 0; right < r + 1; right++)
        {
            printf("#");
        }

        // Go to next line
        printf("\n");
    }


}