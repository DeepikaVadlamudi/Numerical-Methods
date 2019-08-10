#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double f(double x)
{
    return x*x*x - 6*x + 4;
}

double f1(double x)
{
    return 3*x*x - 6;
}

double f2(double x)
{
     return 6*x;
}

double z = 0.005;

int main()
{
    double x0 = 1;
    double x1 =0;
    double a,b,c,d,e,g;
    for(int i=0; i< 11; i++)
    {
        printf("x0 : %lf",x0);
        printf("i is %d\n",i);
        a = f(x0);
        b = f1(x0);
        c = f2(x0);
        d = a*a;
        e = b*b*b;
        printf("a : %lf\n b: %lf\n c : %lf\n d : %lf\n e : %lf\n",a,b,c,d,e);
         x1 = x0 - (a/b) -((c*d)/(2*e));
        printf("x1 : %lf\n",x1);
        g = fabs(x1 - x0);
        printf("g : %lf", g);
        if(g<z)
        {
            printf("Root is %lf",x1);
            return 0;
        }
        x0 = x1;
    }
    printf("Root is %lf",x0);
    return 1;
}
