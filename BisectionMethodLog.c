#include<stdio.h>
#include<math.h>

double function(double x)
{
    return x*log(x) -1.2;
}
double c;
double e = 0.00005;
void bisection(double a, double b)
{
    if(function(a)*function(b)>=0)
    {
        printf("Incorrect range");
        return;
    }
    while ((b-a) > e)
    {
        c=(a+b)/2;
        if(function(c)==0.0)
        {
            printf("Root is %lf",c);
            break;
        }
        else if(function(c)*function(a)<0)
        {
            printf("Root is %lf",c);
            b=c;
        }
        else if(function(c)*function(b)<0)
        {
            printf("Root is %lf",c);
            a=c;
        }
    }
}

int main()
{
    double a, b;
    a = 2;
    b = 3;
    printf("The function used is xlog(x) -1.2 ");
    bisection(a,b);
    printf("The accurate root is : %lf",c);
}
