/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pack.cpp
 * Author: senno
 * 
 * Created on 3 octobre 2018, 08:39
 */

#include "Pack.h"

Pack::Pack(const Client & client): Produit(client){
    m_contenu = std::vector<const Produit *>();
}

float Pack::getPrix() const {
    float total =0;
    for (auto p : m_contenu) {
        total += p->getPrix();
    }
    return total;
}
void Pack::afficher(std::ostream & out)const  {
    out << "Pack: Prix: "<< getPrix() << std::endl;
    for (auto elem : m_contenu) {
        out << "\t"; elem->afficher(out);
    }
}
void Pack::ajouter(const Produit & p){
    m_contenu.push_back(&p);
}