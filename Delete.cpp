#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(4);
    v.push_back(9);
    v.push_back(3);
    v.push_back(-1);
    int c=*min_element(v.begin(),v.end());
    cout<<c;
}