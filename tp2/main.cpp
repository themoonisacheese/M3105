#include <iostream>
#include <valarray>

#include "Tarif.h"
#include "Trajet.h"
#include "Promotion.h"
#include "Billet.h"
#include "BilletReduit.h"
#include "Conteneur.h"

using namespace std;

int main()
{
    Conteneur<Trajet> trajets;
    Conteneur<Tarif> tarifs;
    Conteneur<Promotion> promos;
    Conteneur<Client> clients;
    Conteneur<Billet> billets;
    int continuer = 1;
    while(continuer){
        cout<< "1: creer un trajet" << endl;
        cout<< "2: creer un tarif" << endl;
        cout<< "3: creer une promotion"<<endl;
        cout<< "4: creer un client"<<endl;
        cout<< "5: creer un billet"<<endl;
        cout<< "0: quitter"<<endl;
        int choix;
        cout<< "Entrez votre choix: ";
        cin>>choix;
        switch(choix){
            case 0:
                continuer = 0;
                break;
            case 1:{
                    string villeDep, villeArr;
                    int dist;
                    cout<< "entrez la ville de depart: ";
                    cin>>villeDep;
                    cout<< "entrez la ville d'arrivee: ";
                    cin>>villeArr;
                    cout<< "entrez la distance: ";
                    cin>>dist;
                    trajets.ajouter(Trajet(villeDep, villeArr, dist));
                }
                break;
                
            case 2:{
                    string libelle;
                    float prixkilo;
                    cout <<"entrez un nom: ";
                    cin>>libelle;
                    cout<<"entrez un prix au km";
                    cin>>prixkilo;
                    tarifs.ajouter(Tarif(libelle, prixkilo));
                }
                
                break;
            case 3:{
                    string libelle;
                    float taux;
                    cout <<"entrez un nom: ";
                    cin>>libelle;
                    cout<<"entrez un taux";
                    cin>>taux;
                    promos.ajouter(Promotion(libelle, taux));
                }
                
                break;
            case 4:{
                    string libelle;
                    cout <<"entrez un nom: ";
                    cin>>libelle;
                    clients.ajouter(Client(libelle));
                }
                
                break;
            case 5:
                billets.ajouter(Billet(trajets.choisirElement(cout, cin), tarifs.choisirElement(cout,cin), clients.choisirElement(cout, cin)));
                break;
                
        }
    }
    return 0;
}
