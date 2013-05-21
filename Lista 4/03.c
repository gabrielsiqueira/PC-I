#include <stdlib.h>
#include <stdio.h>

int main(){
    float C,F;
    printf(" F       C \n");
    for(F=50; F<=150; F++){
         C=5*(F-32)/9;
        printf("%.0f      %.2f \n", F, C);
    }
    return 0;
}
