/*
	Name: Funzione Media
	Copyright: Colamonico Chiarulli
	Author: Baccellieri Davide
	Date: 24/01/23 13:14
	Description: Modificare la funziona precedente e far stampare nel mail il ritorno della funzione aumentato di 10.
*/


#include <iostream>
using namespace std;
 
void media(float x, float y)
{
	 float media;
	 float tot;
 
    media = (x + y) / 2;
 tot=media+10;
    cout << "La media aritmetica è: " << tot;
 
}
 
int main()
{

    float num1, num2;
	
    cout << "Inserisci il primo numero: ";
    cin>>num1;
    cout<<"Inserisci il secondo numero: ";
    cin>>num2;
    
   media(num1,num2);
   
    return 0;
}
