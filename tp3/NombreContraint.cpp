#ifdef NOMBRECONTRAINT_H
template<class T>
NombreContraint<T>::NombreContraint(T valeur, T min, T max):m_min(min), m_max(max)
{
    setVal(valeur);
}

template<class T>
void NombreContraint<T>::setVal(T val){
    if(val <= m_max && val>= m_min){
        m_val = val;
    }else{
        throw "Erreur: la valeur n'est pas dans les bornes";
    }
}
template<class T>
T NombreContraint<T>::operatorT(){
    return m_val;
}
template<class T>
void NombreContraint<T>::saisir(std::istream & in){
    T buf;
    in >> buf;
    setVal(buf);
}
template<class T>
void NombreContraint<T>::afficher(std::ostream & out){
    out << m_val;
}

#endif
