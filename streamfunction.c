#include "header.h"


void stream_function(int n, double u[n + 2][n + 2], double v[n + 2][n + 2], int h, double PSI[n][n]){
int i,j;
double psi[n+1][n+1];

for (i=0; i<=n;i++){
    for (j=0;j<=n,j++){
psi[i][j] =0.0;
    } //end for j
}//end for i
for (i=0; i<=n;i++){
    psi[i][0] = psi [i-1][0] - (v[i][0])*h;
}//end for i

for (i=0; i<=n;i++){
    for (j=0;j<=n,j++){
    psi[i][j] = psi[i][j-1] + (u[i][j])*h;

    } //end for j
}//end for i

for (i=0; i<=n;i++){
    for (j=0;j<=n,j++){

PSI[i][j] = -psi[i][j];

    } //end for j
}//end for i






}// end void
