#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int nop,npe,ntpe,MS,nopMS, sexo;
  float sal,salop,salfab,medpeMA,medpeMB,medpeMC,medpeFA,medpeFB,medpeFC;
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
  sal = 500;
  //PRA BASE DE MAIOR
  printf("Digite o número do operário ou 0 para cancelar: ");
  scanf("%d",&nop);
  if(nop != 0)
  {
    printf("Digite o numero de peças fabricadas pelo operario: ");
    scanf("%d",&npe);
    printf("Digite o sexo do(a) operario(a):\n1 - Feminino\nOutro número - Masculino\n");
    scanf("%d",&sexo);
  }
  //MASCULINO
  if(npe<31 && sexo!=1 && nop!=0)
  {
    salop = sal;
    medpeMA = medpeMA + npe;
    printf("O salario do operario é: %.2f\n\n",sal);
  }
  else
  {
    if(npe>30 && npe<36 && sexo!=1 && nop!=0)
    {
      salop = sal+(sal*0.03*npe);
      medpeMB = medpeMB + npe;
      printf("O salario do operario é: %.2f\n\n",salop);
    }
    else
    {
      if(npe>35 && sexo!=1 && nop!=0)
      {
        salop = sal+(sal*0.05*npe);
        medpeMC = medpeMC + npe;
        printf("O salario do operario é: %.2f\n\n",salop);
      }
    }
  }
  //FEMININO
  if(npe<31 && sexo == 1 && nop!=0)
  {
    salop = sal;
    medpeFA = medpeFA + npe;
    printf("O salario da operaria é: %.2f\n\n",sal);
  }
  else
  {
    if(npe>30 && npe<36 && sexo == 1 && nop!=0)
    {
      salop = sal+(sal*0.03*npe);
      medpeFB = medpeFB + npe;
      printf("O salario da operaria é: %.2f\n\n",salop);
    }
    else
    {
      if(npe>35 && sexo == 1 && nop!=0)
      {
        salop = sal+(sal*0.05*npe);
        medpeFC = medpeFC + npe;
        printf("O salario da operaria é: %.2f\n\n",salop);
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
    printf("Digite o sexo do(a) operario(a):\n1 - Feminino\nOutro número - Masculino\n");
    scanf("%d",&sexo);
    //MASCULINO
    if(npe<31 && sexo != 1 && nop!=0)
    {
      salop = sal;
      medpeMA = medpeMA + npe;
      printf("O salario do operario é: %.2f\n\n",sal);
    }
    else
    {
      if(npe>30 && npe<36 && sexo != 1 && nop!=0)
      {
        salop = sal+(sal*0.03*npe);
        medpeMB = medpeMB + npe;
        printf("O salario do operario é: %.2f\n\n",salop);
      }
      else
      {
        if(npe>35 && sexo != 1 && nop!=0)
        {
          salop = sal+(sal*0.05*npe);
          medpeMC = medpeMC + npe;
          printf("O salario do operario é: %.2f\n\n",salop);
        }
      }
    }
    //FEMININO
    if(npe<31 && sexo == 1 && nop!=0)
    {
      salop = sal;
      medpeFA = medpeFA + npe;
      printf("O salario da operaria é: %.2f\n\n",sal);
    }
    else
    {
      if(npe>30 && npe<36 && sexo == 1 && nop!=0)
      {
        salop = sal+(sal*0.03*npe);
        medpeFB = medpeFB + npe;
        printf("O salario da operaria é: %.2f\n\n",salop);
      }
      else
      {
        if(npe>35 && sexo == 1 && nop!=0)
        {
          salop = sal+(sal*0.05*npe);
          medpeFC = medpeFC + npe;
          printf("O salario da operaria é: %.2f\n\n",salop);
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
  printf("FOLHA MENSAL FABRICA = %.f\nTOTAL DE PEÇAS = %d\nMEDIA PEÇA HOMENS CLASSE A = %d\nMEDIA PEÇA HOMENS CLASSE B = %d\nMEDIA PEÇA HOMENS CLASSE C = %d\nMEDIA PEÇA MULHERES CLASSE A = %d\nMEDIA PEÇA MULHERES CLASSE B = %d\nMEDIA PEÇA MULHERES CLASSE C = %d\nNUMERO OPERARIO COM MAIOR SALARIO = %d",salfab,ntpe,medpeMA,medpeMB,medpeMC,medpeFA,medpeFB,medpeFC,MS);
}
