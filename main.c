#include <stdio.h>
#include <stdlib.h>

int ponto;
char Ch;
int parar;
int parar=1;

/********* METODO **********************/

int ContarPonto(pto){
ponto=ponto+pto;
}



int Acertou(pto){
	
	system("color 2");
	 printf("*********************************************************************\n");
	printf (" \n Parabens ! \n voce acertou e passou para proxima fase \n \n ");
	 printf("********************************************************************* \n");
	system("pause");
	system("cls");
	ContarPonto(pto);
	
}



int Errou(){

	system("color 4");
	 printf("*********************************************************************\n");
	printf("\n \n Opa, voce errou \t fim de jogo \n \n");
	printf(" !Voce conseguiu :  %i Pontos \n \n ",ponto);
	 printf("********************************************************************* \n");
	printf(" GAME OVER !!!! :( ");
	system("pause");
	parar=0;
}




int Perguntas(){
	
//START PERGUNTA
if(parar){
	int pontoPartida=150;
	system("color 7");
	printf ("\n VALENDO %i PONTOS ",pontoPartida);
	printf("*********************************************************************");
	printf ("\n Qual sistema operacional NAO E da Microsoft ? \n \n (1) Win Xp \n (2) Win Phone \n (3) Win Vista \n (4) Android \n \n ");
	scanf ("%c",&Ch);

if (Ch=='4'){
	Acertou(pontoPartida);
	getchar();
	}
else{
	Errou();
	}
}//END PERGUNTA



//START PERGUNTA
if(parar){
	int pontoPartida=150;
	system("color 7");
	printf ("\n VALENDO %i PONTOS ",pontoPartida);
	printf("*********************************************************************");
	printf ("\n Qual componente NAO faz parte do pacote Office ? \n \n (1) Blender \n (2) Access \n (3) Excel \n (4) PowerPoint \n \n ");
	scanf ("%c",&Ch);

if (Ch=='1'){
	Acertou(pontoPartida);
	getchar();
	}
else{
	Errou();
	}
}//END PERGUNTA




//START PERGUNTA
if(parar){
	int pontoPartida=100;
	system("color 7");
	printf ("\n VALENDO %i PONTOS ",pontoPartida);
	printf("*********************************************************************");
	printf ("\n Nao eh uma linguagem de programacao ? \n \n (1) GO \n (2) Cobol \n (3) Java \n (4) NetBeans \n \n ");
	scanf ("%c",&Ch);

if (Ch=='4'){
Acertou(pontoPartida);
	getchar();
	}
else{
	Errou();
	}
}//END PERGUNTA


//START PERGUNTA
if(parar){
	int pontoPartida=200;
	system("color 7");
	printf ("\n VALENDO %i PONTOS ",pontoPartida);
	printf("*********************************************************************");
	printf ("\n Em qual pais foi criada a google ? \n \n (1) Alemanha \n (2) Estados Unidos \n (3) Australia \n (4) Brasil \n \n ");
	scanf ("%c",&Ch);

if (Ch=='2'){
Acertou(pontoPartida);
	getchar();
	}
else{
	Errou();
	}
}//END PERGUNTA



//START PERGUNTA
if(parar){
	int pontoPartida=120;
	system("color 7");
	printf ("\n VALENDO %i PONTOS ",pontoPartida);
	printf("*********************************************************************");
	printf ("\n Qual a capital do Brasil ? \n \n (1) Brasilia \n (2) Para \n (3) Fortaleza \n (4) Fernando de Noronha \n \n ");
	scanf ("%c",&Ch);

if (Ch=='1'){
	Acertou(pontoPartida);
	getchar();
	}
else{
	Errou();
	}
}//END PERGUNTA



//START PERGUNTA
if(parar){
	int pontoPartida=780;
	system("color 7");
	printf ("\n VALENDO %i PONTOS ",pontoPartida);
	printf("*********************************************************************");
	printf ("\n Quem inventou o Facebook ? \n \n (1) Steve Jobs \n (2) Michael Jordan \n (3) Bill Gates \n (4) Mark Zuckerberg \n \n ");
	scanf ("%c",&Ch);

if (Ch=='4'){
Acertou(pontoPartida);
	getchar();
	}
else{
	Errou();
	}
}//END PERGUNTA


//START PERGUNTA
if(parar){
	int pontoPartida=800;
	system("color 7");
	printf ("\n VALENDO %i PONTOS ",pontoPartida);
	printf("*********************************************************************");
	printf ("\n Em que ano Steve Jobs faceleceu ? \n \n (1) 2010 \n (2) 2011 \n (3) 2015 \n (4) 2017 \n \n ");
	scanf ("%c",&Ch);

if (Ch=='2'){
Acertou(pontoPartida);
	getchar();
	}
	
else{
	Errou();
	}
}//END PERGUNTA


//START PERGUNTA
if(parar){
	int pontoPartida=700;
	system("color 7");
	printf ("\n VALENDO %i PONTOS ",pontoPartida);
	printf("*********************************************************************");
	printf ("\n Quais as cores que corresponde as cores da imagem do GOOGLE ? \n \n (1) Amarelo, Vermelho, Verde, Preto \n (2) Vermelho, Azu, Amarelo,Marrom \n (3) Azul, Vermelho, Amarelo, Verde \n (4) Verde, Vermelho, Roxo, Amarelo \n \n ");
	scanf ("%c",&Ch);

if (Ch=='3'){
Acertou(pontoPartida);
	getchar();
	printf("********************* P A R A B E N S********************************");
	printf("\n \n Parabens !! \n Voce acertou Todas as perguntas");
	printf(" ! Voce conseguiu :  %i Pontos",ponto);
	printf("********************** !W I N N E R !*******************************");
	system("pause");
	}
	
else{
	Errou();
	}
	
}//END PERGUNTA

return 0;
}



/********* METODO **********************/
int main(void){

   int opcao;
   int x=4;
    do
    {
    	

    system("cls");
    system("color 0F");
    printf("*********************************************************************");
    printf(" \n \n JOGO DE PERGUNTAS E RESPOSTAS \n \n \n ex: Show do milhao \n \n ");
    printf(" \n \n (1) INICIAR JOGO \n \n (2) CREDITOS \n \n (3) REGRAS \n \n (4) SAIR \n \n");
    printf("*********************************************************************");
    opcao = getch();
    
    switch (opcao) {
    case '1':
        system("cls");
       Perguntas();
        break;
    case '2':
        system("cls");
        printf("Creditos\n \n UNASP-HT \n \n aluno: Deybson ferreira \n \n \n");
       
          system("pause");
        break;

    case '3':
        system("cls");
        printf("\n \n Regras ...\n");
        printf("\n \n Voce so tem 1 chance para cada pergunta  \n ao acertar voce podera acumular pontos. \n \n");
          system("pause");
        break;
   case '4':
   	
        system("cls");
        printf("voce pediu para sair, prencione qualquer tecla para continuar \n");
         x=0;
        break;
       
    default:
        printf("voce deve escolher uma opcao valida\n");
        printf("Precione qualquer tecla para voltar ao menu \n");
        system("pause");
       
        
       
    }

	}while(x == 4);
  


}


