/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produit.h
 * Author: senno
 *
 * Created on 3 octobre 2018, 08:17
 */

#ifndef PRODUIT_H
#define PRODUIT_H

#include <ostream>

#include "Client.h"


class Produit {
public:
    Produit(const Client & client);
    virtual float getPrix() const {return 0;}
    virtual void afficher(std::ostream & out)const {}
    virtual void ajouter(const Produit & produit) const{throw "Ajout Impossible";}
protected:
    const Client & m_client;
};

#endif /* PRODUIT_H */

