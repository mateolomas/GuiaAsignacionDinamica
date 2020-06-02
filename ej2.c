

/*⦁	Implementar una función getNumFibo que reciba un entero
 N y grabe los primeros N números de 
la serie de Fibonacci en el heap, para luego ser impresos 
desde el programa principal.*/


#include<stdio.h>
#include<stdlib.h>


int N;



int getNumFibo(int N){
    if (N <=1)
        return N;
    else 
        return getNumFibo(N-1) + getNumFibo(N-2);
        
}


int main(void){
    puts("Ingrese un N");
    scanf("%d", &N);
    int *x = malloc(sizeof(int)*N);
    if(x == NULL){
        puts("Memory Exceeded");
    }
    else{ 
    for(int i=0; i<N; i++){
        *(x+i) = getNumFibo(i);
        printf("%d %p\n ", *(x+i), (x+i));}
    }
}