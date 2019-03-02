#include "header.h"
void calvel(int n, double u[n+2][n+2],double v[n+2][n+2],double p[n+2][n+2],double dt, double h, double Re, int x_start, int x_end, int y_start, int y_end){
int i,j;
double fux, fuy, fvx, fvy, visu, visv;

for (i=1; i<=n; i++){
    for (j=1;j<=n; j++){
        if (i<x_start || i> x_end || j<y_start || j>y_end){
            fux=((u[i][j]+u[i+1][j])*(u[i][j]+u[i+1][j])-(u[i-1][j]+u[i][j])*(u[i-1][j]+u[i][j]))*0.25/h;
            fuy=((v[i][j]+v[i+1][j])*(u[i][j]+v[i][j+1])-(v[i][j-1]+v[i+1][j-1])*(u[i][j-1]+u[i][j]))*0.25/h;
            fvx=((u[i][j]+u[i][j+1])*(v[i][j]+u[i+1][j])-(u[i-1][j]+u[i-1][j+1])*(v[i-1][j]+v[i][j]))*0.25/h;
            fvy=((v[i][j]+v[i][j+1])*(v[i][j]+v[i][j+1])-(v[i][j-1]+v[i][j])*(v[i][j-1]+v[i][j]))*0.25/h;

            visu=(u[i+1][j]+u[i-1][j]+u[i][j+1]+u[i][j-1]-4.0*u[i][j])/( Re*h*h);
            visv=(v[i+1][j]+v[i-1][j]+v[i][j+1]+v[i][j-1]-4.0*v[i][j])/( Re*h*h);
            u[i][j]=u[i][j]+dt*((p[i][j]-p[i+1][j])/h-fux-fuy+visu);
            v[i][j]=v[i][j]+dt*((p[i][j]-p[i][j+1])/h-fvx-fvy+visv);
        } //end if
    } //end for j
}//end for i

}//end void
