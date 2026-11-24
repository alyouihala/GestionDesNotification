#pragma once
#include "Notification.h"
class NotificationSMS :
    public Notification
{
private:
	string operateur;
public:
	NotificationSMS(string destinataire, string message, string operateur);
	void afficher() const;
	void envoyer() const override;
	~NotificationSMS();
};

