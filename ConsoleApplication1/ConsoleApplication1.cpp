#include "pch.h"
#include <iostream>
#include<windows.h>
using namespace std;
#define SPACE 32;
#define UP 72;
#define LEFT 75;
#define DOWN 80;
#define RIGHT 77;


//отображение поля 
const int sizeX = 10;
const int sizeP = 20;

int Array1[sizeX][sizeP];


void Show()
{
	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeP; ++j) {

			cout << Array1[i][j] << ends;

		}
		cout << endl;
	}





}


//передвидение фигур
void MoveToPlus()
{





}

// передвижение плюса
void MovePlus()
{




}


// инициализаци
void Initiolize()
{
	for (int i = 0; i < sizeX; i++) {
		for (int j = 0; j < sizeP; ++j) {
			Array1[i][j] = 0;

		}
	}

	Array1[0][0] = 1;
	Array1[3][2] = 1;
	Array1[6][0] = 1;
	Array1[9][3] = 1;
	Array1[1][18] = 2;
	Array1[3][19] = 2;
	Array1[5][17] = 2;
	Array1[9][19] = 2;
	


	



}



int main()
{
	Initiolize();
	Show();
	

}

