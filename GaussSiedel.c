#include<stdio.h>
#include<math.h>

double fx(double y, double z)
{
    double x;
    x = (14 - 3*y - z)/10 ;
    return x;
}

double fy(double x, double z)
{
    double y;
    y = ((-5 - 2*x - 3*z)/(10))*(-1) ;
    return y;
}

double fz(double x, double y)
{
    double z;
    z = (14 - x - 3*y)/10 ;
    return z;
}

void main()
{
    double x,y,z;
    double x1, y1, z1;
    int maxiter = 7;
    int i,j;
    x = 0;
    y = 0;
    z = 0;
    for(i=0;i<=maxiter;i++)
    {
            x1 = fx(y,z);
            y1 = fy(x1,z);
            z1 = fz(x1,y1);
            x = x1;
            y = y1;
            z = z1;
            printf("The values after iteration %d are x: %lf\t y: %lf\t z:%lf\n",i,x,y,z);
    }
    printf("The final values are x: %lf\t y: %lf\t z:%lf\n",x,y,z);

}
