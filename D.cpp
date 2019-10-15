#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	// Variaveis char para armazenamento da (c)string e da (s)substring.
	char c[1024],s[512];
	
	// cont = contador para movimenta��o dentro do substring e verifica��o se toda a substring est� presente dentro da string principal.
	int cont=1,inicio,i,j;
	
	// entrada da string principal e da substring.
	cout<<"Informe a string principal: ";
	cin>>c;
	cout<<"Informe a substring: ";
	cin>>s;
	
	// i posicionado no ultimo elemento da string principal que vai decrecendo at� chegar na primeira letra da string principal.
	for(i = strlen(c) - 1 ;i >= 0;i--)
	{
		// Compara��o do primeiro elemento da substring com a letra na posi��o atual da string principal.
		if(c[i] == s[0])
		{
			// Caso a compara��o seja verdadeira marca o inicio da compara��o entre as strings.
			inicio = i;
			
			// Realiza a compara��o entre a substring e a string principal, tem como condi��o de parada o tamanho da substring.
			for(j = i-1; cont <=strlen(s) ; j--)
			{
				/* caso o contador seja = o tamanho da substring significa que todas as compara�oes de caracteres foram verdadeiras e portanto
				 a substring inteira est� presente dentro da string principal. */
				if(cont == strlen(s))
				{
					break;
				}
				
				// Compara��o letra a letra entre as strigs e incrementa o contador para movimentar a posi��o � ser comparada.
				if(c[j] == s[cont])
				{
					cout<<"entrou "<<cont<<"x."<<endl;
					cont++;
				}
				
				// Caso alguma letra entre a sequencia de compara��es seja diferente significa que a substring n�o pertence � string principal.
				else if(c[j] != s[cont])
				{
					cout<<"Letra diferente"<<endl;
					cont= 1;
					break;
				}	
			}		
		}
		
		// Caso j� tenha sido localizado dentro da string principal � substring encerra a verifica��o.
		if(cont == strlen(s))
		{
			cout<<endl<<"Substring j� foi encontrada."<<endl;
			break;
		}
		
		/* Caso tenha chegado no primeiro elemento e o contador da substring seja 1 significa que n�o foi encontrado a substring buscada
		por tanto seta variavel como -1 */			
		else if(i == 0 && cont == 1)
		{
			cout<<endl<<"substring n�o encontrada.";
			cont = -1;
		}				
	}
	
	if(cont == -1)
		cout<<endl<<endl<<"A substring informada n�o est� presente n� string principal";
	else
		cout<<endl<<endl<<"� substring informada inicia na posi��o "<<inicio<<".";
	
	
}
