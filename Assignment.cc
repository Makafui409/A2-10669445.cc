#include<iostream>
using namespace std;
int main()
{
	int a;
	int b=2;
	int x;
	cout<<"Enter a number"<<endl;
	cin>>a;
	for (b=2;b<a-1;b++){
		if(a%b!=0){
			continue;
		}
		else{
			x=0;
		}
	}
	if(x==0){
		cout<<"This number is not prime"<<endl;
	}
	else{
		cout<<"This number is prime"<<endl;
	}
	return 0;
}
