using namespace std;

#include "SetOperations.h";

template <class E>
boolean SetOperations::subset(Set<E> set1, Set<E> set2) {

	return (SetOperations::difference(set1, set2).size() == 0);

}

template <class E>
Set<E> SetOperations::complement(Set<E> universe, Set<E> subset) {

	return SetOperations::difference(universe, subset);

}

/* contributors: Nat, Joseph Pietrzyk
 * union takes two ordered sets and returns the set of the union of two sets
 * it is O(m+n)
 */
template <class E>
Set<E> SetOperations::union (Set<E> a, Set<E> b) /* fixed by Joseph Pietrzyk */
{
	Set<E> final; /* fixed by Joseph Pietrzyk */ 

	int m = a.getSize(), b = b.getSize();
	int i = 0, j = 0;

	while (i < m && j < n)
	{
    if (a.getElements(i) < b.getElements(j))
    	final.addElement(a.getElements(i++));
    else if (b.getElements(j) < a.getElements(i))
    	final.addElement(b.getElements(j++));
    else
		{
		  final.addElement(b.getElements(j++));
		  i++;
		}
	}
	while(i < m)
		final.addElement(a.getElements(i++));
	while(j < n)
		final.addElement(b.getElements(j++));

	return final;
}

/* contributors: Nat, Joseph Pietrzyk
 * intersection takes two ordered sets and returns the set of the intersection of two sets
 * it is O(m+n)
 */
template <class E>
Set<E> SetOperations::intersection (Set<E> a, Set<E> b) /* fixed by Joseph Pietrzyk */
{
	Set<E> final; /* fixed by Joseph Pietrzyk */

	int m = sizeof(a.getElements()), b = sizeof(b.getelements());
	int i = 0, j = 0;

	while (i < m && j < n)
	{
		if (a.getElements(i) < b.getElements(j))
			i++;
		else if (b.getElements(j) < a.getElements(i))
			j++;
		else // if a.getElements(i) == b.getElements(j) 
		{
			final.addElement(b.getElements(j++));
			i++;
		}
	}

	return final;
}

/* contributors: Nat, Joseph Pietrzyk
 * difference takes two ordered sets and returns the set of the element-wise difference of two sets
 */
template <class E>
Set<E> SetOperations::diference (Set<E> a, Set<E> b) /* fixed by Joseph Pietrzyk */
{
	Set<E> final; /* fixed by Joseph Pietrzyk */
    if (sizeof(a) > sizeof(b))
    {
        int i = sizeof(b);
        while (i < sizeof(a))
            final.addElement(a.getElements(i++));
    }
    else if (sizeof(a) > sizeof(b))
    {
        int i = sizeof(a);
        while (i < sizeof(b))
            final.addElement(b.getElements(i++));
    }

	return final;
}

/* contributors: Nat, Joseph Pietrzyk
 * product takes two ordered sets and returns the set of the cartesian product of two sets */
template <class E>
Set<E> SetOperations::product (Set<E> a, Set<E> b) /* fixed by Joseph Pietrzyk */
{
	Set<E> final;
    for (i = 0; i <= sizeof(a); i++)  //NB i<=n because there will be n+1 points along each axis-parallel line
        for (j = 0 ;j <= sizeof(b); j++)
                addPoint(i/sizeof(a),j/sizeof(b))  //float arithmetic required here

	return final;
