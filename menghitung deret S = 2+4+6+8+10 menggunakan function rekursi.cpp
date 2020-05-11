#include <iostream>

using namespace std;

int s(int n){
if (n==1)
	return (2);
else
	return (2*n+s(n-1));
}

int main (){
int n;
cin>>n;
for (int i = 0; i<=n; i++){
}
cout<<s(n);
}
