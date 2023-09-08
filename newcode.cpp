#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(v[0]*v[1]);
    cout<<v[2]<<"\n";

}