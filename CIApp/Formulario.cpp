#include <iostream>
#include <ctime>

using namespace std;

class Formulario{
    private:
        int id;
        string remetente;
        string destinatario;
        string mensagem;
        string data;

    public:
    	Formulario();
        Formulario(int id, string remetente, string destinatario, string mensagem);
        ~Formulario();
        void setId(int id);
        void setRemetente(string remetente);
        void setDestinatario(string destinatario);
        void setMensagem(string mensagem);
        int getId();
        string getRemetente();
        string getDestinatario();
        string getMensagem();
};

Formulario::Formulario(){
	
}

Formulario::~Formulario(){
	
}

Formulario::Formulario(int id, string remetente, string destinatario, string mensagem){

    this->id = id;
    this->remetente = remetente;
    this->destinatario = destinatario;
    this->mensagem = mensagem;
}

void Formulario::setId(int id){
	this->id = id;
}

void Formulario::setRemetente(string remetente){
	this->remetente = remetente;
}

void Formulario::setDestinatario(string destinatario){
	this->destinatario = destinatario;
}

void Formulario::setMensagem(string mensagem){
	this->mensagem = mensagem;
}

int Formulario::getId(){

    return this->id;
}

string Formulario::getRemetente(){

    return this->remetente;
}

string Formulario::getDestinatario(){

    return this->destinatario;
}

string Formulario::getMensagem(){

    return this->mensagem;
}
