#include "NotificationPush.h"

NotificationPush::NotificationPush(string destinataire, string app, string message) :Notification(destinataire, message)
{
	this->application = app;
}

void NotificationPush::afficher() const
{
	
	this->Notification::afficher();
	cout << "l application est " << application << endl;
}

void NotificationPush::envoyer()
{
	cout << "PUSH/Utilisateur:" << destinataire << "/Application:" << application << "/Message:" << message << endl;
}

NotificationPush::~NotificationPush()
{
	cout << " c est le destructeur de  Push" << endl;
}
