#include <iostream>
#include <vector>
#include <algorithm>
#include "Formulario.cpp"
#include <stdlib.h>

using namespace std;

class Registro{
    private:
        vector <Formulario> Form; 
		int idRegistro;       

    public:    
         Registro();
         ~Registro();
         void CriarFormulario();
         void BuscarFormulario();
         void AtualizarFormulario();
         void RemoverFormulario();
};

Registro::Registro(){
	this->idRegistro = 1;
}

Registro::~Registro(){
	
}

void Registro::CriarFormulario(){

    string remetente, destinatario, mensagem;
    Formulario f;

    cout << "Entre com seu nome (remetente): " << endl;
    getline(cin, remetente);
    f.setRemetente(remetente);
    cout << "Entre com o destinat�rio da mensagem: " << endl;
    getline(cin, destinatario);
    f.setDestinatario(destinatario);
    cout << "Agora digite sua mensagem" << endl;
    getline(cin, mensagem);
    f.setMensagem(mensagem);
    
    f.setId(idRegistro);

	f = Formulario(idRegistro, remetente, destinatario, mensagem);

    Form.push_back(f);
    cout << "Formul�rio realizado com sucesso!" << endl;
    cout << "Este � seu n�mero de registro: " << this->idRegistro++ << endl;
    cout << "Não o perca para eventuais consultas ou altera��es no formul�rio." << endl;
    
    system("pause");
    system("cls||clear");
}

void Registro::BuscarFormulario(){

    int id, buscaPosicao;
    int tamVector = Form.size();

    cout << "Entre com o n�mero de registro do seu formul�rio: ";
    cin >> id;
    
    for (int i = 0; i < tamVector; i++)
        if (Form[i].getId() != id)
			cout << "Formul�rio n�o existente ou encontrado!" << endl;
		else{
            buscaPosicao = i;
            cout << "Id: " << Form[buscaPosicao].getId() << endl;
            cout << "Remetente: " << Form[buscaPosicao].getRemetente() << endl;
            cout << "Destinat�rio: " << Form[buscaPosicao].getDestinatario() << endl;
            cout << "Mensagem: " << Form[buscaPosicao].getMensagem() << endl;   
        }    
		
	system("pause");
    system("cls||clear");   
           
}

void Registro::AtualizarFormulario(){

	int idProcurado, op;
	int buscaPosicao = 0;
	int tamVector = Form.size();
	string novoRemetente, novoDestinatario, novaMensagem;
	
	cout << "Informe o n�mero de registro do seu formul�rio: ";
	cin >> idProcurado;	
	
	for (int i = 0; i < tamVector; i++)
        if (Form[i].getId() == idProcurado)
			buscaPosicao = i;
		
		
	do{
		cout << "O que deseja alterar no formul�rio" << endl;
		cout << "1 - Remetente" << endl;
		cout << "2 - Destinat�rio" << endl;
		cout << "3 - Enviar nova mensagem" << endl; 
		cout << "0 - Voltar ao menu principal" << endl;
		cin >> op;
		cin.ignore();
				
			switch(op)
			{
				case 1:
					cout << "Entre com o novo nome de remetente" << endl;
					getline(cin, novoRemetente);
					Form[buscaPosicao].setRemetente(novoRemetente);
					cout << "Remetente alterado com sucesso!" << endl;
				break;
				case 2:
					cout << "Entre com o novo nome de destinatario" << endl;
					getline(cin, novoDestinatario);
					Form[buscaPosicao].setDestinatario(novoDestinatario);
					cout << "Destinat�rio alterado com sucesso!" << endl;
				break;
				case 3:
					cout << "Entre com uma nova mensagem" << endl;
					getline(cin, novaMensagem);
					Form[buscaPosicao].setMensagem(novaMensagem);
					cout << "Nova mensagem registrada com sucesso!" << endl;				
				break;
				default:
					break;
			}
	}
	while (op != 0);
	
	system("pause");
    system("cls||clear");		
						   
}

void Registro::RemoverFormulario(){

	int idProcurado;
	int tamVector = Form.size(); 
	int buscaPosicao = 0;
	char esc;
	
	cout << "Informe o n�mero de registro do seu formul�rio: ";
	cin >> idProcurado;
	
	for (int i = 0; i < tamVector; i++)
		if (Form[i].getId() == idProcurado)
			buscaPosicao = i;
		
    cout << "Tem certeza que deseja remover o formul�rio? (S / N)";
    cin >> esc;
    
    if (esc == 's' || esc == 'S'){
		try{
			Form.erase(Form.begin() + buscaPosicao);
			cout << "Formulario removido com sucesso!" << endl;
		}
		catch (...){
			cout << "N�o foi poss�vel realizar a remo��o do formul�rio!" << endl;
		}
	} 
	
	system("pause");
    system("cls||clear"); 
}