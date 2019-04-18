#include <stdio.h>
#include <stdlib.h>
#include <String.h>


//constantes
#define ARQUIVO "Exemplo1_Trab1_Compiladores.txt"  // aqui você pode definir qual arquivo será aberto
#define MAX 100
 FILE *arq;

//|--------------------Estrutura do lexema-----------------------|//

//|--------------------------------------------------------------|//



//|---------------------------------------------------------------|//
//|                  Evandro Fernandes Barreto                    |//
//|        Trabalho feito para matéria de compiladores            |//
//|                    UNESP - BAURU 2019                         |//
//|---------------------------------------------------------------|//


//|--------------------Estrutura do lexema-----------------------|//

typedef struct no
{
    char word[MAX];  // palavra
    char type[MAX];  // tipo da palavra
    struct no *next; // aponta pra proxima
}*lexema;

///////////////////////ESTRUTURAS DA LISTA//////////////////////////
//|-----------------------INICIA LISTA---------------------------|//

// função inicia a lista refenciada com valor vazio
init_list(lexema *lex)
{
    *lex = NULL; //lista = vazio
}
//|--------------------------------------------------------------|//
//|----------------------INSERE NA LISTA-------------------------|//

// estrutura responsavel por inserir os elementos na lista
int insert_list(lexema *lex,char tok[MAX],char typ[MAX])
{
    lexema q = (lexema)malloc(sizeof(struct no)); // cria uma estrutura lexema q
    lexema p = *lex;
                              // cria outra lexema com o conteudo do lexema (lex) referenciado
    if (q == NULL) // se tiver vazio
        return 0;

    strcpy(q->word,tok); //word = tok
    strcpy(q->type,typ); //type = typ

    q->next = NULL;     // proximo = vazio

    if (*lex == NULL)   // verifica se ta no final da lista
        *lex = q;       // SE SIM: atribui insere a nova palavra
    else {              //SENAO
        while (p->next) //PERCORRE ATÈ O FINAL
            p = p->next;
        p->next = q;    // aponta o final para o começo dessa nova palavra
        }
    return 1;
}
//|--------------------------------------------------------------|//

//|-----------------------MOSTRA A LISTA-------------------------|//
show_list(lexema *lex) {
    lexema p = *lex;
        while (p) {
            printf("palavra: ");
            puts(p->word);
            printf("\n");
            printf("tipo: ");
            puts(p->type);
        }
}
//|--------------------------------------------------------------|//



//|---------------------ABRE O ARQUIVO---------------------------|//
//responsavel por abrir o arquivo em pascal e verificar se ele existe ou não
open_arq ()
{
  arq = fopen(ARQUIVO,"rt");// abre o arquivo para gravação (rt = abrir  para leitura somente)

  if (arq == NULL)// se não existir o arquivo referenciado, da um aviso
  {
    printf("Problemas na abertura do arquivo\n");
    return;
  }
}
//|--------------------------------------------------------------|//




//|------------------------PROXIMO-------------------------------|//
//programa responsavel por verificar o fim da linha e conta-la
PROXIMO (int *linha_atual,char *palavra)
{
        char normal[100];

        fgets (palavra,100,arq);
        printf ("%s",palavra);
        linha_atual = linha_atual +1;





}
//|--------------------------------------------------------------|//


//---------------------------CODIGO---------------------------//
CODIGO ()
{
       int codigo_indentificador; // lexema de codigo
       int codigo_de_numero;      // lexema de numeral


}
//---------------------------ERRO------------------------------//

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

    open_arq();// abri o arquivo.pascal
    PROXIMO(&linha_atual,&palavra);






    char atomo [100]; //defino a variavel atomo





}
