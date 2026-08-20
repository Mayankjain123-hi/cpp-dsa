#include <iostream>
using namespace std;

void countEvenOdd(int n,int &even,int &odd){
   if(n ==0){
    return ; 
   }
   
    countEvenOdd(n-1,even,odd);

    if(n%2 == 0){
        even++;
    }
    else{
        odd++;
    }
}

int main(){
    
    int n = 20;
    int even = 0 ;
    int odd = 0;

    countEvenOdd(n,even,odd);

    cout <<"total odd :" << odd;
    cout<<"total even :" << even;
}