#include<iostream>
using namespace std;
int main(){
    int arr1[9]={1,3,5,7,4,6,8,2,9};
    // int arr2[5]={1,2,3,4,5};
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            for(int k=j+1;k<9;k++)
            {
                if ((arr1[i] + arr1[j] + arr1[k]) == 8)
                {
                    cout << arr1[i] << " " << arr1[j] << " " << arr1[k] << endl;
                }
            }
        }
    }
    return 0;
}