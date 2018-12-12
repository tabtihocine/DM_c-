/*
 * Chercheur.cpp
 *
 *  Created on: 5 déc. 2018
 *      Author: root
 */

#include "Chercheur.h"
#include <iostream>
using namespace std;

template<class T>
Chercheur<T>::Chercheur(string nom , string sepc , vector<T> pub) {
	this->nom=nom;
	this->spec=sepc;
    this->pub=pub;
}

template<class T>
Chercheur<T>::~Chercheur() {

}
template<class T>
const string& Chercheur<T>::getNom() const {
	return nom;
}
template<class T>
void Chercheur<T>::setNom(const string& nom) {
	this->nom = nom;
}
template<class T>
const vector<T>& Chercheur<T>::getPub()  {
	return pub;
}
template<class T>
void Chercheur<T>::setPub(const vector<T>& pub) {
	this->pub = pub;
}
template<class T>
const string& Chercheur<T>::getSpec()  {
	return spec;
}
template<class T>
void Chercheur<T>::setSpec(const string& spec) {
	this->spec = spec;
}

template<class T>
string Chercheur<T>::toString(){
	stringstream ss ;
	ss << this->nom  << endl;
	ss<< this->spec<< endl;

	for (unsigned i=0 ;i<this->pub.size(); ++i){
		ss << pub[i] << " " ;
	}
	return ss.str();
}

template<class T>
ostream&  operator << (ostream& out ,const Chercheur<T>& chercheur){
	out<< chercheur.toString();

		return out;
}

template<class T>
void Chercheur<T>::operator ()(T x) {
	this->pub.push_back(x);
}
