using namespace std;

class SetOperations {
	public:
		static boolean subset(Set set1, Set set2);
		static Set complement(Set universe, Set subset);
}

boolean SetOperations::subset(Set set1, Set set2) {

	return (SetOperations::difference(set1, set2).size() == 0);

}

Set SetOperations::complement(Set universe, Set subset) {

	return SetOperations::difference(universe, subset);

}
