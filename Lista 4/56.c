#include <stdio.h>

int main(void){

int i = 0;
float x1, x2, y;

printf("digite o numero positivo y: ");
scanf("%f", &y);

x1 = y/2;

for(i; i < 20; i++){

x2 = ((x1*x1)+y)/(2 * x1);
x1 = x2;

}

printf("\na raiz quadrada de %f e %f", y, x2);

return 0;
}
