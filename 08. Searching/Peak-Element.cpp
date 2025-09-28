/* Find Peak Element In A Mountain Array */

#include<iostream>
using namespace std;
int Find_Mountain_Peak(int size, int arr[]){
    int peak, start = 0, end = (size - 1);
    while(start <= end){
        int mid = start + ((end - start) / 2);

        // mid Element Is Present In The Upward Portion Of Mountain Array
        if(arr[mid] < arr[mid + 1]){
            start = (mid + 1);    // Peak Exist In The Right Portion Of The Array So Go To The Right.
        }
        // mid Element Can Be Peak Or It Present In The Downward Portion Of Mountain Array
        else{
            peak = arr[mid];   // mid Can Be Peak Element, So Store It
            end = (mid - 1);  // It Can Be Present In Downard Portion So, Go To The Left.
        }
    }
    return peak;
}

int main(){
    int size;
    cout<< "Enter The Size Of Array: ";
    cin>> size;
    int *arr = new int[size];
    cout<< "Enter The Elements: "<<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    int peak = Find_Mountain_Peak(size, arr);
    cout<<endl<< "Peak Element Of The Mountain Array Is = " << peak;
}