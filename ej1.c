/*Implemente una función applyN que reciba tres parámetros: 
(a) una función f: R-> R, (b) un número x, y (c) un entero N. La función debe retornar el valor f(f(f(f(…(x)…)))), 
donde f es aplicada N veces sobre el parámetro x. Utilice applyN para verificar las siguientes aproximaciones*/

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



