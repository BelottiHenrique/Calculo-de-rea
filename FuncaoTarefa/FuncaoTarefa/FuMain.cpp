#include <iostream> 
#include <cstdlib>
#include <cmath>

//VARIAVEIS GLOBAIS

int opcao; 
double area;
const double Pi = 3.14159;  
//**************************\\



using std::cout;
using std::endl;
using std::cin;


//FUNCOES

// MENU PRINCIPAL
void MenuPrincipal();

// MENU DE CALCULO DE AREA
void MenuDeCalculoDeArea();

// MENU RETANGULO
void MenuRetangulo();

// MENU QUADRADO
void MenuQuadrado();

// MENU CIRCULO
void MenuCirculo();

// MENU DO TRIANGULO
void MenuTriangulo();
//********************************\\



//MENU PRINCIPAL
void MenuPrincipal() {

	while (true) {

		system("cls");
		cout << "\t|**************MENU_PRINCIPAL*************|\n";
		cout << "\t|                                         |\n";
		cout << "\t|*1 - CALCULAR AREAS                      |\n";
		cout << "\t|*2 - 404                                 |\n";
		cout << "\t|*3 - 404                                 |\n";
		cout << "\t|*4 - 404                                 |\n";
		cout << "\t|*0 - SAIR                                |\n";
		cout << "\t|*****************************************|\n\t>>> ";
		cin >> opcao;
		if (opcao == 0) {
			exit(0); //sair do programa
			break;
		}
		system("cls");  // LIMPA A TELA PARA MOSTRAR A PROXIMA EXECUSAO

		switch (opcao)
		{
		case 1: { // Calculadora de area
			MenuDeCalculoDeArea();
			break;
		}
		case 2: {
			//404
			break;
		}
		case 3: {
			//404
			break;
		}
		case 4: {
			//404
			break;
		}
		default:
			cout << "\tOPCAO INVALIDA.\n";
			return MenuPrincipal();
			break;
		}
		

	}
}
//******************************************************************************************************\\



//MENU DE CALCULO DE AREA
void MenuDeCalculoDeArea() {

	while (true)
	{
		cout << "\t|********MENU_CALCULO_DE_AREA*************|\n";
		cout << "\t|*ESCOLHA QUAL AREA VOCE QUEIRA CALCULAR.*|\n";
		cout << "\t|*1 - TRIANGULO                           |\n";
		cout << "\t|*2 - CIRCULO                             |\n";
		cout << "\t|*3 - QUADRADO                            |\n";
		cout << "\t|*4 - RETANGULO                           |\n";
		cout << "\t|*0 - VOLTAR PARA MENU PRINCIPAL          |\n";
		cout << "\t|*****************************************|\n\t>>> ";
		cin >> opcao;
		if (opcao == 0) {
			return MenuPrincipal();
			
			break;
		}
		system("cls");  // LIMPA A TELA PARA MOSTRAR A PROXIMA EXECUSAO

		switch (opcao)
		{

		case 1: { //triangulo

			MenuTriangulo();
			break;
		}
		case 2: {  //circulo

			MenuCirculo();
			break;
		}
		case 3: { //quadrado
			MenuQuadrado();

			break;
		}
		case 4: { //retangulo
			MenuRetangulo();

			break;
		}
		case 0: { //Voltar ao menu principal
			return MenuPrincipal();
			break;
		}
		default:
			cout << "\tOPCAO INVALIDA.\n";
			return MenuDeCalculoDeArea();
			break;
		}
			
	}

}
//******************************************************************************************************\\




//menu de cases 

// MENU RETANGULO
void MenuRetangulo() { 
	double baseMenor, baseMaior;
	cout << "\t|***************MENU_RETANGULO************************|\n";
	cout << "\tDIGITE OS VALORES DA BASE A ALTURA\n";
	cout << "\tBASE: ";
	cin >> baseMaior;
	cout << "\tALTURA: ";
	cin >> baseMenor;
	system("cls");
	
	if (baseMaior <= 0 || baseMenor <= 0) {
		cout << "\tALTURA E A BASE DEVEM SER VALORES POSITIVOS.\n\n\n";
		return MenuRetangulo();
	}
	area = (baseMaior * baseMenor);
	cout << "\n\tO VALOR DA AREA DO RETANGULO E: " << area << endl;
	cout << "\n\tDIGITE 1 PARA REFAZER O CALCULO OU 0 PARA VOLTAR AO MENU DE CALCULO: ";
	cin >> opcao;
	system("cls");
	if (opcao != 1) {
		return MenuDeCalculoDeArea();
	}
	return MenuRetangulo();
}


