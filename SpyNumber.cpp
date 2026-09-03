#include <iostream>
using namespace std;

void spy(int num, int &sum, int &product)
{
    if (num == 0)
        return ;

    int lastdigit = num % 10;

    sum = sum + lastdigit;
    product = product * lastdigit;
    
    spy(num / 10, sum, product);
}
int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;

    int sum = 0;
    int product = 1;

    spy(num, sum, product);

    if (sum == product)
    {
        cout << "spy number";
    }
    else
    {
        cout << "not a spy number ";
    }
}