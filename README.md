/*
	Name: Caio Lucas Lima Almeida
	Date: 24/03/21 15:01
	Description: Faça um Programa que peça dois números e imprima o maior deles
*/
	#include<stdio.h>
		#include<locale.h>
		main(){
			int n1,n2;
			setlocale(LC_ALL,"Portuguese");
			printf("Digite o número: ");
			scanf("%d",&n1);
			printf("Digite o segundo número: ");
			scanf("%d",&n2);
			if (n1>n2)
			{
			printf("O %d é o maior número",n1);
			}
			else
			{
			printf("O %d é o maior número",n2);
			}
		}
