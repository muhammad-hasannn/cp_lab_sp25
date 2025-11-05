#include<iostream>
#include<vector>
using namespace std;

/*navie approach - two pointer*/
vector<int> revNavie(vector<int> arr, int start, int end){
    if(start >= end) return arr;
    swap(arr[start], arr[end]);
    return revNavie(arr, start+1, end-1);
}

/*using one pointer only*/
vector<int> rev(vector<int> arr, int i){
    if(i >= arr.size()/2) return arr;
    swap(arr[i], arr[arr.size()-i-1]);
    return rev(arr, i+1);
}

// do not make a returning function, instead pass vector by reference to avoid multiple copies of vector


int main(){
    vector<int> a = {1,5,3,2,4,6,8,2,9,6,4};

    vector<int> r = rev(a, 0);

    for(int i : r) cout << i << " ";

}