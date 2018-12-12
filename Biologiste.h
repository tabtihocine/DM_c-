/*
 * Biologistes.h
 *
 *  Created on: 5 déc. 2018
 *      Author: root
 */

#ifndef BIOLOGISTES_H_
#define BIOLOGISTES_H_
#include "Chercheur.h"
#include <vector>

template <class T> class Biologiste: public virtual Chercheur<T> {

public:
	Biologiste(string nom, vector<T> pub);
	virtual ~Biologiste();

};



#endif /* BIOLOGISTES_H_ */
