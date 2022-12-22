#include <iostream>

void Introdução();
int SairFicar(int Sair);
void ProcessarDados1();
void ParImpar();

int main()
{
	Introdução();
}

int SairFicar(int Sair)
{
	int sair = 0;
	std::cout << "Deseja realizar outra operação? (0 = ficar, 1 = sair)";
	std::cin >> sair;
	return sair;
}

void Introdução()
{
	setlocale(LC_ALL, "Portuguese");
	char operacaoSelecionada;
	double n1;
	double n2;
	double resposta;
	do
	{
		system("color 01");
		std::cout << "Selecione uma operação para realizar: \n" << "Adição(+), subtração(-), divisão(/ ), multiplicação(*), resto da divisão(%) ou soma exponencial[num 1 até num 2](.)?\n";
		std::cin >> operacaoSelecionada;
		std::cout << "Agora, digite o primeiro número: ";
		std::cin >> n1;
		std::cout << "E o segundo: ";
		std::cin >> n2;
		if (operacaoSelecionada == '+')
		{
			resposta = n1 + n2;
			std::cout << "Resposta: " << resposta;
		}
		else if (operacaoSelecionada == '-')
		{
			resposta = n1 - n2;
			std::cout << "Resposta: " << resposta;
		}
		else if (operacaoSelecionada == '/')
		{
			resposta = n1 / n2;
			std::cout << "Resposta: " << resposta;
		}
		else if (operacaoSelecionada == '*')
		{
			resposta = n1 * n2;
			std::cout << "Resposta: " << resposta;
		}
		else if (operacaoSelecionada == '%')
		{
			int n1a = n1;
			int n2a = n2;
			resposta = n1a % n2a;
			std::cout << "Resposta: " << resposta;
		}
	}while (SairFicar() =! 0);
		system("PAUSE");
		system("CLX");
		ProcessarDados1;
}

void ProcessarDados1(){
	double n1;
	double n2;
	double resposta;
	std::cout << "Digite outro número: ";
	std::cin >> n1;
	std::cout << "Mais um: ";
	std::cin >> n2;
	for (n1; n1 <= n2; n1++)
	{
		resposta = resposta + n1;
	}
	std::cout << "numero1^numero2 = " << resposta;
	system("PAUSE");
	system("CLX");
	ParImpar();
}

void ParImpar()
{
	int n1;
	do
	{
		std::cout << "\nAgora, vamos analisar se o número é par ou ímpar. Digite um número.\n";
		std::cin >> n1;
		if (n1 % 2 == 0)
		{
			std::cout << "\nO número " << n1 << " é par.";
		}
		else
		{
			std::cout << "\nO número " << n1 << " é ímpar.";
		}
	} while (SairFicar() = !0);
	system("PAUSE");
	system("CLX");
}