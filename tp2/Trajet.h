#ifndef TRAJET_H
#define TRAJET_H
#include <string>
#include "NombreContraint.h"
#define DISTANCEMIN 1
#define DISTANCEMAX 2000

class Trajet
{
    public:
        Trajet(std::string &villeDep, std::string &villeArr, int dist);
        inline std::string GetvilleDepart() const { return villeDepart; }
        inline void SetvilleDepart(std::string val) { villeDepart = val; }
        inline std::string GetvilleArrivee() const { return villeArrivee; }
        inline void SetvilleArrivee(std::string val) { villeArrivee = val; }
        inline NombreContraint<int> Getdistance() const { return distance; }
        void saisir(std::istream & in);
        void afficher(std::ostream & out)const;
    protected:

    private:
        std::string villeDepart;
        std::string villeArrivee;
        NombreContraint<int> distance;
};

#endif // TRAJET_H
