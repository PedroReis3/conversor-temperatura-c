#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int menu;
	float temperatura, celsius, fahrenheit, kelvin, temperaturaCelsius;
	int sair = 0;
	
	do {
		
		system("cls");
		printf("========== CONVERSOR =========\n");
	    printf("\n1 - Celsius para Fahrenheit\n");
	    printf("2 - Fahrenheit para Celsius\n");
	    printf("3 - Celsius para Kelvin\n");
	    printf("4 - Kelvin para Celsius\n");
	    printf("5 - Sair\n");
	    printf("\n==============================\n");
	
	    printf("\nEscolha o tipo de conversao: ");
	    scanf("%d", &menu);

	    while (menu < 1 || menu > 5){
	    	
	        printf("\nEscolha invalida!\n");
	        printf("Faca sua escolha: ");
	        scanf("%d", &menu);
	        
		}
		
		switch(menu){
		        	
		    case 1: 
				printf("Digite a temperatura em Celsius: ");
		    	scanf("%f", &celsius);
		    	temperaturaCelsius = celsius;
		    	temperatura = (celsius * 9 / 5) + 32;
		    	printf("\n==============================\n");
		    	printf("\nResultado:");
		    	printf("\n%.2f C = %.2f F\n", celsius, temperatura);
			break;
							
			case 2:	
				printf("\nDigite a temperatura em Fahrenheit: ");
		    	scanf("%f", &fahrenheit);
		    	temperaturaCelsius = (fahrenheit - 32) * 5 / 9;
		    	temperatura = temperaturaCelsius;
		    	printf("\n==============================\n");
		    	printf("\nResultado:");
		    	printf("\n%.2f F = %.2f C\n", fahrenheit, temperatura);
			break;
			
			case 3:
				printf("\nDigite a temperatura em Celsius: ");
		    	scanf("%f", &celsius);
		    	temperaturaCelsius = celsius;
		    	temperatura = celsius + 273.15;
		    	printf("\n==============================\n");
		    	printf("\nResultado:");
		    	printf("\n%.2f C = %.2f K\n", celsius, temperatura);
			break;
			
			case 4:
				printf("\nDigite a temperatura em Kelvin: ");
		    	scanf("%f", &kelvin);
		    	temperaturaCelsius = kelvin - 273.15;
		    	temperatura = temperaturaCelsius;
		    	printf("\n==============================\n");
		    	printf("\nResultado:");
		    	printf("\n%.2f K = %.2f C\n", kelvin, temperatura);
			break;
					
			case 5: 
				printf("Encerrando...");
				sair = 5;
			break;
		}
		
		if (menu != 5){
			
			if (temperaturaCelsius < 10){
    			printf("Muito frio\n");
			}
			else if (temperaturaCelsius < 20){
    			printf("Frio\n");
			}
			else if (temperaturaCelsius < 30){
    			printf("Agradavel\n");
			}
			else if (temperaturaCelsius < 35){
    			printf("Quente\n");
			}
			else{
    			printf("Muito quente\n");
			}	
			
		    printf("\n==============================\n");
		    printf("\nDeseja realizar outra conversao?\n");
			printf("\n1 - Sim\n");
			printf("2 - Nao, sair\n");
			printf("\nFaca sua escolha: ");
			scanf("%d", &sair);
						
			while (sair < 1 || sair > 2){
				printf("Escolha invalida.\n");
				printf("\nFaca sua escolha: ");
				scanf("%d", &sair);
			}
		    	
		    if (sair == 2){
		    	printf("\nEncerrando...");
		    	menu = 5;
			}
		}
	} while (menu != 5);

	return 0;
}
