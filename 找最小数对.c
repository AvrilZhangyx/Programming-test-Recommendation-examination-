#include <stdio.h>

#define N 1000

int main(void)
{
    int n, i;
    int x[N], y[N];
    int min;

    while (scanf("%d", &n) != EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d%d", &x[i], &y[i]);

        min = 0;
        for(i=1; i<n; i++)
        {
            if (x[i] < x[min])
                min = i;
            else if (x[i] == x[min] && y[i] < y[min])
                min = i;
        }

        printf("%d %d\n", x[min], y[min]);
    }

    return 0;
}
