/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Promotion.h
 * Author: senno
 *
 * Created on 21 septembre 2018, 11:42
 */

#ifndef PROMOTION_H
#define PROMOTION_H
#include <string>
#include "NombreContraint.h"
#include <iostream>

class Promotion {
public:
    Promotion(std::string& unLibelle, float unTaux);
    inline const std::string & getLibelle() const{return libelle;}
    inline void setLibelle(std::string & unlibelle){libelle = unlibelle;}
    float calculePrixReduit(float prix) const;
    void saisir(std::istream & in);
    void afficher(std::ostream & out);
    
private:
    std::string libelle;
    NombreContraint<float> tauxReduction;
    static constexpr float TAUXMIN = 0.01;
    static constexpr float TAUXMAX = 0.99;
};

#endif /* PROMOTION_H */

