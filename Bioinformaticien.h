/*
 * Bioinformaticien.h
 *
 *  Created on: 7 déc. 2018
 *      Author: root
 */

#ifndef BIOINFORMATICIEN_H_
#define BIOINFORMATICIEN_H_
#include "Informaticien.h"
#include "Biologiste.h"
template <class T>
class Bioinformaticien : public Biologiste<T> , public Informaticien<T>  {
public:
	Bioinformaticien(string nom , vector<T>pub , vector<T>logi);
	virtual ~Bioinformaticien();
	virtual string toString();

};


#endif /* BIOINFORMATICIEN_H_ */
