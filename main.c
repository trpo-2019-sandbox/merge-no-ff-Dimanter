#include <stdio.h>
#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int* a, int size)
{
    int min = *a;

    int* it;
    for (it = a + 1; it < a + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

void print_array(int* arr, int size)
{
    int a[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(a, 7);

    printf("Array: ");
    int i;
    for (i = 0; i < 7; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr, N_ELEMENTS(arr));

    print_array(arr, N_ELEMENTS(arr));
    printf("Min element: %d\n", min);

    return 0;
}
