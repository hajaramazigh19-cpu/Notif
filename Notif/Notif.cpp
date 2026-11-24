// Notif.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Notification.h"
#include "NotificationSMS.h"
#include "NotificationEmail.h"
#include "NotificationPush.h"
#include "GestionnaireNotification.h"
int main()
{
	NotificationEmail E1("securite","sara@example.com", "Nouvelle connexion detectee");
	NotificationSMS S1("0612345678","Votre code est 4582","Orange");
	NotificationPush P1( "user-102" , "MyBank","paiement confirme");
	
   
	E1.afficher();
	E1.envoyer();
	P1.afficher();
	P1.envoyer();
	S1.afficher();
	S1.envoyer();
	Notification* tab[3];
	tab[0] = &E1;
	tab[1] = &S1;
	tab[2] = &P1;
	for (int i = 0; i < 3; i++)
	{
		tab[i]->afficher();
		tab[i]->envoyer();
		cout << endl;
	}

	
	GestionnaireNotification g;
	g.ajouter(&E1);
	g.ajouter(&P1);
	g.ajouter(&S1);
	g.envoyerToutes();

	return 0;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
