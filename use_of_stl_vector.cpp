/*
TPOIC :Best way to use vector in c++
------------------------------------------------------------------------
Visualization of Vector:

Vector can be visualised as a combination of Linked List and Array 
Taking the dynamic nature from linked list and time complexity from array

------------------------------------------------------------------------
*/


#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>Vec;
	for(int i=0;i<=10;i++)
	{
		Vec.push_back(i);
		cout << Vec.size() << " " << Vec.capacity() << endl;
	}
	return 0;
}
