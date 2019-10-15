#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	// Variaveis char para armazenamento da (c)string e da (s)substring.
	char c[1024],s[512];
	
	// cont = contador para movimentação dentro do substring e verificação se toda a substring está presente dentro da string principal.
	int cont=1,inicio,i,j;
	
	// entrada da string principal e da substring.
	cout<<"Informe a string principal: ";
	cin>>c;
	cout<<"Informe a substring: ";
	cin>>s;
	
	// i posicionado no ultimo elemento da string principal que vai decrecendo até chegar na primeira letra da string principal.
	for(i = strlen(c) - 1 ;i >= 0;i--)
	{
		// Comparação do primeiro elemento da substring com a letra na posição atual da string principal.
		if(c[i] == s[0])
		{
			// Caso a comparação seja verdadeira marca o inicio da comparação entre as strings.
			inicio = i;
			
			// Realiza a comparação entre a substring e a string principal, tem como condição de parada o tamanho da substring.
			for(j = i-1; cont <=strlen(s) ; j--)
			{
				/* caso o contador seja = o tamanho da substring significa que todas as comparaçoes de caracteres foram verdadeiras e portanto
				 a substring inteira está presente dentro da string principal. */
				if(cont == strlen(s))
				{
					break;
				}
				
				// Comparação letra a letra entre as strigs e incrementa o contador para movimentar a posição á ser comparada.
				if(c[j] == s[cont])
				{
					cout<<"entrou "<<cont<<"x."<<endl;
					cont++;
				}
				
				// Caso alguma letra entre a sequencia de comparações seja diferente significa que a substring não pertence á string principal.
				else if(c[j] != s[cont])
				{
					cout<<"Letra diferente"<<endl;
					cont= 1;
					break;
				}	
			}		
		}
		
		// Caso já tenha sido localizado dentro da string principal á substring encerra a verificação.
		if(cont == strlen(s))
		{
			cout<<endl<<"Substring já foi encontrada."<<endl;
			break;
		}
		
		/* Caso tenha chegado no primeiro elemento e o contador da substring seja 1 significa que não foi encontrado a substring buscada
		por tanto seta variavel como -1 */			
		else if(i == 0 && cont == 1)
		{
			cout<<endl<<"substring não encontrada.";
			cont = -1;
		}				
	}
	
	if(cont == -1)
		cout<<endl<<endl<<"A substring informada não está presente ná string principal";
	else
		cout<<endl<<endl<<"Á substring informada inicia na posição "<<inicio<<".";
	
	
}
