#include <math.h>
#include <iostream>
#include <vector>
#include <limits>
using namespace std;


void pr(const vector<int>&v) {
for (int num : v) {
cout << num << endl;
}
cout << endl;
}

vector <int> func1(vector<int>& v){
vector<int> v2(v.size());
  int n = v.size();
  for (int i = 0; i < n; ++i) {
    v2[i] = v[n-1-i];
  }
  pr(v2);
  return v2;
}

void reverse2(vector<int>& v) {
  int n = v.size();
  for (int i = 0; i < n / 2; ++i) {
    swap(v[i], v[n - 1 - i]);
  }
  pr(v);
}



int main() {
  vector<int> f = {1, 2, 3, 4, 5, 6, 7, 8};
  func1(f);
  pr(f);
  reverse2(f);

}