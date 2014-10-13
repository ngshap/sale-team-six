#ifndef __SALE__Element__
#define __SALE__Element__

template <class elementType>
class Element {
	private:
		elementType object;
	public:
		elementType getElement(); /* fixed by Joseph Pietrzyk */
		void setElement(elementType newObject);
};

#endif
