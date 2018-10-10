/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Client.cpp
 * Author: senno
 * 
 * Created on 28 septembre 2018, 10:25
 */

#include "Client.h"

Client::Client(std::string & nom): m_nom(nom) {
}

const std::string & Client::getnom() const{
    return m_nom;
}

void Client::afficher(std::ostream & out) const{
    
}
