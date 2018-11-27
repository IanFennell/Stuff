#include <iostream>
using namespace std;
int main(){
	int n;
	int m;
	int div;
	int rem;
	while(cin>>n>>m){
		if(m==0){
			printf("Division by 0 error!\n");
		}
		else{
			div=n/m;
			rem=n%m;
			if(rem==0){
				printf("%d divided by %d is %d\n",n,m,div);
			}
			else{
				printf("%d divided by %d is %d with a remainder of %d\n",n,m,div,rem);
			}
		}
	}
}
