
#include <map>
#include <iostream>

template<class T>
struct dummy : public std::binary_function<T, T, bool> 
{
    bool operator()(const T& x, const T& y) const
	{
		return x < y;
	}
};

typedef std::multimap<std::string, std::string, dummy<std::string> > smap_type;
typedef smap_type::value_type smap_value;


int main( )
{
   using namespace std;

   //typedef multimap <int, int, less<int> > IntMMap;
   typedef multimap <int, int, dummy<int> > IntMMap;
   IntMMap m1;
   IntMMap :: const_iterator m1_RcIter;
   IntMMap :: const_iterator it;
   typedef pair <int, int> Int_Pair;

   m1.insert ( Int_Pair ( 1, 10 ) );
   m1.insert ( Int_Pair ( 4, 40 ) );
   m1.insert ( Int_Pair ( 3, 30 ) );
   m1.insert ( Int_Pair ( 2, 20 ) );
   m1.insert ( Int_Pair ( 5, 50 ) );
   m1.insert ( Int_Pair ( 2, 200 ) );
   m1.insert ( Int_Pair ( 2, 2 ) );

   it = m1.find(2);
   cout << "key 2: " << it->second << endl;

   pair <IntMMap::const_iterator, IntMMap::const_iterator> p1, p2;
   p1 = m1.equal_range( 2 );

   for (it = p1.first; it != p1.second; ++it)
   {
	   cout << "xxx:" << it->second << endl;
   }

   cout << "The lower bound of the element with "
        << "a key of 2 in the multimap m1 is: "
        << p1.first -> second << "." << endl;

   cout << "The upper bound of the element with "
        << "a key of 2 in the multimap m1 is: "
        << p1.second -> second << "." << endl;

   // Compare the upper_bound called directly 
   m1_RcIter = m1.upper_bound( 2 );

   cout << "A direct call of upper_bound( 2 ) gives "
        << m1_RcIter -> second << "," << endl
        << " matching the 2nd element of the pair"
        << " returned by equal_range( 2 )." << endl;

   p2 = m1.equal_range( 4 );

   // If no match is found for the key,
   // both elements of the pair return end( )
   if ( ( p2.first == m1.end( ) ) && ( p2.second == m1.end( ) ) )
      cout << "The multimap m1 doesn't have an element "
           << "with a key less than 4." << endl;
   else
      cout << "The element of multimap m1 with a key >= 40 is: "
           << p1.first -> first << "." << endl;

   return 0;
}

