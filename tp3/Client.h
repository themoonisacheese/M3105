/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Client.h
 * Author: senno
 *
 * Created on 28 septembre 2018, 10:25
 */

#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <ostream>

class Client {
public:
    Client(std::string & nom);
     const std::string & getNom() const;
    void afficher(std::ostream & out) const;
private:
    std::string m_nom;

};

#endif /* CLIENT_H */

