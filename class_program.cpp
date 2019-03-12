#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<char> vcomp;//a vector of characters (initially empty)
	vector<int> v2 = {10, 14, 32, 64, 16};
	vcomp.push_back('p');//add new element at the back
	v2.pop_back( );//remove an element
	vcomp.push_back('i');
	v2.pop_back( );
	for(int i=0;i<4;i++)
	{
		v2.push_back(0);
	}
	
	for (int i = 0; i < v2.size( ); i++)
	{
		cout<<v2[i]<<" ";
	}

	string str1 = "hello";
	string str2 = str1 + "world";
	
	cout << "str1 = " << str1 << endl;
	cout << "the 4th character is " << str1[3] << endl;
	cout << "str1 has " << str1.size() << "characters" << endl;
	
	if (str1 == "hello")
		cout << "hi there" << endl;
	if (str2 != "world")
		cout << "out of this world" << endl;
	str2 += "ly one";
	
	system("pause");
	return 0;
}
