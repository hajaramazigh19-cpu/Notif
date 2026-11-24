#include "GestionnaireNotification.h"

GestionnaireNotification::GestionnaireNotification()
{
    this->compteur = 0;  
   

}

void GestionnaireNotification::ajouter(Notification* n)
{
    if (compteur < 100)          
    {
        tab[compteur] = n;
        compteur++;
    }
    else
    {
        cout << "Le gestionnaire est plein !" << endl;
    }
}

void GestionnaireNotification::envoyerToutes()
{
    for (int i = 0; i < compteur; i++)   
    {
        tab[i]->envoyer();
    }
}

GestionnaireNotification::~GestionnaireNotification()
{
}
