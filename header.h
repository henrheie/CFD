#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

void interpolate(int n, double *omega);

void choose_BC(int *bc_par, int *x_start, int *x_end, int *y_start, int *y_end);

void stability_test(double h, double Re, double dt, int *test_par);

void zeros(int n, double u[n + 2][n + 2], double v[n + 2][n + 2], double p[n + 2][n + 2]);

void calvel(int n, double u[n + 2][n + 2], double v[n + 2][n + 2], double p[n + 2][n + 2], double dt, double h, double Re, int x_start, int y_start, int y_end);

void bcvel(int n, double u[n + 2][n + 2], double v[n + 2][n + 2]);

void bcvel2(int n, double u[n + 2][n + 2], double v[n + 2][n + 2]);

void bcvel3(int n, double u[n + 2][n + 2], double v[n + 2][n + 2]);

void bcvel4(int n, double u[n + 2][n + 2], double v[n + 2][n + 2], double p[n + 2][n + 2], int x_start, int x_end, int y_start, int y_end);

void piter(int n, double epsi, double u[n + 2][n + 2], double v[n + 2][n + 2], double p[n + 2][n + 2], double dt, double h, double beta, int *iflag, int x_start, int x_end, int y_start, int y_end);

void point_pressure(FILE *fidpres, int n, double p[n + 2][n + 2]);

void calculate_lift_drag(FILE *fidlift, FILE *fiddrag, int n, double p[n + 2][n + 2], int x_start, int x_end, int y_start, int y_end);

void calculateUVP(int n,double u[n + 2][n + 2], double v[n + 2][n + 2], double p[n + 2][n + 2], double U[n][n], double V[n][n], double P[n][n]);

void stream_function(int n, double u[n + 2][n + 2], double v[n + 2][n + 2], int h, double PSI[n][n]);

void print_results(int n, double u[n + 2][n + 2], double v[n + 2][n + 2], double p[n + 2][n + 2], double U[n][n], double V[n][n], double P[n][n], double PSI[n + 1][n + 1]);

void make_vtf(int n, double U[n][n], double V[n][n], double P[n][n], double PSI[n + 1][n + 1];

void write_header(FILE *f, int n);

void write_results(FILE *f, int n, int *teller, double U[n][n], double V[n][n], double P[n][n], double PSI[n + 1][n + 1]);

void write_steps(FILE *f, int n, int *teller);

