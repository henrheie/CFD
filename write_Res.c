#include "header.h"
void write_results(FILE *f, int n, int *teller, double U[n][n], double V[n][n], double P[n][n], double PSI[n + 1][n + 1]){
fprintf(fidGL, "\n\n*RESULTS\t\t%i\n%%DIMENSION\tt\n%%PER_NODE #1,*teller);")
for (int i=0; i<n;i=i+1){
    for (int j=0;j<n;j=j+1){
        fprintf(fidGL, "\n%f", P[i][j]);
    }//end for j
}//end for i
*teller=*teller+1;
for (int i=0; i<n;i=i+1){
    for (int j=0;j<n;j=j+1){
        fprintf(fidGL, "\n%f", PSI[i][j])
    }//end for j
}//end for i

*teller = *teller+1;
for (int i=0; i<n;i=i+1){
    for (int j=0;j<n;j=j+1){
        fprintf(fidGL, "\n%f\t\t%f\t\t", U[i][j],V[i][j],0.0);
    }//end for j
}//end for i
*teller=*teller+1;
}//end void
