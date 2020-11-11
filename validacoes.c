#include<stdio.h>

int dataValida(int dd, int mm, int aa) {
  int maiorDia;
  int bissexto(int);
  if (aa < 0 || mm < 1 || mm > 12 || dd < 1) {
    return 0;
  }
  if (mm == 2) {
    if (bissexto(aa)) {
      maiorDia = 29;
    } else {
      maiorDia = 28;
    }
  } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    maiorDia = 30;
  } else {
    maiorDia = 31;
  }
  if (dd > maiorDia) {
    return 0;
  }
 return 1;
}

int bissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1;
  } else if (aa % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}
