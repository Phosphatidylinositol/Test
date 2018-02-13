#include <iostream>
#include <string>
#include <cmath>
#include "main.h"
using namespace std;

int main()
{
	int truc1(10);
	int truc2 = 10;
	string name1("custom username");
	bool nonInit;
	
	cout << "Your name : ";
	cout << name1 << endl;
	
	int& refInt(truc1);
	
	cout << "Insert a number : ";
	getLine(cin, &refInt);
	cin.ignore();
	
	int const nombreConstant(7);
	
	return 0;
}

void uneFonction(int arg)
{
	int* pointeurInt = NULL;
	pointeurInt = &arg;
}

void uneAutreFonction(int& arg)
{
	cout << "Truc de valeur : " << *arg ;
}

void uneFonctionAvecArgConstante(string const& text)
{
	// Ne peut pas modifier "text"
	cout << text;
}
