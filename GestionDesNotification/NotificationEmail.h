#pragma once
#include "Notification.h"
class NotificationEmail :
    public Notification
{
private:
    string objet;
public:
    NotificationEmail(string destinataire, string objet, string message);
    void afficher() const;
    void envoyer() const override;
    ~NotificationEmail();

};

