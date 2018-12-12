/*
 * Unite.h
 *
 *  Created on: 7 déc. 2018
 *      Author: root
 */

#ifndef UNITE_H_
#define UNITE_H_
#include <iostream>
#include "Chercheur.cpp"
#include <fstream>
#include  <vector>
using namespace std;

class Unite {
	string nUnite;
	vector<Chercheur<string>*> vecCher;
public:
	Unite(string nomUnite , vector<Chercheur<string>*> cher);
	virtual ~Unite();
	void enregistrerChercheur(Chercheur<string>* chercheur);
	void enregistrerPublication(string publication, int id);
	void  ajouterLogiciel(string nomLogi , int id);
	vector<Chercheur<string>*> getBiologistes();
	vector<Chercheur<string>*> getBioinformaticiens();
	vector<Chercheur<string>*> getInformaticiens();
	string toString();
	friend ostream& operator << (ostream& out, const Unite& u);



	static void exporter(const Unite& u, string nomFichier);
	static Unite& importer(string nomFichier);

	const string& getUnite() const;
	void setUnite(const string& unite);
	const vector<Chercheur<string> *>& getVecCher() const ;
	void setVecCher(const vector<Chercheur<string> *>& vecCher);
};

#endif /* UNITE_H_ */
