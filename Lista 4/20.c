#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
  int dia,mes,ano1,ano2,x,y,z,diasem,cont;
  cont = 0;
  while(cont<50)
  {
    printf("Sendo:\n1 - Março | 2 - Abril | 3 - Maio e assim por diante ate 11 - Janeiro | 12 - Fevereiro");
    printf("Digite o dia, o mes e o ano, respectivamente: ");
    scanf("%d %d %d",&dia,&mes,&ano2);
    ano1 = ano2/100;
    ano2 = ano2%100;
    x = 2.6*mes-0.1;
    y = ano2/4;
    z = ano1/4;
    diasem = (x + dia + ano2 + y + z - 2*ano1)%7;
    if(diasem == 0)
    {
      printf("DATA LIDA = %d/%d/%d/%d\nDOMINGO",dia,mes,ano1,ano2);
    }
    else
    {
      if(diasem == 1)
      {
        printf("DATA LIDA = %d/%d/%d/%d\nSEGUNDA-FEIRA",dia,mes,ano1,ano2);
      }
      else
      {
        if(diasem == 2)
        {
          printf("DATA LIDA = %d/%d/%d/%d\nTERÇA-FEIRA",dia,mes,ano1,ano2);
        }
        else
        {
          if(diasem == 3)
          {
            printf("DATA LIDA = %d/%d/%d/%d\nQUARTA-FEIRA",dia,mes,ano1,ano2);
          }
          else
          {
            if(diasem == 4)
            {
              printf("DATA LIDA = %d/%d/%d/%d\nQUINTA-FEIRA",dia,mes,ano1,ano2);
            }
            else
            {
              if(diasem == 5)
              {
                printf("DATA LIDA = %d/%d/%d/%d\nSEXTA-FEIRA",dia,mes,ano1,ano2);
              }
              else
              {
                if(diasem == 6)
                {
                  printf("DATA LIDA = %d/%d/%d/%d\nSABADO",dia,mes,ano1,ano2);
                }
              }
            }
          }
        }
      }
    }
    cont = cont + 1;
  }
}
