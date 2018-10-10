/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reservation.h
 * Author: senno
 *
 * Created on 3 octobre 2018, 08:24
 */

#ifndef RESERVATION_H
#define RESERVATION_H

#include "NombreContraint.h"
#include "Produit.h"


class Reservation : public Produit {
public:
    Reservation(const Client & client, std::string nom, int jours, float tarif);
    float getPrix() ;
    void afficher(std::ostream & out)const ;
private:
    NombreContraint<float> m_tarif;
    NombreContraint<int> m_jours;
    std::string m_nomHotel; 

};

#endif /* RESERVATION_H */

