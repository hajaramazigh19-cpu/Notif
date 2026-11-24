#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string objet, string destinataire, string message):Notification(destinataire, message)

{
	this->objet = objet;
}

void NotificationEmail::afficher() const
{
	this->Notification::afficher();
	cout << "l objet est " << objet << endl;
}

void NotificationEmail::envoyer()
{
	cout << "EMAIL/A:" << destinataire << "/Objet:" << objet << "/Message:" << message << endl;
}

NotificationEmail::~NotificationEmail()
{
	cout << " c est le destructeur de  Email" << endl;
}
