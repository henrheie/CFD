#include "header.h"

void make_vtf(int n, double U[n][n], double V[n][n], double P[n][n], double PSI[n + 1][n + 1]){

int teller=1;
FIlE  *fidGL;
fidGL = fopen("GLview.vtf","w+");

skrivHeader(fidGL,n);
skrivRes(fidGL,n,&teller,P,PSI,U,V);
skrivSteg(fidGL,n,&teller);

fclose(fidGL);



}//end void
