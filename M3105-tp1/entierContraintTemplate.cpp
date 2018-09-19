/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   EntierContraintTTemplate.cpp
 * Author: senno
 *
 * Created on 19 septembre 2018, 15:14
 */

#ifdef ENTIERCONTRAINTTEMPLATE_H

using namespace std;
template<class TypeNum>
EntierContraintT<TypeNum>::EntierContraintT(TypeNum valeur,  TypeNum min,  TypeNum max): m_min(min), m_max(max) {
    setVal(valeur);
}

template<class TypeNum>
void EntierContraintT<TypeNum>::setVal( TypeNum val){
    if (val <= this -> getMax() && val >= this-> getMin()) {
        m_value = val;
    } else {
        throw "Erreur: la valeur n'est pas comprise dans les bornes";
    }

}
template<class TypeNum>
void EntierContraintT<TypeNum>::saisir(std::istream & entree){
    TypeNum buf;
    entree >> buf;
    setVal(buf);
}
template<class TypeNum>
void EntierContraintT<TypeNum>::afficher(std::ostream & sortie) const{
    sortie << m_value;
}
template<class TypeNum>
ostream & operator<<(std::ostream & sortie, const EntierContraintT<TypeNum> & ent){
    ent.afficher(sortie);
    return sortie;
}
template<class TypeNum>
istream & operator>>(std::istream & entree, EntierContraintT<TypeNum> & ent){
    ent.saisir(entree);
    return entree;
}




#endif
