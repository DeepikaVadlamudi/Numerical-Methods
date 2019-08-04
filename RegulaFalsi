#include<stdio.h>
#include<math.h>

double func(double x)
{
    return x*x*x -5*x +1 ;
}
double e = 0.0005;
void regulaFalsi(double *x, double x0, double x1, double fx0, double fx1, int *iter)
{
    *x = x1 - ((x1 - x0)/(fx1 - fx0))*fx1;
    ++(*iter);
    printf("Iteration no : %d , x value : %lf", *iter, *x);
}
int main
{
    double x0, x1;
    x0 = 0.2016;
    x1 = 0.2017;
    double x2, x3;
    int iter = 0;
    int maxiter = 10;
    regulaFalsi(&x2, x0, x1, func(x0), func(x1), &iter)
    do
    {
        if(func(x0)*func(x2)<0)
        {
            x1 = x2;
        }
        else
        {
            x0 = x2;
        }
        regulaFalsi(&x3, x0, x1, func(x0), func(x1), &iter)
        if(fabs(x3 - x2)<e)
        {
            printf("Root is found after %d iterations and it is : %lf", *iter, x3);
            return 0;
        }
        while(iter < maxiter)
        printf("Root not found");
        return 1;
    }
}
