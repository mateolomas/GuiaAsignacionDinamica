

/*Implemente una función F que reciba una función g:RR y un arreglo de N números decimales.
 La función F deberá aplicar la función g a cada elemento del arreglo y guardar cada valor de g(x) en el heap.
 La lista de imágenes g(x), almacenada en el heap, debe ser impresa desde el programa principal.*/

 #include<stdio.h>
#include<stdlib.h>



double g(double x){
    return (x*x*x)-(2*x)+90;
}

double F(double (*g)(double x), int sizeArr, double arr[sizeArr]){
    double *y = malloc(sizeof(double)*sizeArr);
    for(int i = 0; i<sizeArr;i++){
        *(y+i) = g(arr[i]);   
        printf("%f  %p\n", *(y+i),(y+i) );
    }
}

int main(void){
    int N;
    puts("Ingrese el numero de elementos");
    scanf("%d", &N);
    double array[N];
    for(int i = 0; i<N; i++){
        printf("Ingrese el elemento %d = ",i+1);
        scanf("%lf", &array[i]);
    }     
    F(*g, N, array);
    return 0;
}