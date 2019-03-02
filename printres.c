#include "header.h"

void print_results(int n, double u[n + 2][n + 2], double v[n + 2][n + 2], double p[n + 2][n + 2], double U[n][n], double V[n][n], double P[n][n], double PSI[n + 1][n + 1]){
int i,j;
FILE *fpu;
FILE *fpv;
FILE *fpp;
FILE *fpU;
FILE *fpV;
FILE *fpP;
FILE *fpPSI;

fpu = fopen("uvel.txt","w+");
fpv = fopen("vvel.txt","w+");
fpp = fopen("pres.txt","w+");
fpU = fopen("U.txt","w+");
fpV = fopen("V.txt","w+");
fpp = fopen("P.txt","w+");
fpPSI = fopen("PSI.txt","w+");

for (i=0; i<=n-1;i++){
    for (j=0;j<=n-1,j++){
    fprintf(fpu, "%.10f\t",u[i][j]);
    fprintf(fpv, "%.10f\t",v[i][j]);
    fprintf(fpp, "%.10f\t",p[i][j]);
    fprintf(fpU, "%.10f\t",U[i][j]);
    fprintf(fpV, "%.10f\t",V[i][j]);
    fprintf(fpP, "%.10f\t",P[i][j]);
    fprintf(fpPSI, "%.10f\t",PSI[i][j]);


    }//end for j
    fprintf(fpu, "\n");
    fprintf(fpv, "\n");
    fprintf(fpp, "\n");
    fprintf(fpU, "\n");
    fprintf(fpV, "\n");
    fprintf(fpP, "\n");
    fprintf(fpPSI, "\n");

}//end for i
    fclose(fpu);
    fclose(fpv);
    fclose(fpp);
    fclose(fpU);
    fclose(fpV);
    fclose(fpP);
    fclose(fpPSI);



}//end void
