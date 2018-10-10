/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pack.h
 * Author: senno
 *
 * Created on 3 octobre 2018, 08:39
 */

#ifndef PACK_H
#define PACK_H

#include "Produit.h"
#include "Conteneur.h"


class Pack: public Produit {
public:
    Pack(const Client & client);
    float getPrix() const;
    void afficher(std::ostream & out) const;
    void ajouter(const Produit & p);
private:
    std::vector<const Produit *> m_contenu;

};

#endif /* PACK_H */

