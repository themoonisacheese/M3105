/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Promotion.cpp
 * Author: senno
 * 
 * Created on 21 septembre 2018, 11:42
 */

#include "Promotion.h"


Promotion::Promotion(std::string& unLibelle, float unTaux):libelle(unLibelle){
    tauxReduction = NombreContraint<float>(unTaux,TAUXMIN,TAUXMAX);

}

float Promotion::calculePrixReduit(float prix) const {
    return prix * tauxReduction.getVal();
}
void Promotion::saisir(std::istream & in){
    in >> libelle;
}
void Promotion::afficher(std::ostream & out)const{
    out << "Promotion: " << getLibelle()<< "; taux: " << tauxReduction.getVal();
}