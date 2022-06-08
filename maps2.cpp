#include<iostream>
#include<iterator>
#include<map>

using namespace std;

int main(int argc, char* argv[]){
	map<int, int> first_map;

	first_map.insert(pair<int, int>(1, 40));
	first_map.insert(pair<int, int>(2,30));
	first_map.insert(pair<int, int>(3, 20));

	map<int, int>::iterator itr;
	cout<<"\n The Map first_map is : \n";
	cout<<"\t KEY \t ELEMENT \n";
	for(itr = first_map.begin(); itr != first_map.end();++itr){
		cout<<"\t"<< itr->first<<"\t"<< itr-> second<<"\n";
	}
	cout<<endl;
	return 0;
}
