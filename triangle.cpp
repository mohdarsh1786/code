#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(float base, float area){
    float h,r;
      h=(2*area/base);

   r=ceil(h);

    return r;
}
int main() {
    float base;
    float area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
