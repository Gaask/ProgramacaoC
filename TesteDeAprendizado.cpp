#include <iostream>

void Introdu��o();
int SairFicar(int Sair);
void ProcessarDados1();
void ParImpar();

int main()
{
	Introdu��o();
}

int SairFicar(int Sair)
{
	int sair = 0;
	std::cout << "Deseja realizar outra opera��o? (0 = ficar, 1 = sair)";
	std::cin >> sair;
	return sair;
}

void Introdu��o()
{
	setlocale(LC_ALL, "Portuguese");
	char operacaoSelecionada;
	double n1;
	double n2;
	double resposta;
	do
	{
		system("color 01");
		std::cout << "Selecione uma opera��o para realizar: \n" << "Adi��o(+), subtra��o(-), divis�o(/ ), multiplica��o(*), resto da divis�o(%) ou soma exponencial[num 1 at� num 2](.)?\n";
		std::cin >> operacaoSelecionada;
		std::cout << "Agora, digite o primeiro n�mero: ";
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
	std::cout << "Digite outro n�mero: ";
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
		std::cout << "\nAgora, vamos analisar se o n�mero � par ou �mpar. Digite um n�mero.\n";
		std::cin >> n1;
		if (n1 % 2 == 0)
		{
			std::cout << "\nO n�mero " << n1 << " � par.";
		}
		else
		{
			std::cout << "\nO n�mero " << n1 << " � �mpar.";
		}
	} while (SairFicar() = !0);
	system("PAUSE");
	system("CLX");
}