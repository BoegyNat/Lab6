#include<iostream>
using namespace std;

int main(){
    
    int y ;
    int o = 0;
    int e = 0;
    cout << "Enter an integer: ";
    cin >> y;
    while(y != 0) {
        if(y%2 == 0){
            e = e + 1;
        }
        else{
            o = o + 1;
        }
        cout << "Enter an integer: ";
        cin >> y;
    }
   
   
    cout << "#Even numbers = " << e << endl;
    cout << "#Odd numbers = " << o ;
    
    return 0;
}
