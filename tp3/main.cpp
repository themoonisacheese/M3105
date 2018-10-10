#include <iostream>
#include <valarray>

#include "Tarif.h"
#include "Trajet.h"
#include "Promotion.h"
#include "Billet.h"
#include "BilletReduit.h"
#include "Conteneur.h"
#include "Reservation.h"
#include "Pack.h"

using namespace std;

int main()
{
//    string nom = "nom";
//    Client iencli = Client(nom);
//    Pack monPack = Pack(iencli);
//    Reservation res = Reservation(iencli, "l'hotel ta race", 2, 31);
//    monPack.ajouter(res);
//    cout<< monPack.getPrix()<< endl;
//    Reservation res2 = Reservation(iencli, "l'hotel ta grand mere", 3, 33);
//    monPack.ajouter(res2);
//    cout<< monPack.getPrix()<< endl;
    
    string a = "ville1";
    string b = "ville2";

    
    int continuer = 1;
    while(continuer){
        cout<< "1: creer un trajet" << endl;
        cout<< "2: creer un tarif" << endl;
        cout<< "3: creer une promotion"<<endl;
        cout<< "4: creer un client"<<endl;
        cout<< "5: creer un produit"<<endl;
        cout<< "6: ajouter des produits à un Pack"<<endl;
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
                    Trajet t(villeDep, villeArr, dist);
                    Conteneur<Trajet>::getInstance().ajouter(t);
                }
                break;
                
            case 2:{
                    string libelle;
                    float prixkilo;
                    cout <<"entrez un nom: ";
                    cin>>libelle;
                    cout<<"entrez un prix au km";
                    cin>>prixkilo;
                    Conteneur<Tarif>::getInstance().ajouter(Tarif(libelle, prixkilo));
                }
                
                break;
            case 3:{
                    string libelle;
                    float taux;
                    cout <<"entrez un nom: ";
                    cin>>libelle;
                    cout<<"entrez un taux";
                    cin>>taux;
                    Conteneur<Promotion>::getInstance().ajouter(Promotion(libelle, taux));
                }
                
                break;
            case 4:{
                    string libelle;
                    cout <<"entrez un nom: ";
                    cin>>libelle;
                    Conteneur<Client>::getInstance().ajouter(Client(libelle));
                }
                
                break;
            case 5:{
                while(continuer){
                    cout<< "1: creer un Billet" << endl;
                    cout<< "2: creer une Réservation" << endl;
                    cout<< "3: creer un Pack"<<endl;
                    cout<< "0: quitter"<<endl;
                    cout<< "Entrez votre choix: ";
                    cin>>choix;
                    switch(choix){
                        case 0:
                            continuer =0;
                            break;
                        case 1:
                            Conteneur<Produit>::getInstance().ajouter(Billet(Conteneur<Trajet>::getInstance().choisirElement(cout, cin), 
                                    Conteneur<Tarif>::getInstance().choisirElement(cout, cin), Conteneur<Client>::getInstance().choisirElement(cout, cin)));
                            break;
                        case 2:{
                            string nom;
                            cout << "entrez le nom de l'hotel: ";
                            cin>>nom;
                            cout << "nombre de jours?";
                            int nbj;
                            cin>>nbj;
                            cout << "tarif de l'hotel?";
                            float tarif;
                            cin >> tarif;
                            Conteneur<Produit>::getInstance().ajouter(Reservation(Conteneur<Client>::getInstance().choisirElement(cout, cin),nom, nbj, tarif));
                        }
                        break;
                        case 3:
                            Conteneur<Produit>::getInstance().ajouter(Pack(Conteneur<Client>::getInstance().choisirElement(cout, cin)));
                            break;
                    }
                }
                choix = 5;
                continuer = 1;
            }
                break;
            case 6:{
                try{
                    Conteneur<Produit>::getInstance().choisirElement(cout, cin).ajouter(Conteneur<Produit>::getInstance().choisirElement(cout, cin));
                }catch(char const * e){
                    cout << "Merci de Selectionner un Pack"<< endl;
                }
            }
                
        }
    }


    return 0;
}
