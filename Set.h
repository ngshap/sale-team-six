//
//  Set.h
//  SALE
//
//  Created by Voltage on 10/7/14.
//  Copyright (c) 2014 Gabriel Revells. All rights reserved.
//

#ifndef __SALE__Set__
#define __SALE__Set__

#include <stdio.h>
#include <math.h>
#include <list>

#include "Element.h"

template <class E>
class Set{
private:
	std::list<Element<E>> list;
public:
	void addElement(Element<E> e);
	Element<E> removeElement(Element<E> e);
	std::list<Element<E>> getElements();
	void setElements(std::list<Element<E>> l);
	Set<E> powerSet();
	Set<E> clone();
	int size();
};

#endif /* defined(__SALE__Set__) */
