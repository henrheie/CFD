
#include "header.h"
void stabilitytest(double h, double Re, double dt, int *testpar){

for (int i=1; i < 2 ; i++){

    if (checkstability[i]<min){
        min = checkstability[i];
    }//end if
    if(dt>min){
        printf("warning!!\n");
        printf("Calculation stopped. Dt is too big\n");
        *testpar = 0;
    }// end if

} // end for


}// end void
