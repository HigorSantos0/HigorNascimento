/*QUESTÃO 08:
Fazer um programa que auxilie o orgão
regulador no cálculo do total de recursos 
arrecadados com a aplicação de multas de
trânsito.
O programa deve ler as seguintes
informações para cada motorista:
− O número da carteira de motorista;
− Número de multas;
− Valor de cada uma das multas.
Deve ser exibido o valor da dívida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas
as multas). O programa também deverá
apresentar o número da carteira do
motorista que obteve o maior número de
multas..*/

#include <stdio.h>
#include <limits.h>

void main()
{

  int i, nmultas, cnh, maiornmultas = INT_MIN, matricula;
  float valor, totaldivida, totalrecursos = 0;
  char opiniao;

  do
  {

    printf ("Entre com o numero da sua carteira de motorista:\n");
    scanf ("%d", &cnh);


    if (opiniao != 'S')
    {
      printf ("Entre com o numero de multas:\n");
      scanf ("%d", &nmultas);

      totaldivida = 0;

      for (i = 1; i <= nmultas; i++)
      {
        printf ("Diga o valor de cada uma das multas:\n");
        scanf ("%f", &valor);

        totaldivida += valor;
        totalrecursos += valor;

        if (nmultas > maiornmultas)
        {
            maiornmultas = nmultas;
            matricula = cnh;
        }

      }
    }

    printf ("O valor da sua divida e' = %.2f\n", totaldivida);
    

    printf ("\nDeseja sair? se sim digite S, se nao, digite N:\n");
    fflush(stdin);
    scanf ("%c", &opiniao);
    opiniao = toupper(opiniao);

  } while (opiniao != 'S');

  printf ("Total de recursos arrecadados = %.2f\n", totalrecursos);
  printf ("A cnh que obteve o maior numero de multas foi: %d\n", matricula);

}