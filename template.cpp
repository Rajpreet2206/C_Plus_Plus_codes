#include<iostream>
#include<vector>

template <typename T, size_N = 10>
T AccumulateVector(const T& val){
	std::vector<T> vec(val, N)
	return std::accumulate(vec.begin(), vec.end(), 0);
}

using namespace std;

int main(){
	cout<< AccumulateVector(1)<<endl;
	cout<<AccumulateVector<float>(2)<<endl;
	cout<<AccumulateVector<float, 5>(2.0)<<endl;
	return 0;
}
