#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"what is the value of n?"<<endl;
	cin>>n;
	for (i=1;i<n;i=i+1){
		for(j=1;j<=(n-1);j++){
			cout<<" ";
			cout<<"*****";
			cout<<endl;
		}
	}
	return 0;
}
