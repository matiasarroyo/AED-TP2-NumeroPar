/*TP2 - Numero Par
*Matias Arroyo
*Legajo 144658-7
*20/04/2015
*/

#include <iostream>
using namespace std;
int main( ) 
{
	int numero;
	int resto;
	cout<<"Ingrese un numero\n";
	cin>>numero;
	resto = numero % 2;
	if ( resto == 0 )
		cout<<"El numero es par\n";
	else
		cout<<"El numero es impar\n";
return 0;	
}	
