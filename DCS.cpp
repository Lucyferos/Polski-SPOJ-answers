#include <iostream>

using namespace std;

int main() {	
       int t;
       cin>>t;
  for(int l=1;l<=t; l++)
  {
	int n,suma=1;
	cin>>n;
	if(n<=4){
	
	for(int i=1;i<=n; i++){
		suma *= i;
	}

	cout<< suma/10<<" "<<suma%10<<endl;
	
	}
	else if(n>=5 && n<=9) 
	{
			for(int i=1;i<=n; i++){
		suma *= i;
	}
	
		cout<<(suma/10)%10<<" 0"<<endl;
	}
	else cout<<"0 0"<<endl;
}
	return 0;

}
