#include<stdlib.h>
#include<stdio.h>
#include <locale.h>
/*Na recep��o do setor de interna��o tem um terminal de orienta��o aos clientes. O usu�rio deve informar
o n�mero do quarto desejado para saber a dire��o a tomar � direita ou esquerda � no corredor*/
main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("diga o n�mero do quarto desejado: ");
	scanf("%d",&n);
	if(n%2==0){
		printf("V� para a Direita");
	}
	else{
		printf("V� para a Esquerda");
	}
}
