

#include <stdio.h>
#include <math.h>



double f(double x);
double g(double x);

double applyN(double (*ptr)(double), float x,  int N);




int main(void){
    
   
        printf("%f\n", applyN(f,2, 20));
        printf("%f\n", applyN(g,2, 20));
}
       



double applyN(double (*ptr)(double), float x,  int N){
    if(N==1){
        return ptr(x);
    }
    else{
        return ptr(applyN(ptr,x, N-1));
    }
}

double f(double x){
    return 1.0+(1.0/(1.0+x));
    }


double g(double x){
    
    return sqrt(2*x);
 
}



