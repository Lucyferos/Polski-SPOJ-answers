#include <iostream>

using namespace std;
int rozmiar=0;
int dane[10];

 void push()
 {
     if(rozmiar>=10) cout<<":("<<endl;
     else
        {
     int liczba[rozmiar];
     rozmiar=rozmiar+1;
  cin>>dane[rozmiar];
  cout<<":)"<<endl;
     }

 }
 void pop()
 {
     if(rozmiar>=1) {
            cout<<dane[rozmiar]<<endl;
        rozmiar=rozmiar-1;

     }
    else  cout<<":("<<endl;
 }
int main()
{
    char wybor;
    while(cin>>wybor)
    switch(wybor){
case '+':
    push();
    break;
case'-':
    pop();


   break;
    }
    return 0;
}
