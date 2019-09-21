#include <cs50.h>
#include <stdio.h>

void hashes(int counter);

int main(void)
{
    // declaring variables
    int rows, i, j;

    //the first conditional loop to make sure the use input the right values
    do
    {
        rows = get_int("input the number of rows you want \n");
    } while (rows < 1 || rows > 8);

    //a loop that will determine the row that the other loops will print on
    for (i = 1; i <= rows; i++)
    {
        //a loop for the spaces
        for (j = rows - i; j > 0; j--)
        {
            printf(" ");
        }

        //calling hashes function
        hashes(i);

        //print the middle space
        printf("  ");

        //calling hashes function
        hashes(i);

        //make another line
        printf("\n");
    }
}

void hashes(int counter)
{
    //a loop for the hashes
    for (int k = counter; k > 0; k--)
    {
        printf("#");
    }
}
