// Find distinct elements common to all rows of a matrixGiven a n x n matrix.
// The problem is to find all the distinct elements common to all rows of thematrix.
// The elements can be printed in any order

#include <stdio.h>
int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &m, &n);
    printf("m=%d \tn=%d \n", m, n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nInput matrix is ......\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // prepare hash map for first element of array
    int hash[n];
    for (int i = 0; i < n; i++)
    {
        hash[i] = a[0][i];
    }

    int count[n];
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            for (int x = 0; x < n; x++)
            {
                if (a[i][j] == hash[x])
                {
                    count[x] = count[x] + 1;
                }
            }
        }
    }
    printf("After testing...!\n");

    printf("common elements :\t");
    for (int i = 0; i < n; i++)
    {
        if (count[i] >= n)
        {
            printf("%d\t", hash[i]);
        }
    }
    printf("\n");
}