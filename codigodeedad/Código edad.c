
#include <stdio.h>
#define MESES_MAX 12
#define MESES_MIN 1
#define DIA_MAX 31
#define DIA_MIN 1


int main(void)
{
	do {

		int Repet;
		int anioAc,diaAc,mesAc;
		int anioNac, diaNac, mesNac;
		int edad;
	
		printf ("Escribe el año actual\n");
		scanf ("%d", & anioAc);
		do
		{
			printf("Escribe el mes actual numericamente\n");
			scanf("%d", &mesAc);
			if (mesAc < MESES_MIN || mesAc > MESES_MAX)
			{
				printf("Mes invalido. Por favor, escribe un mes valido (1-12).\n");
			}
		} while (mesAc < MESES_MIN || mesAc > MESES_MAX);
		do
		{
			printf ("Escribe tu año de nacimiento\n");
			scanf ("%d", & anioNac);
			if (anioNac>anioAc)
			{
				printf ("AC1o invalido. El año de su nacimiento no puede ser mayor al aC1o actual.\n");
			}
		} while (anioNac>anioAc);
		do
		{
			printf("Escribe tu mes de nacimiento numéricamente\n");
			scanf("%d", &mesNac);
			if (mesNac < MESES_MIN || mesNac > MESES_MAX)
			{
				printf("Mes invalido. Por favor, escribe un mes válido (1-12).\n");
			}
		} while (mesNac<MESES_MIN || mesNac > MESES_MAX);
		if (mesAc==mesNac)
		{
			do
			{
				printf ("Escribe el día actual\n");
				scanf ("%d", & diaAc);
				if (diaAc<DIA_MIN|| diaAc>DIA_MAX)
				{
					printf("Día inválido.Por favor, escribe un día válido (1-31).\n");
				}
			} while (diaAc<DIA_MIN|| diaAc>DIA_MAX);
			do
			{
				printf("Escribe tu día de nacimiento:\n");
				scanf("%d", &diaNac);
				if(diaNac < DIA_MIN || diaNac > DIA_MAX)
				{
					printf("Día invalido. Por favor, escribe un día valido (1-31).\n");

				}
			} while (diaNac < DIA_MIN || diaNac > DIA_MAX);
		}
		edad = anioAc - anioNac;
		if ((mesAc<mesNac)||(mesAc==mesNac && diaAc<diaNac))
		{
			edad--;
		}
		printf("Tu edad es: %d\n",edad);
		printf("Quieres repetir el prgrama? 1 para si, 0 para no.\n");
		scanf("%d", &Repet);
	} while  (Repet == '1');
	printf("Programa finalizado.\n");
	return 0;
}