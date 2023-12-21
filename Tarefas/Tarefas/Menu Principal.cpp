#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

const double Pi = 3.14159;

int main() {
    int opcao;
    double area;

    while (true) {
        cout << "\tMENU DE CALCULO DA AREA\n\n";
        cout << "\tESCOLHA QUAL AREA VOCE DESEJA CALCULAR OU DIGITE 0 PARA FINALIZAR:\n";
        cout << "\t1 - TRIANGULO\n";
        cout << "\t2 - CIRCULO\n";
        cout << "\t3 - QUADRADO\n";
        cout << "\t4 - RETANGULO\n";
        cout << "\t0 - SAIR\n\t>> ";
        cin >> opcao;

        if (opcao == 0) {
            break;
        }


        system("cls");

        switch (opcao) {
        case 1: { // TRIÂNGULO
            double baseT, alturaT;
            cout << "\n\tDIGITE OS VALORES DA BASE E DA ALTURA DO TRIANGULO:\n";
            cout << "\tAltura: ";
            cin >> alturaT;
            cout << "\tBase: ";
            cin >> baseT;
            system("cls");

            if (alturaT <= 0 || baseT <= 0) {
                cout << "\tAltura e base devem ser valores positivos.\n";
                cout << "\n\n\n";
                return main();
                break;

            }

            area = (baseT * alturaT) / 2;
            cout << "\n\tO VALOR DA AREA DO TRIANGULO E: " << area << endl;
            
            break;
        }

        case 2: { // CÍRCULO
            double raioC;
            cout << "\n\tDIGITE O VALOR DO RAIO DO CIRCULO:\n";
            cout << "\tRaio: ";
            cin >> raioC;
            system("cls");

            if (raioC < 0) {
                cout << "\tO RAIO NAO PODE SER NEGATIVO.\n\n\n";
                return main();
                break;
            }

            area = Pi * pow(raioC, 2);
            cout << "\n\tO VALOR DA AREA DO CIRCULO E: " << area << endl;
            break;
        }

        case 3:  // QUADRADO

            double lado1;
            cout << "\n\tDIGITE OS VALOR DO LADO DO QUADRADO: \n";
            cout << "\tLADO: ";
            cin >> lado1;
            system("cls");

            if (lado1 <= 0 ) {
                cout << "\tO LADO 1 DEVE SER POSITIVO.\n";
                cout << "\n\n\n";
                return main();
                break;
            }
            area = (lado1 * lado1);
            cout << "\n\tO VALOR DA AREA DO QUADRADO E: " << area << endl;
          break;


        case 4:  // RETANGULO
            double baseMenor, baseMaior;
            cout << "\n\tDIGITE OS VALORES DO LADO 1 E DO LADO 2 DO QUADRADO: \n";
            cout << "\tLADO 1: ";
            cin >> baseMenor;
            cout << "\tLADO 2: ";
            cin >> baseMaior ;
            system("cls");

            if (baseMaior <= 0 || baseMaior <= 0) {
                cout << "\tAltura e base devem ser valores positivos.\n";
                cout << "\n\n\n";
                return main();
                break;

            }
            area = (baseMaior * baseMenor);
            cout << "\n\tO VALOR DA AREA DO QUADRADO E: " << area << endl;
            break;



        default:
            cout << "\tOPÇÃO INVÁLIDA.\n";
            break;
        }
        
        cout << "\n\tDIGITE 1 PARA VOLTAR AO MENU OU 0 PARA SAIR: ";
        cin >> opcao;
        system("cls");
        if (opcao != 1) {
            break;
        }
    }

    cout << "\n\tPROGRAMA ENCERRADO.\n";
    return 0;
}
