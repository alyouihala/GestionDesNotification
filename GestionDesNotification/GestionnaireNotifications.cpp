#include "GestionnaireNotifications.h"
#include <iostream>
using namespace std;
GestionnaireNotifications::GestionnaireNotifications()
	: compteur(0)
{
	cout << "Construction du gestionnaire de notifications" << endl;
}

void GestionnaireNotifications::ajouter(Notification* n)
{
	if (compteur < 100)
	{
		tabNotifications[compteur] = n;
		++compteur;
	}	
	else
	{
		cout << "Gestionnaire plein!" << endl;
	}

}

void GestionnaireNotifications::envoyerToutes() const
{
	for (int i = 0; i < compteur; ++i)
	{
		tabNotifications[i]->envoyer();
	}
}

