/*
 * Informaticiens.cpp
 *
 *  Created on: 6 déc. 2018
 *      Author: root
 */

#include "Informaticien.h"
using namespace std;


template<class T>
Informaticien<T>::Informaticien(string nom , vector<T> pub, vector<string> logi):
 Chercheur<T>(nom ,"Informatique", pub) {
	this->logi=logi;
}
template<class T>
Informaticien<T>::~Informaticien() {

}

template<class T>
const vector<string>& Informaticien<T>::getLogi() const {
		return logi;
	}

template<class T>
void Informaticien<T>::ajouterLogiceil(string logi) {
	this->logi.push_back(logi);
}

template<class T>
string Informaticien<T>::toString(){
	stringstream ss;
	ss<<Chercheur<T>::toString()<< endl;
	for (unsigned i=0 ; i<logi.size() ; i++){
		ss << this->logi[i] << " " ;
	}
	ss << endl;
	return ss.str();

}

template<class T>
void Informaticien<T>::setLogi(const vector<string>& logi) {
		this->logi = logi;
	}
