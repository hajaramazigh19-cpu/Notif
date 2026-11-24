#pragma once
#include<iostream>
#include "Notification.h"
using namespace std;
class NotificationSMS : public Notification
{
private:
    string operateur;
public:
    NotificationSMS(string,string,string);
    void afficher()const override;
    void envoyer() override;
    ~NotificationSMS();

};

