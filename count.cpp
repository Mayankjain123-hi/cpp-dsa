#include <iostream>
using namespace std ; 

int main(){
    int num;
    int count = 0 ;

    cout << "enter the number :";
    cin >> num;
    
    while(num != 0){
        int lastdigit = num %10; 

        if(lastdigit == 0 ){
            count ++;
        }
        num = num /10;
    }
    cout << "number of zeroes :" << count;
}