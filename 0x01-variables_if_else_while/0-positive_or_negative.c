#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints whether a randomly generated number is positive, negative, or zero
 *
 * Return: 0 on success
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("%d ", n);

        if (n > 0)
        {
                printf("is positive\n");
        }
        else if (n < 0)
        {
                printf("is negative\n");
        }
        else
        {
                printf("is zero\n");
        }

        return (0);
}

