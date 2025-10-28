#include <iostream>
#include "../include/calculadora.h"

using namespace std;

int main() {
    Calculadora calc;
    int opcao;
    double a, b;

    cout << "==============================\n";
    cout << "     CALCULADORA INTERATIVA   \n";
    cout << "==============================\n";

    do {
        cout << "\nEscolha uma operacao:\n";
        cout << "1. Somar\n";
        cout << "2. Subtrair\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Potencia\n";
        cout << "6. Raiz quadrada\n";
        cout << "0. Sair\n";
        cout << "Opcao: ";
        cin >> opcao;

        try {
            if (opcao >= 1 && opcao <= 5) {
                cout << "Digite o primeiro numero: ";
                cin >> a;
                cout << "Digite o segundo numero: ";
                cin >> b;
            } else if (opcao == 6) {
                cout << "Digite o numero: ";
                cin >> a;
            }

            switch (opcao) {
                case 1: cout << "Resultado: " << calc.somar(a, b) << endl; break;
                case 2: cout << "Resultado: " << calc.subtrair(a, b) << endl; break;
                case 3: cout << "Resultado: " << calc.multiplicar(a, b) << endl; break;
                case 4: cout << "Resultado: " << calc.dividir(a, b) << endl; break;
                case 5: cout << "Resultado: " << calc.potencia(a, (int)b) << endl; break;
                case 6: cout << "Resultado: " << calc.raizQuadrada(a) << endl; break;
                case 0: cout << "Saindo...\n"; break;
                default: cout << "Opcao invalida!\n"; break;
            }
        } catch (const exception& e) {
            cerr << "Erro: " << e.what() << endl;
        }

    } while (opcao != 0);

    return 0;
}
