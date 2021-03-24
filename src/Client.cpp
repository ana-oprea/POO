#include "Client.h"

int Client::nrClienti = 0;

Client::Client():idClient(nrClienti++)
{
    this->total = 0;
    this->numeClient = "";
}

Client::Client(string numeClient):idClient(nrClienti++){
    this->numeClient = numeClient;
}

Client::~Client()
{

}


void Client::setTotal(float pret){
    this->total = this-> total + pret;
}

float Client::getTotal(){
    return this->total;
}

void Client::setNumeClient(string numeClient){
    this->numeClient = numeClient;
}

string Client::getNumeClient(){
    return this->numeClient;
}

Client& Client::operator= (const Client& client){
    if (this != &client){
        this->numeClient = client.numeClient;
    }
    return *this;
}

ostream& operator << (ostream& out, const Client& client){
    if (client.numeClient != "")
        out << "Nume client: " << client.numeClient << endl;
    return out;
}

istream& operator >> (istream & in, Client& client){
    cout << "Introduceti numele: ";
    in >> client.numeClient;

    cout << endl;
    return in;
}
