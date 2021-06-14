#include <stdio.h>
#include <stdlib.h>


int main() {

    while(1){
        int n_max = 5, i, j, k;

        int m[n_max][n_max], n[n_max][n_max], res[n_max][n_max];

        for(int i = 0; i < n_max ; i++){
            for(int j = 0 ; j < n_max ; j++){
                m[i][j] = rand() % 100;
                n[i][j] = rand() % 100;
            }
        }

        for (i = 0; i < n_max; i++) {
            for (j = 0; j < n_max; j++) {
                res[i][j] = 0;
                for (k = 0; k < n_max; k++)
                    res[i][j] += m[i][k] * n[k][j];
            }
        }

    }

	return 0;
}
