

//|---------------------------------------------------------------|//
//|                  Evandro Fernandes Barreto                    |//
//|        Trabalho feito para matéria de compiladores            |//
//|                    UNESP - BAURU - 2019                       |//
//|---------------------------------------------------------------|//



#include <stdio.h>
#include <stdlib.h>
#include <String.h>






//constantes
#define ARQUIVO "Exemplo1_Trab1_Compiladores.txt"  // aqui você pode definir qual arquivo será aberto
#define MAX 100
	
 


 FILE *arq;

//|--------------------Estrutura do lexema-----------------------|//

//|--------------------------------------------------------------|//





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
/////////////////////////////////////////////////////////////////////////////////////////////////////////


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
int PROXIMO (int line ,char *word)
{		
    int cont = 0;
    int i = 0;    
        char token [100];
		 
        fgets (word,100,arq); // le uma linha
        
        line++;
        
    while (word[cont] != NULL)
	{
		  
		  
		  token[cont] = word [cont];
		  cont++;
		  
		  if (((word[cont]> 31) && (word[cont]< 48))||( (word[cont]> 57) && (word[cont]< 65)))
		  {
			
			CODIGO (&token);		
			
		  }
		  
		  
		  		
	}    
        
        
        
       
         
	
		


}
//|--------------------------------------------------------------|//









//---------------------------CODIGO---------------------------//
CODIGO (char *token,lexema *lexa)
{
      int result=0;
      int i = 0;
      
      if (!strcmp(token,"program"))
        insere_lista(l,token,"c_program");    
     else if (!strcmp(token,"VAR"))
          insere_lista(lexa,token,"c_var");
     else if (!strcmp(token,"begin"))
          insere_lista(lexa,token,"c_begin");
     else if (!strcmp(token,"end"))
          insere_lista(lexa,token,"c_end");
    else if (!strcmp(token,"int"))
          insere_lista(lexa,token,"c_int");     
   	else if (!strcmp(token,"string"))
          insere_lista(lexa,token,"c_string"); 
	else if (!strcmp(token,"write"))
          insere_lista(lexa,token,"c_write");
	else if (!strcmp(token,"read"))
          insere_lista(lexa,token,"c_read");  
		  
		  
		  

		  	  	

}
//---------------------------ERRO------------------------------//

// função responsavel por mostrar os erros
ERRO (int tipo,int linha)
{
     // tratamento de possiveis erros mostrando em que linhas estão
     if (tipo == 0 ) // simbolos desconhecidos
        printf ("[ %d ] Simbolos especiais desconhecidos.\n",linha);
     if (tipo == 1) // indentificador desconhecido
         printf ("[ %d ] ERRO: Indentificador invalido.\n",linha);
     if (tipo == 2)// numeral mal formado
        printf  ("[ %d ] ERRO: Numeral mal formado ou fora do escopo.\n",linha);


        // erro dentro do erro
     if  (tipo > 2)
         printf ("[ %d ]Erro desconhecido.\n",linha);

}
//-------------------------------------------------------//

int main ()
{
     // variavel contadora da linha
    char word[100];
	int line = 0;
	int cont = 0;
	int  i = 0;
	char token[100];
    open_arq();// abri o arquivo.pascal
    
    
    PROXIMO (0,&word);
    
    
    
    
    
    
  
   	
	

	
	



    char atomo [100]; //defino a variavel atomo





}
