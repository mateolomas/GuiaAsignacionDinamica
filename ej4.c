
#include<stdio.h>
double epsilon = 0.0001;
double c;

double f(double x)
{
    
    return x*x*x - 2*x*x +10;
    
}
 

 
void bisection(double (*f)(double x), double a,double b)
{
    if(f(a) * f(b) >= 0)
    {
        printf("Intervalos incorrectos ");
        return;
    }
 
    c = a;
 
    while ((b-a) >= epsilon)
    {
        c = (a+b)/2;
        if (f(c) == 0){
            printf("Raiz = %lf\n",c);
            break;
        }
        else if (f(c)*f(a) < 0){
                printf("Raiz = %lf\n",c);
                b = c;
        }
        else{
                printf("Raiz = %lf\n",c);
                a = c;
        }
    }
}
 
int main()
{
    double a,b;
    puts("Ingresa a: ");
    scanf("%lf", &a);
    puts("Ingresa b: ");
    scanf("%lf", &b);

    bisection(f, a,b);
    printf("\n");
    printf("Raiz aproximada = %lf\n",c);
 
    return 0;
}