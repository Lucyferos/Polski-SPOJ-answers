#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main()
{
    int XD=1;
     int a,b;
     char znak;
    while(cin>>znak>>a>>b){
    
 switch(znak)
 {
 case'+':
    printf("%d\n",a+b);
    break;
 case'-':
    printf("%d\n",a-b);
    break;
 case'*':
    printf("%d\n",a*b);
     break;
 case'/':
    printf("%d\n",a/b);
    break;
 case'%':
  printf("%d\n",a%b);
    break;
 }
    }
    return 0;
}
