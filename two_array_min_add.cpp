#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    vector <int> arr(n);
    vector <int> arr2(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];

    }
    sort(arr.begin(),arr.end());
  sort(arr2.begin(), arr2.end(), greater<int>());   //for descensing order sort
     int c=arr[0]+arr2[n-1];
     cout<<c;
}
/*#include <bits/stdc++.h>

using namespace std;

int twinArrays(vector <int> ar1, vector <int> ar2,int n){
       sort(ar1.begin(),ar1.end());
  sort(ar2.begin(), ar2.end(), greater<int>());   //for descensing order sort
     int c=ar1[0]+ar2[n-1];
     return c;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar1(n);
    for(int ar1_i = 0; ar1_i < n; ar1_i++){
       cin >> ar1[ar1_i];
    }
    vector<int> ar2(n);
    for(int ar2_i = 0; ar2_i < n; ar2_i++){
       cin >> ar2[ar2_i];
    }
    int result = twinArrays(ar1, ar2,n);
    cout << result << endl;
    return 0;
}
*/
