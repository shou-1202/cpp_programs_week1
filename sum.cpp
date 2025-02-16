#include <iostream>
using namespace std;
int main() {
    int a , b, digits = 0;
    cout<<"Enter a number: ";
    cin>> a;
    cout<<"Enter a number: ";
    cin>> b;
    int sum = a+b;
    cout<<"sum is "<<sum ;
    while(sum>0){
        sum = sum/10;
        digits++;
    }
    cout<<"\ndigits: "<<digits;
    return 0;
	/* Enter a number: 5
       Enter a number: 6
       sum is 11
       digits: 2 */
}