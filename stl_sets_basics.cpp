/* TOPIC: std::set

SYNTAX : std::set<type>object_name;

IMPORTANT POINYS:
1) std::set is as associateive container that contains a sorted set of unique objects of that type
2) It is usually implemented using Red-Black Tree.
3) Insertion , Removal and search have logirithmic complexity.
4) If we want to store user defined data type in set then we  will have to provide
   compare function so that set can store them in sorted order'
5) We can pass the order of sorting while constructing set object.
 
 
BOTTOM LINE :
 It store unique elements and they are stored in sorted order
 
 ------------------------------------------------------------------------------------------------------------
 
 */
 
 
 
#include<bits/stdc++.h>
#include<set>
#include<string>
#include<functional>
using namespace std;
   
   int main()
   {
   	set<int> Set = {1,2,3,4,5,1,2,3,4,5};
   	for(const auto& e: set)
   	{
   		cout << e << endl;
	}
   	
   	return 0;
   }

