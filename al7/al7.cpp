#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	srand(time(0));
	
	vector<int> vec{ 1,2,3,4,5 };

	for ( auto ptr = vec.begin(); ptr != vec.end(); ptr++)
	{
		cout << *ptr << "\t";
	}

	cout << endl;

	vec.push_back(99);
	vec.push_back(88);
	vec.push_back(77);
	vec.push_back(66);
	vec.push_back(55);
	vec.push_back(44);

	vec.insert(vec.begin(), 200);
	vec.insert(vec.begin(), 211);
	vec.insert(vec.begin(), 222);
	vec.insert(vec.begin(), 233);
	vec.insert(vec.begin(), 244);

	for (auto ptr = vec.begin(); ptr != vec.end(); ptr++)
	{
		cout << *ptr << "\t";
	}

	cout << endl;

}