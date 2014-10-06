using namespace std;

template <class elementType>
class Element {
	elementType object;
	public:
		Object getElement();
		void setElement(elementType newObject);
}

template <class elementType>
elementType Element::getElement() {

	return object;

}

template <class elementType>
elementType Element::setElement(elementType newObject) {

	this.object = newObject;

}
