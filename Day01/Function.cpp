#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 0; i < b; i++){
        ans *= a;
    }   
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;
    cout << "Result: " << power(a, b) << endl;
    return 0;
}
