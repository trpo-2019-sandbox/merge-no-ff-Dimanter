#include <stdio.h>

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

int main()
{
    int a[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(a, 7);

    printf("Array: ");
    int i;
    for (i = 0; i < 7; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Min element: %d\n", min);

    return 0;
}
