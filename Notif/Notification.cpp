#include "Notification.h"


Notification::Notification(string dest, string mes)
{
	this->destinataire = dest;
	this->message = mes;
	
    
}



void Notification::afficher() const
{
	cout << "le destinataire est" << this->destinataire ;
	cout << " || le messages est" << this->message << endl;
}

Notification::~Notification()
{
}
