/* Calculate Square Root Of A Given Number Using Binary Search */

#include<iostream>
using namespace std;

int Sqrt(int n){

    // We Have To Create A Search Space. Here Search Space Is From 0 to n.
    int ans, start = 0, end = n;
    while(start <= end){
        int mid = start + ((end - start)/2);

        // We Have To Check Whether mid Is Answer Or Not. So, We Need A Predicate Function.
        if(mid * mid == n ){
            return mid;
        }
        else if(mid * mid < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    int ans = Sqrt(n);
    cout<< "Square Root Of " << n << " = " << ans;
}