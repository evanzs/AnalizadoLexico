#include <stdio.h>
#include <stdlib.h>
#include <String.h>

 FILE *arq;



// Evandro Fernandes Barreto
// Trabalho feito para matéria de compiladores
// UNESP - BAURU 2019
//--------------------------------------------------------//

//--------------------------------------------------------//

//responsavel por abrir o arquivo em pascal
abrir_arquivo ()
{
  arq = fopen("Exemplo1_Trab1_Compiladores.txt", "rt");// abre o arquivo para gravação

  if (arq == NULL)
  {
    printf("Problemas na abertura do arquivo\n");
    return;
  }


}
//--------------------------------------------------------//





//programa responsavel por verificar o fim da linha
PROXIMO (int *linha_atual,char *palavra)
{
        char normal[100];

        fgets (palavra,100,arq);
        printf ("%s",palavra);
        linha_atual = linha_atual +1;





}
//--------------------------------------------------------//
//--------------------------------------------------------//
CODIGO ()
{
       int codigo_indentificador; // lexema de codigo
       int codigo_de_numero;      // lexema de numeral


}
//-------------------------------------------------------//

// função responsavel por mostrar os erros
ERRO (int tipo,int linha)
{
     // tratamento de possiveis erros mostrando em que linhas estão
     if (tipo == 0 ) // simbolos desconhecidos
        printf ("[",linha,"]Simbolos especiais desconhecidos");
     if (tipo == 1) // indentificador desconhecido
         printf ("[",linha,"] ERRO: Indentificador invalido");
     if (tipo == 3)// numeral mal formado
        printf  ("[",linha,"] ERRO: Numeral mal formado ou fora do escopo");


        // erro dentro do erro
     if  (tipo > 3)
         printf ("[",linha,"]Erro desconhecido");

}
//-------------------------------------------------------//

int main ()
{
         int linha_atual =0; // variavel contadora da linha
         char palavra;
printf ("\n%i",linha_atual);
    abrir_arquivo();// abri o arquivo.pascal
    PROXIMO(&linha_atual,&palavra);
    printf ("\n%d",&linha_atual);





    char atomo [100]; //defino a variavel atomo





}
