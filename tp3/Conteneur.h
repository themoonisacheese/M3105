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
    void ajouter(const T & element);
    void afficher(std::ostream & out);
    const T & choisirElement(std::ostream & out, std::istream & in) const ;
    Conteneur(Conteneur  &) = delete; // on ne veut pas qu'il soit possible de copier un singleton
    void operator=(Conteneur  &) = delete;
    static Conteneur & getInstance(){
        static Conteneur<T> instance;
        return instance;
    }
private:
    Conteneur();//ructeur prive: c'est un singleton


    std::vector<const T*> contenu;

};

#include "Conteneur.cpp"
#endif /* CONTENEUR_H */

