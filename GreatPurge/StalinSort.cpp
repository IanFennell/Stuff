#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
int main(){
	printf("Please enter in a number of digits\n");
	int n;
	vector<int> v;
	while(cin>>n){
		v.push_back(n);
	}
	int large;
	for(int i=0;i<v.size();i++){
		if(v[i]>large){
			large=v[i];
		}
		else{
			v.erase(v.begin()+i);
			i--;
		}
	}
	for(int i=0;i<v.size();i++){
		printf("%d - %d\n",i,v[i]);
	}
}
