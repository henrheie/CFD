
#include "header.h"
void bcvel(int n, double u[n+2][n+2], double v[n+2][n+2]){
int i,j;
for (j=0;j<=n+1;j++){
        u[0][j]=0.0;
        v[0][j]=-v[1][j];
        u[n][j]=0.0;
        v[n+1][j]=-v[n][j];
    }//end for j
for (i=0;i<=n+1;i++)
    {
        v[i][n]=0.0;
        v[i][0]=0.0;
        u[i][n+1]=-u[i][n]+2.0;
        u[i][0]=-u[i][1];
    }//end for i
}//end void
