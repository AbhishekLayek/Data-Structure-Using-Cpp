/* Division Using Binary Search */

#include<iostream>
using namespace std;

int Divison_Using_BinarySearch(int dividend, int divisor){

    int start = 0, end = dividend, ans;    // Search Space: 0 to dividend
    while(start <= end){
        int mid = start + ((end - start)/2);

        if(mid * divisor == dividend){   // Predicate Function
            return mid;
        }
        else if(mid * divisor < dividend){
            ans = mid;
            start = mid + 1;  // Go To Right
        }
        else{
            end = mid - 1;  // Go To Left
        }
    }
    return ans;
}

int main(){
    int dividend, divisor;
    cout<< "Enter The Dividend: ";
    cin>> dividend;
    cout<< "Enter The Divisor: ";
    cin>> divisor;
    int ans = Divison_Using_BinarySearch(abs(dividend), abs(divisor));
    if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
        ans = 0 - ans;
    } 
    cout<< "The Answer Of Division = " << ans;
}