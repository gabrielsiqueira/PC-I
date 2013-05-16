#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int nop,npe,ntpe,MS,nopMS;
  float sal,salop,salfab,medpeMA,medpeMB,medpeMC,medpeFA,medpeFB,medpeFC;
  char sexo;
  nop = 1;
  medpeMA = 0;
  medpeMB = 0;
  medpeMC = 0;
  medpeFA = 0;
  medpeFB = 0;
  medpeFC = 0;
  salfab = 0;
  ntpe = 0;
  MS = 0;
  printf("Digite o valor do salário mínimo atual: ");
  scanf("%f",&f);
  //PRA BASE DE MAIOR
  printf("Digite o número do operário ou 0 para cancelar: ");
  scanf("%d",&nop);
  printf("Digite o numero de peças fabricadas pelo operario: ");
  scanf("%d",&npe);
  printf("Digite o sexo do(a) operario(a) (M/F): ");
  scanf("%c",&sexo);
  //MASCULINO
  if(npe<31 && sexo == "M" && nop!=0)
  {
    salop = sal;
    medpeMA = medpeMA + npe;
    printf("O salario do operario é: %.2f",sal);
  }
  else
  {
    if(npe>30 && npe<36 && sexo == "M" && nop!=0)
    {
      salop = sal+(sal*0.03*npe);
      medpeMB = medpeMB + npe;
      printf("O salario do operario é: %.2f",salop);
    }
    else
    {
      if(npe>35 && sexo == "M" && nop!=0)
      {
        salop = sal+(sal*0.05*npe);
        medpeMC = medpeMC + npe;
        printf("O salario do operario é: %.2f",salop);
      }
    }
  }
  //FEMININO
  if(npe<31 && sexo == "F" && nop!=0)
  {
    salop = sal;
    medpeFA = medpeFA + npe;
    printf("O salario da operaria é: %.2f",sal);
  }
  else
  {
    if(npe>30 && npe<36 && sexo == "F" && nop!=0)
    {
      salop = sal+(sal*0.03*npe);
      medpeFB = medpeFB + npe;
      printf("O salario da operaria é: %.2f",salop);
    }
    else
    {
      if(npe>35 && sexo == "F" && nop!=0)
      {
        salop = sal+(sal*0.05*npe);
        medpeFC = medpeFC + npe;
        printf("O salario da operaria é: %.2f",salop);
      }
    }
  }
  ntpe = ntpe + npe;
  salfab = salfab+salop;
  MS = salop;
  nopMS = nop;
  //REPETIÇÃO
  while(nop != 0)
  {
    printf("Digite o número do operário ou 0 para cancelar: ");
    scanf("%d",&nop);
    printf("Digite o numero de peças fabricadas pelo operario: ");
    scanf("%d",&npe);
    printf("Digite o sexo do(a) operario(a) (M/F): ");
    scanf("%c",&sexo);
    //MASCULINO
    if(npe<31 && sexo == "M" && nop!=0)
    {
      salop = sal;
      medpeMA = medpeMA + npe;
      printf("O salario do operario é: %.2f",sal);
    }
    else
    {
      if(npe>30 && npe<36 && sexo == "M" && nop!=0)
      {
        salop = sal+(sal*0.03*npe);
        medpeMB = medpeMB + npe;
        printf("O salario do operario é: %.2f",salop);
      }
      else
      {
        if(npe>35 && sexo == "M" && nop!=0)
        {
          salop = sal+(sal*0.05*npe);
          medpeMC = medpeMC + npe;
          printf("O salario do operario é: %.2f",salop);
        }
      }
    }
    //FEMININO
    if(npe<31 && sexo == "F" && nop!=0)
    {
      salop = sal;
      medpeFA = medpeFA + npe;
      printf("O salario da operaria é: %.2f",sal);
    }
    else
    {
      if(npe>30 && npe<36 && sexo == "F" && nop!=0)
      {
        salop = sal+(sal*0.03*npe);
        medpeFB = medpeFB + npe;
        printf("O salario da operaria é: %.2f",salop);
      }
      else
      {
        if(npe>35 && sexo == "F" && nop!=0)
        {
          salop = sal+(sal*0.05*npe);
          medpeFC = medpeFC + npe;
          printf("O salario da operaria é: %.2f",salop);
        }
      }
    }
    if(salop>MS)
    {
      MS = salop;
      nopMS = nop;
    }
    ntpe = ntpe + npe;
    salfab = salfab+salop;
  }
  printf("FOLHA MENSAL FABRICA = %.f\nTOTAL DE PEÇAS = %d\nMEDIA PEÇA HOMENS CLASSE A = %d\nMEDIA PEÇA HOMENS CLASSE B = %d\nMEDIA PEÇA HOMENS CLASSE C = %d\nMEDIA PEÇA MULHERES CLASSE A = %d\nMEDIA PEÇA MULHERES CLASSE B = %d\nMEDIA PEÇA MULHERES CLASSE C = %d\nNUMERO OPERARIO COM MAIOR SALARIO = %d",salfab,ntpe,medpeMA,medpeMB,medpeMC,medpeFA,medpeFB,medpeFC,MS)
}
