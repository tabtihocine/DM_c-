/*
 * Bioinformaticien.cpp
 *
 *  Created on: 7 déc. 2018
 *      Author: root
 */

#include "Bioinformaticien.h"
template<class T>
Bioinformaticien<T>::Bioinformaticien(string nom , vector<T>pub , vector<T>logi) :
	Chercheur<T>(nom,"Biologie et informatique", pub),
	Biologiste<T>(nom, pub),
	Informaticien<T>(nom,pub,logi)
{

}
template<class T>
Bioinformaticien<T>::~Bioinformaticien() {

}

template<class T>
string Bioinformaticien<T>::toString() {
   stringstream ss ;
   ss << Informaticien<T>::toString();
   return ss.str();
}
