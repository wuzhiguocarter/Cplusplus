#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <cstring>
using namespace std;

void myswap(vector<int> &vec, int low, int high){
    int temp = vec[low];
    vec[low] = vec[high];
    vec[high] = temp;
}

int partition(vector<int> &arr, int begin, int end) {
    int pivotIndex = begin;
    int pivot = arr[pivotIndex];
    myswap(arr, pivotIndex, end);

    int low = begin;
    int high = end;

    while (low < high) {
        // 因为把pivot放在了最后，所以low指针先走
        while (low < high && arr[low] < pivot) low++; 
        while (low < high && arr[high] > pivot) high--;
        if(low < high) myswap(arr, low, high);
    }

    myswap(arr, low, end);
    return low;
}

int main() {
    vector<int> in;
    int buf;
    char ch;
    while(scanf("%d", &buf)){
        ch=cin.get();
        if(ch != ' ') 
            break;
        in.push_back(buf);
    }
    
    int k;
    cin >> k;
    cout << "input done" << endl;
    cout << "in.size(): " << in.size() << endl;

    sort(in.begin(),in.end());

    cout << in[k-1] << endl;

    return 0;
}