/*
 * Biologiste.cpp
 *
 *  Created on: 6 déc. 2018
 *      Author: root
 */

#include "Biologiste.h"

using namespace std;
template<class T>
Biologiste<T>::Biologiste(string nom, vector<T> pub):  Chercheur<T>(nom , "Biologie", pub)  {


}
template<class T>
Biologiste<T>::~Biologiste() {
}

