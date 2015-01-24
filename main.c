#include<stdio.h>
#include "PLL.h"
#include "UART0.h"

//extern void UART0_Init(void);

int main(void)
{
	char buff[50];
	PLL_Init();               // set system clock to 50 MHz

	UART0_Init();
	printf("Starting\n");
	while(1)
	{
		printf(">>");
		scanf("%50s", buff);
		printf("%s\n", buff);
	}
}
