/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Conteneur.h
 * Author: senno
 *
 * Created on 28 septembre 2018, 10:41
 */

#ifndef CONTENEUR_H
#define CONTENEUR_H

#include <ostream>
#include <istream>
#include <vector>

template<class T>
class Conteneur {
public:
    Conteneur();
    void ajouter(const T & element);
    void afficher(std::ostream & out)const;
    const T & choisirElement(std::ostream & out, std::istream & in);
private:
    std::vector<const T*> contenu;

};

#include "Conteneur.cpp"
#endif /* CONTENEUR_H */

