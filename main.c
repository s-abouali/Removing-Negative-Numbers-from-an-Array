#include <stdio.h>

int removeNegatives(int T[], int N)
{
    int i, j = 0;

    for (i = 0; i < N; i++)
    {
        if (T[i] >= 0)
        {
            T[j] = T[i];
            j++;
        }
    }

    return j;
}

int main()
{
    int N, i;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int T[N];

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &T[i]);
    }

    N = removeNegatives(T, N);

    printf("\nArray after removing negative numbers:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", T[i]);
    }

    printf("\nNew size = %d\n", N);

    return 0;
}
