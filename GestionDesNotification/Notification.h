#pragma once
#include <string>
using namespace std;
class Notification
{
protected:
	string destinataire;
	string message;
public:
	Notification(string destinataire, string message);
	void afficher() const;
	virtual void envoyer() const = 0;
	virtual ~Notification();
};

