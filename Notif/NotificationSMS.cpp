#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string destinataire,string message,string operateur):Notification(destinataire,message)
{
	this->operateur = operateur;
}

void NotificationSMS::afficher() const
{
	this->Notification::afficher();
	cout << "l operateur est " << operateur << endl;

}

void NotificationSMS::envoyer()
{
	cout << "SMS/Numero:" << destinataire << "/Operateur:" << operateur << "/Message:" << message << endl;
}

NotificationSMS::~NotificationSMS()
{
	cout << " c est le destructeur de  SMS" << endl;
}
