/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Billet.cpp
 * Author: senno
 * 
 * Created on 21 septembre 2018, 11:29
 */

#include "Billet.h"
#include "Tarif.h"
#include "Trajet.h"

Billet::Billet( const Trajet & unTrajet, const Tarif & unTarif, const Client & unClient):Produit(unClient),trajet(unTrajet), tarif(unTarif){
}


float Billet::getPrix() const{
    return this->tarif.getPrixAuKm()*this->trajet.Getdistance().getVal();
}
void Billet::afficher(std::ostream & out) const{
    out<< "Billet: Prix: "<< getPrix() << std::endl;
    out<< "\t"; trajet.afficher(out);
    out<< "\t"; tarif.afficher(out);
    out<< "\t"; m_client.afficher(out);
}
