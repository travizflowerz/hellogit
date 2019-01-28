#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<char> vcomp;//a vector of characters (initially empty)
	vcomp<int> v2={10,14,32,64,16};
	vcomp.push_back('p');//add new element at the back
	v2.pop_back( );//remoive an element
	vcomp.push_back('i');
	v2.pop_back( );
	for(int i=0;i<4;i++)
	{
		v2.push_back(0);
	}
	
	for (int i=0; i<v2.size( ); i++)
	{
		cout<<v2[i]<<;
	}