// MENU QUADRADO
void MenuQuadrado() {
	double lado;
	cout << "\t|***************MENU_QUADRADO************************|\n";
	cout << "\tDIGITE O VALOR DO LADO DO QUADRADO\n";
	cout << "\tLADO: ";
	cin >> lado;
	system("cls");

	if (lado <= 0) {
		cout << "\tO LADO DEVE SER POSITIVO.\n\n\n";
		return MenuQuadrado();
	}
	area = (lado * lado);
	cout << "\n\tO VALOR DA AREA DO QUADRADO E: " << area << endl;
	cout << "\n\tDIGITE 1 PARA REFAZER O CALCULO OU 0 PARA VOLTAR AO MENU DE CALCULO: ";
	cin >> opcao;
	system("cls");
	if (opcao != 1) {
		return MenuDeCalculoDeArea();
	}
	return MenuQuadrado();
}


//MENU CIRCULO
void MenuCirculo() {
	double raioC;
	
	cout << "\t|***************MENU_CIRCULO************************|\n";
	cout << "\tDIGITE O VALOR DO RAIO DO CIRCULO\n";
	cout << "\tRAIO: ";
	cin >> raioC;
	system("cls");

	if (raioC < 0) {
		cout << "\tO RAIO NAO PODE SER NEGATIVO.\n\n\n";
		return MenuCirculo();
	}
	area = Pi * pow(raioC, 2);
	cout << "\n\tO VALOR DA AREA DO CIRCILO E: " << area << endl;
	cout << "\n\tDIGITE 1 PARA REFAZER O CALCULO OU 0 PARA VOLTAR AO MENU DE CALCULO: ";
	cin >> opcao;
	system("cls");
	if (opcao != 1) {
		return MenuDeCalculoDeArea();
	}
	return MenuCirculo();
}


//MENU DO TRIANGULO
void MenuTriangulo() {
	double baseT, alturaT;
	cout << "\t|***************MENU_TRIANGULO************************|\n";
	cout << "\tDIGITE OS VALORES DA BASE E DA ALTURA DO TRIANGULO: \n";
	cout << "\tALTURA:                                             \n\t";
	cin >> alturaT;
	cout << "\tBASE:                                               |\n\t";
	cin >> baseT;
	system("cls");

	if (alturaT <= 0 || baseT <= 0) {
		cout << "\tALTURA E A BASE DEVEM SER VALORES POSITIVOS.\n";
		cout << "\n\n\n";
		return MenuTriangulo();
	}
	area = (baseT * alturaT) / 2;
	cout << "\n\tO VALOR DA AREA DO TRIANGULO E: " << area << endl;
	cout << "\n\tDIGITE 1 PARA REFAZER O CALCULO OU 0 PARA VOLTAR AO MENU DE CALCULO: ";
	cin >> opcao;
	system("cls");
	if (opcao != 1) {
		return MenuDeCalculoDeArea();
	}
	return MenuTriangulo();
}

//******************************************************************************************************\\







//FUNCAO MENU

int main(){
	cout << "\n\n\n\n\n\n\t\t";
	cout << "Criado por Luis Henrique Nascimento Belotti.";
	MenuPrincipal();
	cout << "\n\tPROGRAMA ENCERRADO.\n";
	return 0;
}
//******************************************************************************************************\\






//QUEM CRIOU FOI : lUÍS HENRIQUE NASCIMENTO BELOTTI


/*CODIGO FEITO A MAO TRABALANDO TUDO QUE FOI APRESENTADO NA PRIMEIRA
SEMANA.
O QUE VIMOS:
A ANATOMIA DE UM PROGRAMA EM C++
TRABALHANDO COM VARIAVEIS E CONSTANTES
CRIANDO EXPRESSÕES E INSTRUÇÕES
ORGANIZANDO EM FUNCÕES 
MAIS SOBRE O FLUXO
*****************************************************************************/