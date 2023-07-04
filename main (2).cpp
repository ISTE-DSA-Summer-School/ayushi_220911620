

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char operation;
    cin>>a;
    cin>>b;
    cin>>operation;
    switch(operation){
     case'+':
        cout<<a+b;
        break;
    case'-':
        cout<<a-b;
        break;
    case'*':
        cout<<a*b;
        break;
    case'/':
        cout<<a/b;
        break;
    default:
       cout<<"error";
    }
    return 0;
    

   
}
