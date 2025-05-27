#include <iostream>
#include <string>
#ifndef MANUSIA_H
#define MANUSIA_H
#include "Jantung.h"
using namespace std;

class manusia {
public:
    string name;
    jantung varjantung;

    manusia (string pName)
        : name(pName) {
            cout << name << " hidupn\n";
        }
    ~manusia(){
        cout << name << " mati\n";
    }
};
#endif