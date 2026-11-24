#pragma once
#include "Notification.h"

class GestionnaireNotification
{

    
    private:
        Notification* tab[100];  
        int compteur;            
    public:
        GestionnaireNotification();
        void ajouter(Notification* n);
        void envoyerToutes();
        ~GestionnaireNotification();
    };


