

#include "Set.h"

template <class E>
void Set<E>::addElement(Element<E> e) {
	list.push_end(e);
}

template <class E>
Element<E> Set<E>::removeElement(Element<E> e) {
	list.remove(e);
}

template <class E>
std::list<Element<E>> Set<E>::getElements() {
	return list;
}

template <class E>
void Set<E>::setElements(std::list<Element<E>> l) {
	list = l;
}

template <class E>
Set<E> Set<E>::powerSet() {
	
	Set<Set<E>> ret = new Set<Set<E>>();
	
	int max = pow(2, size());
	
	for (int i = 0; i < max; i++) {
		int temp = i;
		Set<E> s = new Set<E>();
		int n = size();
		
		for (std::list<int>::iterator it=list.end(); it != list.begin(); --it) {
			if (pow(2, n) <= temp) {
				s.addElement(*it);
				temp -= pow(2, n);
			}
			n--;
		}
		ret.push_end(s);
	}
	return ret;
}

template <class E>
Set<E> Set<E>::clone() {
	Set s = new Set();
	std::list<Element<E>> temp (list, list + list.size());
	s.setElements(temp);
}

template <class E>
int Set<E>::size() {
	return list.size();
}