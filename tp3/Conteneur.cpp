/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Conteneur.cpp
 * Author: senno
 * 
 * Created on 28 septembre 2018, 10:41
 */
#ifdef CONTENEUR_H
#include "Conteneur.h"
#include <iostream>
#include <vector>
template <class T>
Conteneur<T>::Conteneur() {
    contenu = std::vector<const  T*>();
}

template <class T>
void Conteneur<T>::ajouter(const T & element){
    contenu.push_back( & element);
}
template <class T>
void Conteneur<T>::afficher(std::ostream & out){
    for ( T * elem : contenu) {
        elem->afficher(out);
    }

}
template <class T>
 const T & Conteneur<T>::choisirElement(std::ostream & out, std::istream & in) const{
    int i = 0;
    for ( const T * elem : contenu) {
        out<< i << ":";
        elem->afficher(out);
    }
    out<<"Entrez le numero que vous souhaitez recuperer: ";
    int num;
    in >>num;
    return *(contenu[num]);
}

#endif
