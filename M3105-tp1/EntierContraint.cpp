/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EntierContraint.cpp
 * Author: senno
 * 
 * Created on 14 septembre 2018, 10:12
 */

#include "EntierContraint.h"
using namespace std;
EntierContraint::EntierContraint(int valeur, int min, int max): m_min(min), m_max(max) {
    setVal(valeur);
}

EntierContraint::~EntierContraint() {
}

void EntierContraint::setVal(int val){
    if (val <= this -> getMax() && val >= this-> getMin()) {
        m_val = val;
    } else {
        throw "Erreur: la valeur n'est pas comprise dans les bornes";
    }

}
void EntierContraint::saisir(istream & entree){
    int buf;
    entree >> buf;
    setVal(buf);
}
void EntierContraint::afficher(ostream & sortie) const{
    sortie << m_val;
}

ostream & operator<<(ostream & sortie, const EntierContraint & ent){
    ent.afficher(sortie);
    return sortie;
}

istream & operator>>(istream & entree, EntierContraint & ent){
    ent.saisir(entree);
    return entree;
}