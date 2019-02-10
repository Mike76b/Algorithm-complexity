#include <stdio.h>

int main(void)
{
    // The following are sample values to work in.
    int values[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value, n;

    n = 11;
    value = 15;

    // The following validate the array's length.
    if (n <= 0)
    {
        printf("Array length is not valid.\n");
        return 1;
    }

    // Binary search implementation.
    do
    {
        // Doing the bisection to the array.
        int index = n / 2;

        // Comparing the wanted value to the searched-by-algorithm's value.
        if (value == values[index])
        {
            printf("Value %i was found!\n", value);
            return 0;
        }

        else
        {
            if (n == 1)
            {
                printf("Value %i was Not found!\n", value);
                return 2;
            }

            else
            {
                // Resizing the array while eliminating the half of the previous one.
                if (value > values[index])
                {
                    n -= (index + 1); // <-- Notice this difference between searching in the upper half than in the lower half.
                    for (int i = 0; i < n; ++i)
                    {
                        values[i] = values[(index + 1) + i];
                    }
                }

                // Resizing the array while eliminating the half of the previous one.
                if (value < values[index])
                {
                    n -= (index); // <-- Notice this difference between searching in the upper half than in the lower half.
                    for (int j = 0; j < n; ++j)
                    {
                        values[j] = values[j];
                    }
                }
            }
        }
    }
    while (n >= 1);

    printf("Value %i was Not found!\n", value);
    return 3;
}
