#include<iostream>

template<typename Seq, typename Num>
Num sum(Seq s, Num v){
	for(const auto& x: s)
		v += x;
	return v;
}	
