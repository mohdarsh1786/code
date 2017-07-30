#include <bits/stdc++.h>

using namespace std;

int power [300000 + 10];

int main()
{
    string s;
    int k, b, m, ans = 0, sum = 0;

    cin >> s;
    cin >> k >> b >> m;

    power[0] = 1;

    for(int i = 1; i <= k; i++){
        power[i] = ( (power[i - 1] % m) * (b % m) ) % m;
    }
   /* for(int i = 0; i <= k; i++){
        cout<<power[i];
    }*/

    int i = 0;

    for(i; i < k; i++){

        int cur_num = (power[k - i - 1] % m) * ( (s[i] - '0') % m);
        ans = ( (ans % m) +  (cur_num % m) ) % m;
        sum = ans;
    }
    // cout<<sum<<" "<<i;
    for(i; i < s.size(); i++){

        int old_num = ( ( (s[i - k] - '0') % m) * (power[k - 1] % m) ) % m;
              cout<<old_num<<" ";
              cout<<sum<<" ";
        sum =  ( ((sum % m) - (old_num % m)) + m) % m;
        cout<<sum<<" ";
        sum =  ((sum % m) * (b % m)) % m;
        cout<<sum<<" ";
        sum = ((sum % m) + ( (s[i] - '0') % m)) % m;
        cout<<sum<<" "<<s[i]<<" ";
        ans += sum;
        cout<<ans<<endl;
    }

    //cout << ans;

    return 0;
}
