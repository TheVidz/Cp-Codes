

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)
#define pyes cout<<"YES"<<endl;return
#define pno cout<<"NO"<<endl;return

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef unsigned long long int ull;

const int INF = 1e9;
const ll mod = 1000000007;

void merge(int arr[], int low, int mid, int high) {
    int left = low, right = mid + 1, ind = 0;
    int temp[high - low + 1];

    while (left <= mid && right <= high) {
        if (arr[left] < arr[right]) {
            temp[ind] = arr[left];
            left++;
        } else {
            temp[ind] = arr[right];
            right++;
        }
        ind++;
    }



    while (left <= mid) {
        temp[ind] = arr[left];
        left++;
    }
    while (right <= high) {
        temp[ind] = arr[right];
        right++;
    }

    for (int i = 0; i < high - low + 1; i++) {
        arr[low + i] = temp [i];
    }

}

void mergeSort(int arr[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}


void solve() {

    int a[] = {12312, 53, 121, 1, -23, 11, 11};
    mergeSort(a, 0 , sizeof(a) / sizeof(a[0]));
    for (auto x : a)
        cout << x << " ";
    cout << "as";
}
int main() {
#ifndef ONLINE_JUDGE
    // for getting input from input.txt

    freopen("input1.txt", " r", stdin) ;
    // for writing output to output .txt
    freopen("output1.txt" , "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    solve();

    return 0;
}

