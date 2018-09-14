/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EntierContraint.h
 * Author: senno
 *
 * Created on 14 septembre 2018, 10:12
 */

#ifndef ENTIERCONTRAINT_H
#define ENTIERCONTRAINT_H
#include <iostream>
class EntierContraint {
    public:
        EntierContraint(int valeur =0, int min = 0, int max = 100);
        virtual ~EntierContraint();
        
        inline int getMin() const{
            return m_min;
        }
        inline int getMax() const{
            return m_max;
        }
        inline int getVal() const{
            return m_val;
        }
        void setVal(int val);
        void saisir(std::istream & entree);
        void afficher(std::ostream & sortie) const;
        operator int() const{ return getVal();};
    private:
        int m_min, m_max, m_val;
};
std::ostream & operator<<(std::ostream & sortie, const EntierContraint & ent);
std::istream & operator>>(std::istream & entree, EntierContraint & ent);


#endif /* ENTIERCONTRAINT_H */

