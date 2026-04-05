#include <iostream>
using namespace std;
int main()
{
    int n;
    int t = 0;
    cout << "Enter the size of an Array :";
    cin >> n;
    int arr[n];
    cout << "Enter the Element of an Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        t = t ^ arr[i];
    }
    if (t != 0)
    {
        cout << "Uniqe Element is " << t << endl;
    }
    else
    {
        cout << "Number not Found " << endl;
    }
}