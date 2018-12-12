/*
 * Unite.cpp
 *
 *  Created on: 7 déc. 2018
 *      Author: root
 */

#include "Unite.h"
#include <iostream>
using namespace std;

Unite::Unite(string nomUnite, vector<Chercheur<string>*> cher) {
	this->nUnite=nomUnite;
	this->vecCher=cher;
}

const string& Unite::getUnite() const {
		return nUnite;
	}

	void Unite::setUnite(const string& unite) {
		nUnite = unite;
	}

	const vector<Chercheur<string> *>& Unite::getVecCher() const {
		return vecCher;
	}

	void Unite::setVecCher(const vector<Chercheur<string> *>& vecCher) {
		this->vecCher = vecCher;
	}


void Unite::enregistrerChercheur(Chercheur<string>* chercheur) {
	this->vecCher.push_back(chercheur);
}


void Unite::enregistrerPublication(string publication, int id) {
		vector<string> vec= this->vecCher.at(id)->getPub();
		vec.push_back(publication);
		this->vecCher.at(id)->setPub(vec);


}


Unite::~Unite() {
	// TODO Auto-generated destructor stub
}

vector<Chercheur<string>* > Unite::getBiologistes() {
	vector<Chercheur<string>*> bio;
	for(unsigned i=0; i<this->vecCher.size();i++){
		if((vecCher[i]->getSpec()=="Biologie")||(vecCher[i]->getSpec()=="Biologie et informatique")){
		 bio.push_back(vecCher[i]);
		}
	}
	return bio;
}
vector<Chercheur<string> *> Unite::getBioinformaticiens(){
	vector<Chercheur<string>*> bioInfo;
		for(unsigned i=0; i<this->vecCher.size();i++){
			if((vecCher[i]->getSpec()=="Biologie et informatique")){
				bioInfo.push_back(vecCher[i]);
			}
		}
		return bioInfo;

}
vector<Chercheur<string>* > Unite::getInformaticiens() {
	vector<Chercheur<string>*> info;
	for(unsigned i=0; i<this->vecCher.size();i++){
		if((vecCher[i]->getSpec()=="Informatique" )||(vecCher[i]->getSpec()=="Biologie et informatique")){
			info.push_back(vecCher[i]);
		}
	}
	return info;
}

string Unite::toString() {
	stringstream ss;
	ss <<"nom de l'unité : "<< this->nUnite << endl;
	ss <<" chercheur : [ " ;
	for(unsigned i=0 ; i<this->vecCher.size() ; i++){
		ss << vecCher[i]->getNom() << ", ";
	}
	ss << "]";
	return ss.str();
}


ostream& operator << (ostream& out, const Unite& u){
	 out<< "nom de l'unité : "<< u.nUnite << endl;
	 out << " chercheur : [ " ;
	 for(unsigned i=0 ; i<u.vecCher.size() ; i++){
	 		out << u.vecCher[i]->getNom() << ", ";
	 	}
	 	out << "]";
	 return out;
}

void Unite::exporter(const Unite& u, string nomFichier) {
	ofstream outFileStream;
	outFileStream.open(nomFichier.c_str() ,ios::out);
	if(!outFileStream.is_open()){
		cerr << "erreur lors de l'ouvertur du fichier" << endl;
	}else {
		outFileStream <<u.getUnite() << endl;
		for(unsigned i=0 ; i<u.vecCher.size() ;i ++){
			outFileStream << u.vecCher[i]->toString();
		}
	}

}

Unite& Unite::importer(string nomFichier) {

}
