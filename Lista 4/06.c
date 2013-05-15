// Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
// Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessário
// para que essa massa se torne menor que 0,5 gramas; escreva a massa inicial, a massa
// final e o tempo calculado em horas, minutos e segundos.
//ATENÇÃO: Isso é uma copi-cola safada que achei no gugli. <3

#include <stdio.h>

int main() {
  int tmpTt, tmpHr, tmpMm, tmpSg;
  float msInicial, msFinal;

  printf("Massa Inicial (em Gramas):\n");
  scanf("%f", &msInicial);

  msFinal = msInicial;
  tmpTt = 0;
  while (msFinal >= 0.5) {
    msFinal = msFinal / 2;
    tmpTt = tmpTt + 50;
  }

  printf("\n");
  printf("Massa Inicial.: %7.0f gramas.\n", msInicial);
  printf("Massa Final...: %9.2f gramas.\n", msFinal);

  printf("\n");
  printf("Tempo Total...: %d segundos.\n", tmpTt);
  tmpHr = (tmpTt / 3600);
  tmpMm = (tmpTt % 3600) / 60;
  tmpSg = (tmpTt % 3600) % 60;
  printf("Tempo Dividido: %d horas:%d minutos:%d segundos.", tmpHr, tmpMm, tmpSg);
}
