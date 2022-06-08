#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(int argc, char* argv[]){
	map<int, int> MyMap;
	map<int, int> CopiedMap;
	map<int, int> RangedMap(CopiedMap.begin(), CopiedMap.end());
	map<int, int> initList = {{1,2},{2,3},{3,4}};
	map<string, string> myStringMap = {
			{"Hello","Hola"},
			{"Goodbye","Adios"},
			{"Programmer","Programacion"}
		};
	
	map<string, string>::iterator iter;
	for(const auto& loc: myStringMap){
		cout<< loc.first<< " In Spanish is " << loc.second << endl;
	}

	for(iter = myStringMap.begin(); iter!= myStringMap.end(); +=iter){
		cout<< iter->second << " In English is : "<< iter->first <<endl;
	}
	return 0;

}

