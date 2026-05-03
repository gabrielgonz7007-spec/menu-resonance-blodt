#include <stdio.h>
#include <stdlib.h>

void MenuJuego(){
	
	
printf("+--------------------------------------------------------------+\n");
printf("|  ____  _____ ____   ___  _   _    _    _   _  ____ _____     |\n");
printf("| |  _ \\| ____/ ___| / _ \\| \\ | |  / \\  | \\ | |/ ___| ____|    |\n");
printf("| | |_) |  _| \\___ \\| | | |  \\| | / _ \\ |  \\| | |   |  _|      |\n");
printf("| |  _ <| |___ ___) | |_| | |\\  |/ ___ \\| |\\  | |___| |___     |\n");
printf("| |_| \\_\\_____|____/ \\___/|_| \\_/_/   \\_\\_| \\_|\\____|_____|    |\n");
printf("|                                                              |\n");
printf("|                 ---   B  L  O  D  T   ---                    |\n");
printf("+--------------------------------------------------------------+\n");
printf("|  1. Iniciar Partida                                          |\n");
printf("|  2. Ajustes                                                  |\n");
printf("|  3. Salir                                                    |\n");
printf("+--------------------------------------------------------------+\n");
printf("\n> Selecciona una opcion: ");
}	
	
int main(){

int opcion;

do {
	
system("color 0D");
	
MenuJuego();
        scanf("%d", &opcion);	
	
	switch(opcion) {
	
		
case 1:

printf("\n Cargando Partida\n");	
	
		break;
	
 case 2:

 printf("Cargando AJUSTE");	
	
 break;	
	
case 3:

printf("EXIT----HASTA LUEGO");	


default:
	("Opcion Incorrecta-ntente de nuevo");
	
	
break;	
}
	
	
}while(opcion != 3); 




	
	
	return 0;
}















