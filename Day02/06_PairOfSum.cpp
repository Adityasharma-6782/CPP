#include<iostream>
using namespace std;
int main(){
    int arr1[9]={1,3,5,7,4,6,8,2,9};
    // int arr2[5]={1,2,3,4,5};
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            if((arr1[i]+arr1[j]) == 8)
            {
                cout << arr1[i] <<" " << arr1[j] << endl;
            }
        }
    }
    return 0;
}

// ________________________________________________________________________________________________________________



// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    vector<vector<int>> ans;
//     for(int i=0;i<arr.size();i++)
//     {
//         for(int j=(i+1);j<arr.size();j++)
//         {
//             if((arr[i]+arr[j]) == s)
//             {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i],arr[j]));
//                 temp.push_back(max(arr[i],arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
// }