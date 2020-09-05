/* Topic : std::array

syntax:  std::array<array_type , array_size>array_name;

Important notes:- 
1. std::array is a container that encapsulates fixed size arrays.
2. Array size is needed at compile time.
3. Assign by value is actually by value
4. Access Elements:-
	a) at()		(gives element of that location)
	b) []		(gives element of that location)
	c) front()  (gives the 1st element of the array)
	d) back()	(gives the last element of the array)
	e) data()   (gives access to the underlying array)
*/


#include<iostream>
using namespace std;

int main()
{
	// Declare
	std::array<int,5>arr;
	
	// Initialization
	std::array<int, 5>arr = {1,2,3,4,5};		// initializer list
	std::array<int, 5>arr2 {1,2,3,4,5};			// uniform initialization
	
	// Assign using initializer list
	std::array<int,5>myarray;
	myarray={1,2,3,4,5};
	
	
  return 0;	
}	
	
	
