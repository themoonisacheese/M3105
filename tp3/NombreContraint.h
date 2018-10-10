#ifndef NOMBRECONTRAINT_H
#define NOMBRECONTRAINT_H
#include <iostream>
template<class T>
class NombreContraint
{
    public:
        NombreContraint(T valeur = 0, T min =0, T max =1000);
        inline T getMin() {return m_min;}
        inline T getMax() {return m_max;}
        inline T getVal() const{return m_val;}
        void setVal(T val);
        T operatorT();
        void saisir(std::istream & in);
        void afficher(std::ostream & out);
    private:
        T m_min;
        T m_max;
        T m_val;
};
#include "NombreContraint.cpp"

#endif // NOMBRECONTRAINT_H
