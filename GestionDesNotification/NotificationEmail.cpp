#include "NotificationEmail.h"
#include<iostream>
using namespace std;
NotificationEmail::NotificationEmail(string destinataire, string objet, string message) :
	Notification(destinataire,message),
	objet(objet) 
{
	cout << "Constructeur de NotificationEmail appele." << endl;
}

void NotificationEmail::afficher() const
{
	cout << "EMAIL | A: " << Notification::destinataire;
	cout << "| Objet: " << objet;
	cout << "| Message: " << Notification::message;
	cout << endl;
}

void NotificationEmail::envoyer() const
{
	cout << "Envoie d'un EMAIL ";
	afficher();
}

NotificationEmail::~NotificationEmail()
{
	cout << "Destructeur de NotificationEmail appele." << endl;
}

