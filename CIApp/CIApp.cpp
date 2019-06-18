#include <iostream>
#include "Registro.cpp"
#include <stdlib.h>

using namespace std;

int main (){

    int op;
    Registro r;

    do
    {
        cout << "Escolha entre as opções do menu" << endl;
        cout << "1 - Criar Formulário" << endl;
        cout << "2 - Buscar Formulário" << endl;
        cout << "3 - Atualizar Formulário" << endl;
        cout << "4 - Remover Formulário" << endl;
        cout << "0 - Sair do menu" << endl;
        cin >> op;
        cin.ignore();

        switch (op)
        {
        case 1:
        	system("cls||clear");
            r.CriarFormulario();
            break;

        case 2: 
        	system("cls||clear");
            r.BuscarFormulario();
            break;

        case 3:
        	system("cls||clear");
            r.AtualizarFormulario();
            break;

        case 4:
        	system("cls||clear");
            r.RemoverFormulario();
            break;
        
        default:
            break;
        }

    } while (op != 0);
    
      
    return 0;
}