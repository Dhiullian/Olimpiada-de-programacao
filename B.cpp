#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	int corredor_x,corredor_y,diferenca = 0,diferenca_final = 0,contador_volta = 0;
	
	cout<<"Informe o tempo da volta do corredor que está em primeiro:";
	cin>>corredor_x;
	cout<<"Informe o tempo da volta do ultimo corredor:";
	cin>>corredor_y;

	diferenca = corredor_y - corredor_x;
	
	for (diferenca_final = diferenca; diferenca_final <= corredor_y;diferenca_final += diferenca)
	{
		contador_volta++;
	}
	cout<<endl<<"Durante a "<<contador_volta<<"ª volta o corredor X terá dado uma volta no corredor Y.";
}
