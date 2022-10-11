#include <stdio.h>
#include <stdlib.h>

float Vin=0.0,
Vled=0.0,
Iled=0.0,
R = 0.0;

int main(int argc, char *argv[]) {
	printf("CALCULADO DE RESISTORES v1.0 \n\n");
	printf("Autor:Gisele Lais\n\n");
	
	printf("Digite o valor de Vin (em Volts): ");
	scanf("%f",&Vin);
	printf("\n\n");
	printf("Digite o valor de Vled (em Volts): ");
	scanf("%f",&Vled);
	printf("\n\n");
	printf("Digite o valor de Iled (em amperes): ");
	scanf("%f",&Iled);
	printf("\n\n");
	
	R = (Vin+Vled)/Iled;
	
	printf("O Resistor para o LED, tem o valor de %.2f Ohms.\n\n",R);
	
	system("PAUSE");
	return 0;
}
