
#include "header.h"
void bcvel3(int n, double u[n+2][n+2], double v[n+2][n+2]){
int i,j;
for (j=0;j<=n+1;j++){
    u[0][j]=1.0;
    if (j>10 && j<20){
            u[0][j]=0.0;
    }//end if
    u[0][j]=0.005*u[0][j];
    u[n][j]=[n-1][j];
    v[n+1][j]=-v[n][j];

}//end for
for (i=0;i<=n+1;i++){
    v[i][n]=0.0;
    v[i][0]=0.0;
    u[i][n+1]=u[i][n];
    u[i][0]=u[i][1];
}//end for


}//end void
