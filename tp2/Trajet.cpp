#include "Trajet.h"
#include "NombreContraint.h"
#include <string>
Trajet::Trajet(std::string & villeDep, std::string & villeArr, int dist):villeDepart(villeDep), villeArrivee(villeArr)
{
    distance = NombreContraint<int>(dist, DISTANCEMIN, DISTANCEMAX);
}
void Trajet::saisir(std::istream & in){
}
void Trajet::afficher(std::ostream & out)const{
}
