#include <iostream>

using namespace std;

int main()
{
    int dane;
    int zliczanie=0;
    int a=1;
    int d=-1;
    int * tablica= new int[a];
    //while(cin>>dane){
    for(int i=1 ;i!=d;i++){
            cin>>dane;
        tablica[0]=42;
        tablica[i]=dane;
        a++;
        if(dane==42 && tablica[i-1]!=42 ){
                zliczanie++;

            }
        if(zliczanie==3){
            d=i;
            break;
       // cout<<zliczanie<<endl;
        }
        //cout<<zliczanie<<endl;


     }


    for(int b=1;b<a;b++){
    if(tablica[b]==0){
        break;
    }
    else cout<<tablica[b]<<endl;

    }
    return 0;
}
