#pragma once
#include "Notification.h"
class NotificationPush :
    public Notification
{
private:
    string idUser;
    string nomApp;
public:
    NotificationPush(string idUser, string nomApp, string message);
    void afficher() const;
    void envoyer() const override;
    ~NotificationPush();
};

