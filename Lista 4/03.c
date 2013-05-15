#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    float C,F;
    F = 50;
    while(F<151)
    {
        C = (5*(F-32))/9;
        printf("Valor de F = %1.f Valor de C = %.2f\n",F,C);
        F = F + 1;
    }
}
