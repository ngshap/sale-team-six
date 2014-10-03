using namespace std;

class Element {
	Object object;
	public:
		Object getElement();
		void setElement(Object newObject);
}

Object Element::getElement() {

	return object;

}

void Element::setElement(Object newObject) {

	this.object = newObject;

}
