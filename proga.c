#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    /* m -  line , n - stolbiki */
    int m, n;
    int x, z; /* schetchiki */
    int mem;
    int min;
    int mem1;
    int xmin;
    int zmin;
    min = 150;
    srand(time(NULL));
    m = rand() % 10 + 3;
    n = rand() % 10 + 4;
    int massive[m][n];
    int delmas[m-1][n-1];
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
    printf("%d" , min);

return 0;
}
