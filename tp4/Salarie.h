/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Salarie.h
 * Author: senno
 *
 * Created on 10 octobre 2018, 15:14
 */

#ifndef SALARIE_H
#define SALARIE_H
#include <string>

class Salarie {
public:
    Salarie(std::string nom, std::string numeroSS, float salaire);
    std::string getNom()const;
    std::string getNumeroSS()const;
    float getSalaireMensuel()const;
    void setNom(std::string nom);
    void setNumeroSS(std::string num);
    void setSalaireMensuel(float salaire);
    float getImpot();
    
    
private:
    std::string nom;
    std::string numeroSS;
    float salaireMensuel;

};

#endif /* SALARIE_H */

