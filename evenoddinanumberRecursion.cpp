#include <iostream>
using namespace std;

void printEvenOdd(int start,int end){
    if(start > end){
        return ;
        if(start % 2 == 0){
            cout <<start << "even number" << endl;
        }
        else{
            cout << start << "odd number" << endl;
        }
        printEvenOdd(start+1,end);
    }


}

int main(){
    int start,end;

    cout << "enter starting number :";
    cin >> start;

    cout <<"enter  ending number :";
    cin >> end;

    printEvenOdd(start,end);
}
