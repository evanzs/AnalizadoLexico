#include <stdio.h>
#include <stdlib.h>


 FILE *arq;



// Evandro Fernandes Barreto
// Trabalho feito para matéria de compiladores
// UNESP - BAURU 2019
//--------------------------------------------------------//

//--------------------------------------------------------//

//responsavel por abrir o arquivo em pascal
abrir_arquivo ()
{
  arq = fopen("Arquivo", "rt");// abre o arquivo para gravação
  
  if (arq == NULL)
  {
    printf("Problemas na abertura do arquivo\n");
    return;
  } 
 
             
}
//--------------------------------------------------------//





//programa responsavel por verificar o fim da linha
PROXIMO (int *linha_atual, char *palavra[])
{
        int tamanho;
        
         fgets (char *palavra[], int tamanho, arq); // uma linha inteira do codigo  e retorna na varaivel palavra
         
         
         
         
        
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
         int linha_atual; // variavel contadora da linha
         char palavra[]; 
   
    abrir_arquivo();// abri o arquivo.pascal
    PROXIMO  (&linha_atual); 
    
    
    
    
    char atomo [100]; //defino a variavel atomo
    
   
    
    
    
}
