#include "header.h"

void write_steps(FILE *f, int n, int *teller){
fprintf(fidGL, "\n\n*GLVIEWSCALAR 1\n%%NAME \"Pressure\" ");
for (int i=1; i<=(*teller/3); i=i+1){

    fprintf(fidGL,"\n%%STEP\t\t%i\t\t\n%i",i,(i*3)-2);
}//end for

fprintf(fidGL, "\n\n*GLVIEWSCALAR\t2\n%%NAME\t\"Streamfunction\" ");
for (int i=1; i<=(*teller/3); i=i+1){
fprintf(fidGL, "\n%%STEP\t\t%i\t\n%i",i,(i*3)-1);
}//end for

fprintf(fidGL,"\n\n*GLVIEWVECTOR\t1\n%%NAME\t\"Velocity\"\t");
for (int i=1; i<=(*teller/3); i=i+1){
        fprintf(fidGL, "\n%%STEP\t\t%i\t\n%i",i,i*3);
}//end for


}//end void
