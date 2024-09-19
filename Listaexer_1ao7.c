#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (void) {
	
	printf("BOM DIA, BOA TARDE, BOA NOITE :) \n OLA MUNDO, VAMOS COMECAR A LISTA DE EXERCICIOS MEUS AMIGOS :P \n"); // Ex 1
	
	// Ex 2
	int num1, num2, soma, mult, div;
	float num3, num4, num5, num6, num7, media;
	int numx ;// Variavel inteira que vai ser usada para o exercício 6
	soma=0;
	div=0;
	mult=0;
	media=0;	
	
	printf("\n Digite o primeiro valor que deseja: \n");
    	scanf("%d", &num1);
    printf("\n Digite o segundo valor que deseja: \n");
     	scanf("%d", &num2); 
    soma= num1+num2; 
	printf("\n A soma dos numeros foi: %.2d", soma);
	
	//Ex 3
    mult= num1*num2;
    printf("\n O produto dos dois numeros foi: %.2d", mult);
    
    // Ex 4
    div= num1/num2;
     printf("\n A divisao foi %.2d \n\n", div);
     
     //Ex 5
    printf("\n Digite o primeiro valor desejado: \n");
     	scanf("%f", &num3);
    printf("\n Digite o segundo valor desejado: \n");
     	scanf("%f", &num4);
    printf("\n Digite o terceiro valor desejado: \n");
     	scanf("%f", &num5); 	
    media= (num3+num4+num5)	/ 2;
    printf("\n A media dos numeros foi: %.2f \n\n", media);
 	
/// Ex 6

    printf("\n Digite um numero: \n");
       scanf("%d", &numx);
       
    if (numx > 0){
	
    printf("\n Esse numero  %.2d positivo \n", numx );
}
    else if (numx < 0) {
	
    printf("\n Esse numero  %.2d negativo \n", numx);
}
    else if (numx == 0){
    	 printf("\n Esse numero e nulo (zero): %.2d \n", numx);
	}
    
    ///// Ex7
    printf("\n Digite o primeiro valor que deseja: \n");
 		scanf("%d", &num6);
    printf("\n Digite o segundo valor que deseja: \n");
     	scanf("%d", &num7); 
     	
    if (num6 > num7) {
    	printf(" Este numero e maior %f \n", num6);
}
    	else if (num6 > num7) {
	
   printf(" Este numero e maior  %f \n", num7);
    	
	}
    
    
    
    
  system("pause"); //pausa da tela somente para Windows
  return 0;  //retorno da função main 
}
