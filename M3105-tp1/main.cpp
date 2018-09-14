/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: senno
 *
 * Created on 14 septembre 2018, 10:32
 */

#include <cstdlib>
#include "EntierContraint.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    EntierContraint entier = EntierContraint();
    cout << "Entier créé, min= " << entier.getMin() << " max= " << entier.getMax()<< " val= " << entier.getVal() << "\n";
    cout << "Saisir une valeur pour l'entier: ";
    cin >> entier;
    cout << "L'entier vaut maintenant: " << entier << "\n";
    
    cout << "Test: entier.setVal(5); ne doit pas lever d'exception\n";
    try{
        entier.setVal(5);
        cout << "Test OK\n";
    } catch(char const * err) {
        cout<< "Test NON OK: "<< err <<"\n";
    }
    
    cout << "Test: entier.setVal(-1); doit lever une exception\n";
    try{
        entier.setVal(-1);
        cout << "Test NON OK\n";
    } catch(char const * err) {
        cout<< "Test OK: "<< err <<"\n";
    }
    
    cout << "2 + entier = " << 2+entier;


    return 0;
}

