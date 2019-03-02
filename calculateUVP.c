/*
*/
#include "header.h"

void calculateUVP(int n,double u[n + 2][n + 2], double v[n + 2][n + 2], double p[n + 2][n + 2], double U[n][n], double V[n][n], double P[n][n]){
int i,j;
for (i=0; i<=n-1;i++){
    for (j=0;j<=n-1,j++){
        U[j][i] = (u[i][j+1]+u[i+1][j+1])/2;
        V[j][i] = (v[i+1][j]+v[i+1][j+1])/2;
        P[j][i] = p[i+1][j+1];
    }//end for j
}//end for i

}//end void
