#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
  int dia,mes,ano1,ano2,x,y,z,diasem,cont;
  cont = 0;
  printf("Sendo:\n1 - Março, 2 - Abril, 3 - Maio\n4 - Junho, 5 - Julho, 6 - Agosto\n7 - Setembro, 8 - Outubro, 9 - Novembro\n10 - Dezembro, 11 - Janeiro, 12 - Fevereiro\n");
  while(cont<50)
  {
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
      printf("\nDATA LIDA = %d/%d/%d%d\nDOMINGO\n\n",dia,mes,ano1,ano2);
    }
    else
    {
      if(diasem == 1)
      {
        printf("\nDATA LIDA = %d/%d/%d%d\nSEGUNDA-FEIRA\n\n",dia,mes,ano1,ano2);
      }
      else
      {
        if(diasem == 2)
        {
          printf("\nDATA LIDA = %d/%d/%d%d\nTERÇA-FEIRA\n\n",dia,mes,ano1,ano2);
        }
        else
        {
          if(diasem == 3)
          {
            printf("\nDATA LIDA = %d/%d/%d%d\nQUARTA-FEIRA\n\n",dia,mes,ano1,ano2);
          }
          else
          {
            if(diasem == 4)
            {
              printf("\nDATA LIDA = %d/%d/%d%d\nQUINTA-FEIRA\n\n",dia,mes,ano1,ano2);
            }
            else
            {
              if(diasem == 5)
              {
                printf("\nDATA LIDA = %d/%d/%d%d\nSEXTA-FEIRA\n\n",dia,mes,ano1,ano2);
              }
              else
              {
                if(diasem == 6)
                {
                  printf("\nDATA LIDA = %d/%d/%d%d\nSABADO\n\n",dia,mes,ano1,ano2);
                }
              }
            }
          }
        }
      }
    }
    cont = cont + 1;
    return 0;
  }
}
