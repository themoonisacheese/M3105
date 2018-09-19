/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   entierContraintTemplate.h
 * Author: senno
 *
 * Created on 19 septembre 2018, 15:14
 */

#ifndef ENTIERCONTRAINTTEMPLATE_H
#define ENTIERCONTRAINTTEMPLATE_H
#include <iostream>

template <class TypeNum>
class EntierContraintT {
    private:
        TypeNum m_min, m_max, m_value;
    public:
        EntierContraintT(TypeNum valeur = 0, TypeNum min =0, TypeNum max = 100);
        inline TypeNum getMin()const{return m_min;}
        inline TypeNum getMax()const{return m_max;}
        inline TypeNum getVal()const{return m_value;}
        void setVal(TypeNum val);
        void saisir(std::istream & entree);
        void afficher(std::ostream & sortie)const;
        operator int() const{ return (int)getVal();}

};
template<class TypeNum>
std::ostream & operator<<(std::ostream & sortie, const EntierContraintT<TypeNum> & ent);
template<class TypeNum>
std::istream & operator>>(std::istream & entree, EntierContraintT<TypeNum> & ent);
#include "entierContraintTemplate.cpp"
#endif /* ENTIERCONTRAINTTEMPLATE_H */

