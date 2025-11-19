#include <iostream>
#include <vector>
using namespace std;

int main() 
{

	/*дз.
Создать вектор для вещественных чисел.
Добавить 5 элементов в конец
пoKa3aTb BeKTор
добавить еще 10 элементов в начало
показать вектор!*/

	vector<double> vec{-6.6, -7.7, -8.8, -9.9, -10.10};
	vector<double> vect{-10.10, -20.20, -30.30, -40.40, -50.50, -60.60, -70.70, -80.80, -90.90, -100.100 };

	vec.push_back(1.1);
	vec.push_back(2.2);
	vec.push_back(3.3);
	vec.push_back(4.4);
	vec.push_back(5.5);

	vect.insert(vect.begin(), 10.10);
	vect.insert(vect.begin(), 20.20);
	vect.insert(vect.begin(), 30.30);
	vect.insert(vect.begin(), 40.40);
	vect.insert(vect.begin(), 50.50);
	vect.insert(vect.begin(), 60.60);
	vect.insert(vect.begin(), 70.70);
	vect.insert(vect.begin(), 80.80);
	vect.insert(vect.begin(), 90.90);
	vect.insert(vect.begin(), 100.100);



	for (auto ptr = vec.begin(); ptr != vec.end(); ptr++ )
	{
		cout << *ptr << "\t";
	}
	cout << endl;

	for (auto ptr = vect.begin(); ptr != vect.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl;	
	

	/*srand(time(0));
	
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

	cout << endl;*/

}

