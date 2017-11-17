/* Juego de Tres en Raya */
//Mario Guiberteau Lopez

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


			//Variables globales

char t[3][3]={
			 {' ',' ',' '},
			 {' ',' ',' '},
			 {' ',' ',' '}
			};
int jugadorn,sw=0;
int coorI=0,coorJ=0;
int ganar=0;
int turno=0;


			//Prototipo de Funciones 

void dibujar(void);
void introducir(void);
void jugar(void);
void quitar(void);
void comprobar(void);


main()
{
	do{
		dibujar();
		if(turno>=6)
		{
			quitar();
		}
		introducir();
		jugar();
		comprobar();
	}while(ganar==0);	
	getch();

}

void dibujar()
{	
	system("cls");
	printf("\n\tJUEGO DE LAS TRES EN RAYA\n");
	printf("\n\t============================");
	printf("\n\t|        |        |        |");
	printf("\n\t|    %c   |    %c   |    %c   |", t[0][0],t[0][1],t[0][2]);
	printf("\n\t|________|________|________|");
	printf("\n\t|        |        |        |");
	printf("\n\t|    %c   |    %c   |    %c   |", t[1][0],t[1][1],t[1][2]);
	printf("\n\t|________|________|________|");
	printf("\n\t|        |        |        |");
	printf("\n\t|    %c   |    %c   |    %c   |", t[2][0],t[2][1],t[2][2]);
	printf("\n\t|        |        |        |");
	printf("\n\t============================");	
	
}

void introducir()
{
	printf("\n\nBIENVENIDOS AL TRES EN RAYA!!!\n");
	printf("\nJugador 1 son las 'X'\n");
	printf("Jugador 2 son los 'O'\n");
	printf("\nPara jugar introduzcas valores desde [0,0] hasta [2,2]");	

	
	if(sw==0)	
	{
		do{
			jugadorn=1;
			printf("\n\nJugador 1 introduce coordenadas i: ");
			scanf("%d",&coorI);
			printf("Jugador 1 introduce coordenadas j: ");
			scanf("%d",&coorJ);
		}while(t[coorI][coorJ]!=' ' || coorI>2 || coorJ>2);
		sw=1;
	}
	else
	{
		do{
			jugadorn=2;
			printf("\n\nJugador 2 introduce coordenadas i: ");
			scanf("%d",&coorI);
			printf("Jugador 2 introduce coordenadas j: ");
			scanf("%d",&coorJ);		
		}while(t[coorI][coorJ]!=' ' || coorI>2 || coorJ>2);
		sw=0;
	}	
	
}

void jugar()
{	
	
	if(jugadorn==1)
	{
		t[coorI][coorJ]='X';
	}else{
		t[coorI][coorJ]='O';
	}
	
	dibujar();
	
		
}

void quitar()
{
	
		if(jugadorn==1)
		{
			jugadorn=2;
		}	
		else
		{
			jugadorn=1;
		}	
		
	if(jugadorn==1)
	{
		do{
			printf("\n\nJugador 1 quita una ficha, introduce i: ");
			scanf("%d",&coorI);
			printf("Jugador 1 quita una ficha, introduce j: ");
			scanf("%d",&coorJ);
		}while(t[coorI][coorJ]!='X');
		t[coorI][coorJ]=' ';	
	}
	else
	{
		do{
			printf("\n\nJugador 2 quita una ficha, introduce i: ");
			scanf("%d",&coorI);
			printf("Jugador 2 quita una ficha, introduce j: ");
			scanf("%d",&coorJ);			
		}while(t[coorI][coorJ]!='O');
		t[coorI][coorJ]=' ';	
	}
	
	dibujar();	
	
}

void comprobar()
{
		turno=turno+1;
		//Jugador 1 GANA
	if(t[0][0]=='X' && t[0][1]=='X' && t[0][2]=='X' && ganar==0)
	{
		printf("\n\nJugador 1 ha ganado!");
		ganar=1;
	}
	
	if(t[1][0]=='X' && t[1][1]=='X' && t[1][2]=='X' && ganar==0)
	{
		printf("\n\nJugador 1 ha ganado!");
		ganar=1;
	}
	if(t[2][0]=='X' && t[2][1]=='X' && t[2][2]=='X' && ganar==0)
	{
		printf("\n\nJugador 1 ha ganado!");
		ganar=1;
	}
	if(t[0][0]=='X' && t[1][0]=='X' && t[2][0]=='X' && ganar==0)
	{
		printf("\n\nJugador 1 ha ganado!");
		ganar=1;
	}
	if(t[0][1]=='X' && t[1][1]=='X' && t[2][1]=='X' && ganar==0)
	{
		printf("\n\nJugador 1 ha ganado!");
		ganar=1;
	}
	if(t[0][2]=='X' && t[1][2]=='X' && t[2][2]=='X' && ganar==0)
	{
		printf("\n\nJugador 1 ha ganado!");
		ganar=1;
	}
	if(t[0][0]=='X' && t[1][1]=='X' && t[2][2]=='X' && ganar==0)
	{
		printf("\n\nJugador 1 ha ganado!");
		ganar=1;
	}
	if(t[0][2]=='X' && t[1][1]=='X' && t[2][0]=='X' && ganar==0)
	{
		printf("\n\nJugador 1 ha ganado!");
		ganar=1;
	}
	
		//Jugador 2 GANA
	if(t[0][0]=='O' && t[0][1]=='O' && t[0][2]=='O' && ganar==0)
	{
		printf("\n\nJugador 2 ha ganado!");
		ganar=1;
	}
	
	if(t[1][0]=='O' && t[1][1]=='O' && t[1][2]=='O' && ganar==0)
	{
		printf("\n\nJugador 2 ha ganado!");
		ganar=1;
	}
	if(t[2][0]=='O' && t[2][1]=='O' && t[2][2]=='O' && ganar==0)
	{
		printf("\n\nJugador 2 ha ganado!");
		ganar=1;
	}
	if(t[0][0]=='O' && t[1][0]=='O' && t[2][0]=='O' && ganar==0)
	{
		printf("\n\nJugador 2 ha ganado!");
		ganar=1;
	}
	if(t[0][1]=='O' && t[1][1]=='O' && t[2][1]=='O' && ganar==0)
	{
		printf("\n\nJugador 2 ha ganado!");
		ganar=1;
	}
	if(t[0][2]=='O' && t[1][2]=='O' && t[2][2]=='O' && ganar==0)
	{
		printf("\n\nJugador 2 ha ganado!");
		ganar=1;
	}
	if(t[0][0]=='O' && t[1][1]=='O' && t[2][2]=='O' && ganar==0)
	{
		printf("\n\nJugador 2 ha ganado!");
		ganar=1;
	}
	if(t[0][2]=='O' && t[1][1]=='O' && t[2][0]=='O' && ganar==0)
	{
		printf("\n\nJugador 2 ha ganado!");
		ganar=1;
	}
}

