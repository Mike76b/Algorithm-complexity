#include <stdio.h>

/*The following rearrange the values so the minimum value is at the very left side,
and the maximum value at the very right side.
If the opposite order is required (from max to min), change:
if (val1 > val2)
to
if (val1 < val2)
The output will be:
0 1 2 3 4 5 6 7 8 9 
Array length: 10
*/

int main(void)
{
    //The following array is just an example.
    int n_list[] = {3, 6, 2, 8, 5, 1, 4, 9, 7, 0};

    int arr_length = sizeof(n_list) / sizeof(n_list[0]);
    int val1, val2;
    int swap = -1; //Swap counter.

    //Rearranging process.
    while (swap != 0)
    {
        swap = 0;
        for (int i = 0; i < (arr_length - 1); ++i)
        {
            val1 = n_list[i];
            val2 = n_list[i + 1];

            if (val1 > val2)
            {
                n_list[i] = val2;
                n_list[i + 1] = val1;
                swap += 1;
            }
        }
    }

    //Printing the ordered array.
    for (int j = 0; j < arr_length; ++j)
    {
        printf("%i ", n_list[j]);
    }
    printf("\n");
}