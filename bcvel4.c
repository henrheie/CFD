#include "header.h"
void bcvel4(int n, double u[n+2][n+2], double v[n+2][n+2], double p[n+2][n+2],int x_start, int x_end, int y_start,int y_end)
{


for (int i=x_start; i <= x_end;i++){
    v[i][y_start-1]= 0.0;
    v[i][y_end]=0.0;
    u[i][y_start]=-u[i][y_start-1];
    u[i][y_end] = -u[i][y_end+1];


}//end for i

for (int j = y_start; j<= y_end; j++){
    u[x_start-1][j] = 0.0;
    u[x_end][j] = 0.0;
    v[x_start][j] = -v[x_start-1][j];
    v[x_end][j] = -v[x_end][j];


}//end for j

u[x_start-1][y_start]=0.0;
v[x_start][y_start-1]=0.0;

u[x_start-1][y_end]=0.0;
v[x_start][y_start]=0.0;

u[x_end][y_end]=0.0;
v[x_end][y_end]=0.0;






}//end void
