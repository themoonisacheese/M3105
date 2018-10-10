/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tarif.cpp
 * Author: senno
 * 
 * Created on 21 septembre 2018, 11:15
 */

#include "Tarif.h"

Tarif::Tarif(std::string & unLibelle, float prixKilo): libelle(unLibelle) {
    prixAuKm = NombreContraint<float>(prixKilo, PRIXMIN, PRIXMAX);
}

void Tarif::saisir(std::istream & in){

}

void Tarif::afficher(std::ostream & out)const{
    
}