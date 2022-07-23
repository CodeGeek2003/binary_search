#include <iostream>
#include <vector>
#include <deque>
using namespace std;
using ll=long long;
using dq= std::deque<int>;
using vec= std::vector<int>;
using vst=std::vector<char>;
int Binary_Search(dq arr,int size, int search_value){
    int low=0,high=size-1;
    int mid;

    while(low<=high) {
        mid=(low+high)/2;
        if (search_value == arr[mid]) {
            return mid;
        } else if (search_value > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    dq arr;
    int num,x;
    cout<<"Please enter how many integers: ";
    cin>>num;
    cout<<"Please enter array's elements: ";
    for (int i=0;i<num;i++){
        cin>>x;
        arr.push_back(x);
    }
    std::sort(arr.begin(), arr.end());
    int looking_for;
    cout<<"Please enter the number you looking for: ";
    cin>>looking_for;
    int result= Binary_Search(arr,num,looking_for);
    cout<<"Your wanted integers index is: "<<result;
    return 0;
}
