//============================================================================
// Name        : Projet.cpp
// Author      : Hocine TABTI
// Num etudaint: 21711243
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Biologiste.cpp"
#include "Informaticien.cpp"
#include "Unite.h"
#include "Bioinformaticien.cpp"

#include <vector>

using namespace std;

int main() {

	vector<string> pub;
	pub.push_back("1");
	pub.push_back("2");

	vector<string> logi;
	logi.push_back("sat");
	logi.push_back("lili");

	Informaticien<string>* informaticien=new Informaticien<string>("tata",pub,logi);
	Biologiste<string>* biologiste = new Biologiste<string>("tata",pub);
	Bioinformaticien<string>* bioinfo = new Bioinformaticien<string>("titi" , pub , logi);

	vector<Chercheur<string>*> chercheur;
	chercheur.push_back(informaticien);
	chercheur.push_back(biologiste);
	chercheur.push_back(bioinfo);

	Unite unite("sécu" , chercheur);
	cout << unite.toString() << endl;


    unite.enregistrerPublication("dip" , 0);
    cout << informaticien->toString();

    vector<Chercheur<string>*> biolo=unite.getBiologistes();
    vector<Chercheur<string>*> info=unite.getInformaticiens();
    vector<Chercheur<string>*> bioInfo=unite.getBioinformaticiens();

    unite.exporter(unite , "hocine.txt");
    		return 0;
}
