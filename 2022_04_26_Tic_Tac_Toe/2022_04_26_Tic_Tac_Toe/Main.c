//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_04_26_Tic_Tac_Toe	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 4/26/2022 6:10:18 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************
void TicTacToe(char Spielstand[])
{
	printf("TicTac Toe\n\n");

	printf("Spieler 1: %i   Spieler 2: %i\n\n", Spielstand[0], Spielstand[1]);

	printf("\t\t1\t2\t3");
	printf("\t--------------------");
	printf("\t|     |        |    |");
}


int main(void)
{
	//Variables
	char Spielfeld[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
	int Spielstand[2]={0,0};
	int i = 0;
	int j = 0;



	//Code
	TicTacToe(Spielstand);


	getchar();
	fflush(stdin);
	getchar();
	return 0;
}