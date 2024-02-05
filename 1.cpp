#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "enter the number :";
    cin >> a >> b >>c;

    if (a==b && b==c && c==a)  
    {
        cout << "All number is equall ";
    }
    else{
         if(a>b){

        if(a>c){
            cout << "a is big";
        }
        else{
            cout << "c is big";
        }
    }

    else{
        if(b>c){
            cout << "b is big";

    }
    else{
        cout << "c is big";
    }
    }
}
return 0;
}