#include <stdio.h>
#include <math.h>
/*
para alguns valores está estourando o double
2*n*sen(360/2n);

*/


int main(){
    int i;
    printf("Lados  |Semiperimetro\n");
    for(i=5;i<=100;i+=5){
        printf("%d\t%.4lf\n",i,(double)2*i*sin(((360/(2*i))*3.1415926535)/180));
    }
    

return 0;
}
