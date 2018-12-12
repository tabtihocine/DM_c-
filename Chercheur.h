/*
 * Chercheur.h
 *
 *  Created on: 5 déc. 2018
 *      Author: root
 */

#ifndef CHERCHEUR_H_
#define CHERCHEUR_H_
#include <iostream>
#include <vector>
#include  <sstream>
using namespace std;

template <class T> class Chercheur {
private :
	string nom,spec;
    vector<T> pub;

public:
	Chercheur(string nom , string sepc , vector<T> pub);
	virtual ~Chercheur();

	const string& getNom()  const;
	void setNom(const string& nom) ;
	const vector<T>& getPub()  ;
	void setPub(const vector<T>& pub);
	virtual const string& getSpec()  ;
	void setSpec(const string& spec);

	virtual string toString();
	friend ostream&  operator << (ostream& out ,const Chercheur<T>& chercheur);
	void operator ()(T x);


};

template class Chercheur<string>;
#endif /* CHERCHEUR_H_ */
