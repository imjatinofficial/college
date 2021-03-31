#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &a, int low, int high) {
    if (low >= high || low < 0) return high;
    int l = low, r = high;
    int p = high;
    while (l < high && r >= low) {
        if (a[r] > a[p]) r--;
        else if (a[p] >= a[l]) l++;
        else if (l < r) swap(a[l], a[r]);
        else if(l >= r){
            swap(a[p], a[r]);
            return r;
        }
    }
    return r;
}

void quick_sort(vector <int> &a, int low , int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quick_sort(a, low, p-1);
        quick_sort(a, p+1, high);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i<n;++i) {
        cin >> a[i];
    }
    quick_sort(a, 0, n-1);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}