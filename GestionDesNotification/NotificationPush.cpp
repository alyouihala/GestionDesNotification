#include "NotificationPush.h"
#include <iostream>

//NotificationPush::NotificationPush(string idUser, string nomApp, string message) :
//	Notification(destinataire, message),
//	idUser(idUser),nomApp(nomApp)*/
NotificationPush::NotificationPush(string idUser, string message, string nomApp) :
	Notification(idUser, message),   // idUser devient le destinataire
	nomApp(nomApp)
{
	cout << "Constructeur de NotificationPush appele." << endl;
}

void NotificationPush::afficher() const
{
	cout << "PUSH | Utilisateur :" << idUser;
	cout << "| Application :" << nomApp;
	cout << "| Message :" << Notification::message;
	cout << endl;
}

void NotificationPush::envoyer() const
{
	cout << "Envoye d'un Push : ";
	afficher();
}

NotificationPush::~NotificationPush()
{
	cout << "Destructeur de NotificationPush appele." << endl;
}
