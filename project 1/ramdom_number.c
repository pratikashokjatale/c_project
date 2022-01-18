#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // genrate randown number
   // printf("the number is %d \n ", number);
    // keep running the loop until number is guessed
    do
    {
        printf("guessed the number 1 to 100 \n ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please! \n");
        }
        else if (guess < number)
        {
            printf("higer number please! \n");
        }
        else
        {
            printf("you guessed it in %d attempts \n",nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}