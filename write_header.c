#include "header.h"

void write_header(FILE *f, int n){
fprintf(f, "*VTF-1.00 \n !noder \n*NODES \t\t\t\t\t 1"); // Writes the node coordinate
for (int i=0; i<n; i=i++){
    for (int j=0; j<n;n++){
        fprintf(f, "\n%f\t\t%f\t\t%f",(j+1.0),(i+1.0),0.0);

    }//end for j

}//end for i
fprintf(fidGL, "\n\n*ELEMENTS\t\t\t\t 1 \n%%NODES #1\n%%QUADS");
for(int j=0; j<(n-1); j++){
    for(int i=0; i<(n-1); i++){
   fprintf(fidGL, "\n%i\t\t%5i\t\t%5i\t\t%5i",i+(j*n),i+1+(j*n),i+n+1(j*n),i+n+(j*n)");
    }//end for i
}//end for j
fprintf (fidGL, "\n\n*GLVIEWGEOMETRY 1\n%%ELEMENTS\n1\n");
}//end void
