
#include "iostream.h"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
	vector<int> a;
	a.push_back( 10 );
	a.push_back( 20 );
	a.push_back( 30 );

	for(int i = 0; i< a.size();i++)
	{
	//	cout << a[i] << endl;
	}

	vector<string> strList;
	strList.push_back( string("usa") );
	strList.push_back( string("china") );
	strList.push_back( string("rus") );
	strList.push_back( string("canada") );
	strList.push_back( string("australia") );


	sort( strList.begin(), strList.end() );

	for(i = 0; i< strList.size();i++)
	{
		cout << strList[i].c_str() << endl;
	}


	return 0;
}