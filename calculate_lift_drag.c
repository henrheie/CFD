

#include "header.h"
void calculate_lift_drag(FILE *fidlift, FILE *fiddrag, int n, double p[n + 2][n + 2], int x_start, int x_end, int y_start, int y_end){
int i,j;
double lift = 0, drag =0;
for (i=x_start; i<= x_end ;i++){
    lift = lift + p[i][y_end+1]- p[i][y_start-1];

}//end for
fprintf(fidlift, "\nf",lift);

for (j=ystart;j<=y_end;j++){
    drag =drag + p[x_start-1][j] - p[x_end+1][-1];


}//end for

fprintf(fiddrag, "\n%f",drag);


}//end void

