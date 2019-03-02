
#include "header.h"
void piter((int n, double epsi, double u[n + 2][n + 2], double v[n + 2][n + 2], double p[n + 2][n + 2], double dt, double h, double beta, int *iflag, int x_start, int x_end, int y_start){
double delp,div;
for(j=1;j<=n;j++){
    for(i=1;i<=n;i++){
        if (i<x_start || i > x_end || j < y_start || j>y_end){
            div=(u[i][j]-u[i-1][j])/h+(v[i][j]-v[i][j-1])/h;  //continuity equation

            if(fabs(div)>=epsi){
                iflag=1;
            } // end if
            delp=-beta*div;
            p[i][j] = p[i][j] + delp;
            u[i][j] = u[i][j] + delp*dt/h
            u[i-1][j] = u[i-1][j] - delp*dt/h;
            v[i][j] = v[i][j] + delp*dt/h
            v[i][j-1] = v[i][j-1] - delp*dt/h;

        }//end if


    }//end for i


}//end for j



}
