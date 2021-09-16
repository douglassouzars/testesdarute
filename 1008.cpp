/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

Entrada
O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

Saída
Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int NUMBER, VH;
  double SALARY, HT;

  cin >> NUMBER >> VH >> HT;

  SALARY = VH* HT;  

  cout <<"NUMBER = " << NUMBER << "\nSALARY = U$ "<< fixed << setprecision(2) << SALARY << endl;

  return 0;
}
Adicionado nova linha de comando
Nesta linha irei informa q estou modificando o arquivo da senhorita ROOT
para tal ação me indentifico como DOUGLAS RODRIGUES SOUZA OU DR.
