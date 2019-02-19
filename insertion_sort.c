#include <stdio.h>

/* With a Big O of O(n^2).
The following rearrange the values so the minimum value is at the very left side,
and the maximum value at the very right side.
The output will be:
0 1 2 3 4 5 6 7 8 9
Array length: 10
*/

int main(void)
{
    //The following array is just an example.
    int values[] = {3, 6, 2, 8, 5, 1, 4, 9, 7, 0};

    // Array length.
    int n = sizeof(values) / sizeof(values[0]);

    // Sorting loop.
    for (int i = 0; i < n; i++)
    {
        int element = values[i];
        int j = i;

        // Ordering process.
        while (j > 0 && values[j - 1] > element)
        {
            values[j] = values[j - 1];
            j--;
        }

        values[j] = element;
    }

    //Printing the ordered array.
    for (int j = 0; j < n; ++j)
    {
        printf("%i ", values[j]);
    }
    printf("\n");
}