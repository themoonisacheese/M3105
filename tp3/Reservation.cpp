/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Reservation.cpp
 * Author: senno
 * 
 * Created on 3 octobre 2018, 08:24
 */

#include "Reservation.h"

Reservation::Reservation(const Client & client, std::string nom, int jours, float tarif):Produit(client), m_nomHotel(nom) {
    m_tarif = NombreContraint<float>(tarif, 30.0, 1000.0);
    m_jours = NombreContraint<int>(jours, 1, 365);
}

float Reservation::getPrix() {
    return m_tarif.getVal() * m_jours.getVal();
}
void Reservation::afficher(std::ostream & out) const{
    out<< "Reservation: " << m_nomHotel<< std::endl;
}