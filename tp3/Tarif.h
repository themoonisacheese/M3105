/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tarif.h
 * Author: senno
 *
 * Created on 21 septembre 2018, 11:15
 */

#ifndef TARIF_H
#define TARIF_H
#include "NombreContraint.h"
#include <string>
#include <iostream>


class Tarif {
public:
    Tarif(std::string & unLibelle, float prixKilo);
    inline std::string getLibelle()  {return libelle;}
    inline void setLibelle(std::string & lib){libelle = lib;}
    inline float getPrixAuKm() const {return prixAuKm.getVal();}
    void saisir(std::istream & in);
    void afficher(std::ostream & out) const;
    
private:
    std::string libelle;
    NombreContraint<float> prixAuKm;
     float PRIXMIN = 0.01;
     float PRIXMAX = 10.00;
};

#endif /* TARIF_H */

