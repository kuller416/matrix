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
    min = 150;
    srand(time(NULL));
    m = rand() % 10 + 3;
    n = rand() % 10 + 4;
    int massive[m][n];
    for (x = 0; x < m; x++)
    {
        for (z = 0;z < n; z++)
        {
            massive[x][z] = rand() % 99;
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
                min = massive[x][z];

    }
    }
        for (x = 0; x < m; x++)
        {
		for (z = 0; z < n; z++)
		 {
			 if (massive[x][z] == min)
			  {
			      for (x; x < n; x++ )
			          massive [x][n] = massive[x][n+1];
			      for (z; z < m; z++)
                    massive[m][z] = massive[m][n+1];
			 }
		}

	}
    printf("%d" , min);
     for (x = 0; x < m-1; x++)
    {
            for (z = 0;z < n-1; z++)
            printf("%d \t", massive[x][z]);
        printf("\n");
    }
return 0;
}

