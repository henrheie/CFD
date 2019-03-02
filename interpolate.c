/*
interpolate.c
------------------------------------------------------------------------------------------
Interpolating the optimal relaxation parameter for a chosen n-value


Variables
----------
Name			Type			Description
-------------------------------------------------------------------------------------------
Global:
-------
n				int				Number of gridscells in the domain
omega			double			Relaxation paramter for iterative methods

Local:
------

nn				int				Array containg values of n
oo				double			Array containg valius for omega to the corresponding n-value
---------------------------------------------------------------------------------------------
*/


void interpolate(int n, double *omega){
	int i, nn[9] = { 0,5,10,20,30,40,60,100,500 }; /*values from sola.m*/
	double 00 = { 1.7,1.78,1.86,1.92,1.95,1.96,1.97,1.98,1.99 }; /*values from sola.m*/


	for i = 0; i < sizeof(nn); i++{
		if (n < nn[i]) {

			*omega = oo[i - 1] + (oo[i + 1] - oo[i - 1])*(n - nn[i - 1]) / (n - nn[i - 1] - nn[i - 1]);
			break; 
		
		}/*End if*/
	}/*End for*/
}/*End funciton*/