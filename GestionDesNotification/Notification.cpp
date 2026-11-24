#include "Notification.h"
#include <iostream>
using namespace std;

Notification::Notification(string destinataire, string message)
{
	cout << "Constructeur de Notification appele." << endl;
	this->destinataire = destinataire;
	this->message = message;
}

void Notification::afficher() const
{
	cout << "Destinataire: " << destinataire << endl;
	cout << "Message: " << message << endl;
}

Notification::~Notification()
{
	cout << "Destructeur de Notification appele." << endl;
}
