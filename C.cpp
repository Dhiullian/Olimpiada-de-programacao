#include <iostream>
#include <locale.h>
struct player{
	int pontos;
	int indice;
};
using namespace std;

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	int num_jogador,rodadas,pontos,x;
	
	cout<<"Informe o número de jogadores:";
	cin>>num_jogador;
	cout<<"Informe o número de rodadas que serão jogadas:";
	cin>>rodadas;
	cout<<endl;
	
	player vet[num_jogador] = {};
	
	for(int i = 0;i < rodadas;i++)
	{
		for(int j = 0; j <num_jogador; j++)
		{
			cout<<"Informe a pontuação do "<<j+1<<"º jogador: ";
			cin>>x;
			vet[j].pontos +=x;
			if (i == 0)
				vet[j].indice = j+1;
		}
		cout<<endl;	
	}
	
	player aux;
	int mudou = 0;
	
	for(int i = 0; i < num_jogador;i++)
	{
		if (i == 0)
		{
			aux.indice = i+1;
			aux.pontos = vet[i].pontos;
		}
		else if (aux.pontos < vet[i].pontos)
		{
			aux.indice = i+1;
			aux.pontos = vet[i].pontos;
		}
		
	}
	
	cout<<"O campeão do torneio foi o jogador "<<aux.indice<<" com "<<aux.pontos<<" pontos.";
	
}
