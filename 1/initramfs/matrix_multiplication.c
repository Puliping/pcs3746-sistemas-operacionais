#include "stack.h"

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
    int n_max = 100;

    int m[n_max][n_max], n[n_max][n_max], res[n_max][n_max];

    for(int i = 0; i < n_max ; i++){
        for(int j = 0 ; j < n_max ; j++){
            m[i][j] = i + j;
            n[i][j] = i + j;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += m[i][k] * n[k][j];
        }
    }

	return 0;
}
