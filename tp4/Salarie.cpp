/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Salarie.cpp
 * Author: senno
 * 
 * Created on 10 octobre 2018, 15:14
 */

#include "Salarie.h"
#include <string>

Salarie::Salarie(std::string nom, std::string numeroSS, float salaire){
    setNom(nom);
    setNumeroSS(numeroSS);
    setSalaireMensuel(salaire);
}

std::string Salarie::getNom()const{
    std::string ret = "";
    for(auto &c: nom){
        ret += toupper(c);
    }
    return ret;
}
    std::string Salarie::getNumeroSS()const{
        return numeroSS;
    }
    float Salarie::getSalaireMensuel()const{
        return salaireMensuel;
    }
    
    void Salarie::setNom(std::string nom){
        for(auto &c : nom){
            if(!((c >= 'a' && c <= 'z') || (c>='A' && c<='Z') || c==' ')){
                throw;
            }
        }
    }
    void Salarie::setNumeroSS(std::string num){
        
    }
    void Salarie::setSalaireMensuel(float salaire){
        
    }
    float Salarie::getImpot(){
        return  0.5;
    }