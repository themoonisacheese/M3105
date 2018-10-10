/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BilletReduit.h
 * Author: senno
 *
 * Created on 26 septembre 2018, 15:43
 */

#ifndef BILLETREDUIT_H
#define BILLETREDUIT_H

#include "Promotion.h"
#include "Trajet.h"
#include "Tarif.h"
#include "Billet.h"


class BilletReduit: public Billet {
public:
    BilletReduit(const Trajet & unTrajet, const Tarif & unTarif, const Client & unClient, const Promotion & unePromo);
    float getPrix()const ;
    const  Promotion & getPromotion() const;
private:
     const Promotion & promotion;

};

#endif /* BILLETREDUIT_H */

