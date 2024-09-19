#include<stdio.h>
#include<stdlib.h>

int main (void)
{ 
/// ex8

	int num1, num2;  
	float num	

  printf("\n Digite o primeiro valor que deseja: \n");
 		scanf("%d", &num1);
    printf("\n Digite o segundo valor que deseja: \n");
     	scanf("%d", &num2); 
     	
    if (num1 < num2) {
    	printf(" Este numero e menor %d \n", num1);
}
    	else if (num2 < num1) {
	
   printf(" Este numero e menor  %d \n", num2);
    	
	}
	
/// ex9
printf("\n Digite o primeiro valor que deseja: \n");
 		scanf("%d", &num1);
   if ((num1==0) || (num1<100)){
   
   printf("O numero %d esta dentro do intervalo \n\n", num1);
 
   }
   
   else{
   
   	printf("Este numero %d nao pertence ao intervalo de 1 a 100", num1);

}

/// ex10
    
    
    
  system("pause"); //pausa da tela somente para Windows
  return 0;  //retorno da função main 

}
