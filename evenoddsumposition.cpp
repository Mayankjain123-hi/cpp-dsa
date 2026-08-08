#include <iostream>
using namespace std;

int main(){
    int num;
    int lastdigit;
    int oddsum=0,evensum=0;
    int flag =1;
    cout <<"enter the number :";
    cin>>num;

    while(num>0){
        lastdigit = num%10;

        if(flag%2==0){
            evensum+=lastdigit;
        }
        else{
            oddsum+=lastdigit;
        }

        num/=10;
        flag++;
    }
    cout<<"odd position sum :" <<oddsum <<'\n';
    cout<<"even position sum :" <<evensum;

}