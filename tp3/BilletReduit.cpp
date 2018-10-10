/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BilletReduit.cpp
 * Author: senno
 * 
 * Created on 26 septembre 2018, 15:43
 */

#include "BilletReduit.h"
#include "Billet.h"

BilletReduit::BilletReduit(const Trajet & unTrajet, const Tarif & unTarif, const Client & unClient, const Promotion & unePromo):Billet(unTrajet, unTarif, unClient), promotion(unePromo){
}

float BilletReduit::getPrix() const{
    return promotion.calculePrixReduit(Billet::getPrix());
}
 const Promotion & BilletReduit::getPromotion() const {
    return promotion;
}