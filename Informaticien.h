/*
 * Informaticiens.h
 *
 *  Created on: 6 déc. 2018
 *      Author: root
 */

#ifndef INFORMATICIENS_H_
#define INFORMATICIENS_H_
#include "Chercheur.h"
#include <iostream>

template<class T> class Informaticien: public virtual  Chercheur<T> {
private:
	vector<string> logi;
public:
	Informaticien(string nom , vector<T> pub,vector<string> logi);
	virtual ~Informaticien();

	void ajouterLogiceil(string logi);
	virtual string toString();


	const vector<string>& getLogi() const;
	void setLogi(const vector<string>& logi);


};
template class Informaticien<string>;
#endif /* INFORMATICIENS_H_ */
