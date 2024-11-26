#include<iostream>

using namespace std;



union UContenu;

struct SPalette
{
	int poids;
	char reference[20];
};

struct SRouleau
{
	float longueur;
	int numero;
};

enum EEtat { vide, palette, rouleau };

struct SCasier
{
	EEtat etat;
	int px, py;
	union
	{
		SPalette paletteCasier;
		SRouleau rouleauCasier;
	};
};

//struct SCasier[];

int main()
{
	cout << "Transgerbeur";

	int px, py, poids, numero;
	char reference;
	float longueur;
	
}