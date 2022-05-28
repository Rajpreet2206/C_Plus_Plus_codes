#include<iostream>
#include<map>
#include<string>


using namespace std;

int main(){
	map<int, int> myMap;
	map<int, int> copiedMap(myMap);
	map<int, int> rangedMap(copiedMap.begin(), copiedMap.end());
	map<int, int> initList = {{1,2}, {2,3}, {3,4}};
	map<string, string> myStringMap = {
		{"Hello", "Holla"},
		{"Goodbye", "Adios"},
		{"Programmer", "Programacion"}
	};

	for(const auto& loc: myStringMap)
	{
		cout<< loc.first << " In Spanish is " << loc.second << endl; 
	}
	return 0;

}
