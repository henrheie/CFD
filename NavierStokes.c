#include "header.h"
int main(){
int n=30, tmax=10, itmax = 300, bcpar,*p4 = &bcPar;
int i,j, testpar=1, iflag, teller=1;
int x_start = 0, x_end = 0, y_start=0, y_end=0;
double Re = 100, t,count, epsi = 1e-6, dt = 0.01, h=1.0/n;
double omega,div,beta;
double u[n+2][n+2],v[n+2][n+2],p[n+2][n+2];
double U[n][n],V[n][n],PSI[n][n];


interpolate(n,&omega);
beta=(omega*h*h)/(4*dt);
choose_BC(&bcPar,&x_start,&x_end,&y_start,&y_end);

stabilitytest(h,Rr,dt,&testpar);

if (testpar == 0.0){
    return 0;

}//end if

zeros(n,u,v,p);

FILE *fidpres;
FILE *fidLift;
FILE *fiddrag;
fidpres = fopen("PointPressure.txt","w+");
fidlift = fopen("totlift.txt","w+");
fiddrag = fopen("totdrag.txt","w+");


for(t=0; t<=tmax;t=t+dt){
    calvel(n,u,v,p,dt,h,Re,x_start,x_end,y_start,y_end);
    for (iter=1;iter<=itmax;iter++){
        if(bcPar==1.0){
            bcvel(n,u,v);
        }//end if
        else if (bcPar==2.0){
            bcvel2(n,u,v);
        }//end elseif
        else if (bcPar==3.0){
            bcvel3(n,u,v);
            }//end else if
        if (bcPar==4.0){
            bcvel4(n,u,v,p,x_start,x_end,y_start,y_end);
        }//end if
      piter(n,epsi,u,v,p,dt,h,beta,&iflag,x_start,x_end,y_start,y_end);

    if(iflag==0.0){
        break;
    }

    }//end for iter
    if(iter>=itmax){
        printf("Warning! Time t= %f,iter =%d,div=%f\n",t,iter,div);
    }//end if
    else{
        fprintf("Time t= %f \t\t iter=%d\t\n",t,iter);
    }
    if(bcPar ==3.0){
        point_pressure(fidpres,n,p);
    }
    if(bcPar ==4.0){
        calculate_lift_drag(fidlift,fiddrag,n,p,x_start,x_end,y_start,y_end);
    }
}//end for t
fclose(fidpres);
fclose(fidlift);
fclose(fiddrag);

calculateUVP(n,u,v,p,U,V,P);
stream_function(n,u,v,h,PSI);
print_results(n,u,v,p,U,V,P,PSI);
make_vtf(n,U,V,P,PSI);

return 0;
}//end main
