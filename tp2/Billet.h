/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Billet.h
 * Author: senno
 *
 * Created on 21 septembre 2018, 11:29
 */

#ifndef BILLET_H
#define BILLET_H
#include "Trajet.h"
#include "Tarif.h"
#include "Client.h"

#include <ostream>


class Billet {
public:
    Billet(const Trajet & unTrajet, const Tarif & unTarif, const Client & unClient);
    inline const Trajet & getTrajet() const{return trajet;}
    inline const Tarif & getTarif() const {return tarif;}
    inline const Client & getClient() const {return client;}
    float getPrix() const ;
    void afficher(std::ostream)const;
    
private:
    const Trajet & trajet;
    const Tarif & tarif;
    const Client & client;
};

#endif /* BILLET_H */

