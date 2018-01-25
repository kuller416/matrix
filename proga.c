#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* m -  line , n - pillars */
    int m, n;
    int x, z; /* SCH */
    int mem;
    int min;
    int xmin;
    int zmin;
    int o;
    int p;
    min = 150;
    srand(time(NULL));
    m = rand() % 10 + 3;
    n = rand() % 10 + 4;
    int massive[m][n];
    int delmas[m-1][n-1];
    int k;
    printf("\nmassive\n");
    for (x = 0; x < m; x++)
    {
        for (z = 0;z < n; z++)
        {
            massive[x][z] = rand() % 99+1;
            printf("%d \t", massive[x][z]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    printf("\ndef massive\n");
    for(z = 0; z < n/2; z++)
    {
        mem = massive[0][z];
        massive[0][z] = massive [0][n-1-z];
        massive[0][n-1-z] = mem;
        mem = massive[m-1][z];
        massive[m-1][z] = massive[m-1][n-1-z];
        massive[m-1][n-1-z] = mem;
    }
    for (z = 0; z < n; z++)
        {
            mem = massive[0][z];
            massive[0][z] = massive[m-1][z];
            massive[m-1][z] = mem;

    }
            printf("\n");
            for (x = 0; x < m; x++)
    {
                for (z = 0;z < n; z++)

            printf("%d \t", massive[x][z]);
        printf("\n");
    }
    printf("\n\n");
    printf("\nmassive min\n");
        for (x = 0; x < m; x++)
    {
        for (z = 0;z < n; z++)
        {
            if (massive[x][z] < min)
            {
                min = massive[x][z];
                xmin = x;
                zmin = z;
            }
    }
    }
        for (x = 0; x < m; x++)
        {
		for (z = 0; z < n; z++)
		 {
		     if (x != xmin && z != zmin)
             {
                delmas[x][z] = massive[x][z];
                printf("%d \t", delmas[x][z]);
             }
		}
		if (x != xmin)
            printf("\n");
	}
    printf("min element %d \n" , min);
    printf("matrix size (line <Enter> pillar   ");
    scanf("%d", &o);
    scanf("%d", &p);
    int c[o][p];
    printf("\nyour massive\n");
    for (x = 0; x < o; x++)
    {
        for (z = 0; z < p; z++)
        {
            scanf("%d", &c[x][z]);
        }
    }
        for (x = 0; x < o; x++)
    {
        for (z = 0; z < p; z++)
        {
            printf("%d \t", c[x][z]);
        }
        printf("\n");
    }
    int res[m-1][p];
    if (o != n-1)
    {
        printf("NO \n");
    }
    else
    {
    for(x = 0; x < m; x++)
    {
        for(z = 0; z < p; z++)
    {
            res[x][z] = 0;
            for(k = 0; k < n; k++)
            {
                res[x][z] = delmas[x][k] * c[k][z] + res[x][z];
            }
    }
    }
    printf("\nthe result of multiplying\n");
    for (x = 0; x < m-1; x++)
{
    for (z = 0; z < p; z++)
    {
        printf("%d \t", res[x][z]);
}
printf("\n");
}

    }
return 0;
}
