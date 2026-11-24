#include "NotificationSMS.h"
#include <iostream>

NotificationSMS::NotificationSMS(string destinataire, string message, string operateur):
	Notification(destinataire,message),
	operateur(operateur)
{
	cout << "Constructeur de NotificationSMS appele." << endl;
}

void NotificationSMS::afficher() const
{
	cout << "SMS | Numero :" << destinataire;
	cout << "| Operateur :" << operateur;
	cout << "| Message:" << Notification::message;
	cout << endl;
}

void NotificationSMS::envoyer() const
{
	cout << "Envoye d'un SMS : ";
	afficher();
}

NotificationSMS::~NotificationSMS()
{
	cout << "Destructeur de NotificationSMS appele." << endl;
}
