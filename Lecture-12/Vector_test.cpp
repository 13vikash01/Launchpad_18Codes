// Vector_test
#include <iostream>
#include "vector.h"
#include "vector.h"
using namespace std;

int main(){
	vector <int> v;

	for(int i=0;i<25;i++){
		v.push_back(25-i);
	}

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	// sort(v.begin(),v.end());
	v.pop_back();
	v.pop_back();

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	cout<<"Capacity : "<<v.capacity()<<endl;
	// cout<<"Max size : "<<v.max_size()<<endl;


	return 0;
}