#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	int carta_1, carta_2;
	
	do
	{
		system("cls");
		cout<<"Informe a primeira carta:";
		cin>>carta_1;
	}while(carta_1 < 1 || carta_1 > 13);

	do
	{
		system("cls");
		cout<<"Informe a segunda carta:";
		cin>>carta_2;
	}while(carta_2 < 1 || carta_2 > 13 );
	
	if(carta_1 > carta_2)
	{
		cout<<"Voce tera mais chances de ganhar com a carta "<<carta_1;
	}
	else if(carta_2 > carta_1)
	{
		cout<<"Voce tera mais chances de ganhar com a carta "<<carta_2;
	}
		else
		{
			cout<<"Voce tera mais chances de ganhar com a carta "<<carta_1;
		}			
}
