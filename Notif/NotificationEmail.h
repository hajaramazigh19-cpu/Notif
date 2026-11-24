#pragma once
#include "Notification.h"
#include<iostream>
using namespace std;
class NotificationEmail :
    public Notification
{
private:
    string objet;
public:
    NotificationEmail(string, string, string);
    void afficher()const override;
    void envoyer() override;
    ~NotificationEmail();

};

