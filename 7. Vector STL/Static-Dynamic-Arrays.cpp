/* Static Arrays: Memory Is Allocated At Compile Time. So, The Size Is Fixed.
   Dynamic Arrays: Memory Is Allocated At Run Time. So, The Size Is Not Fixed.
*/

#include<iostream>
using namespace std;
void Print_Array(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
}
int main(){
    // Static Array 
    // Declaration
    int size = 10, arr[10];
    // Taking Input In Static Array
    cout<< "Enter Elements In Static Array: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    // Print The Static Array
    cout<< "The Static Array Is: " <<endl;
    Print_Array(size, arr);

    // Dynamic Array
    int n;
    cout<<endl << "Enter The Number Of Elements: ";
    cin>> n;
    // Declaration
    int *brr = new int[n];
    // Taking Input In Dynamic Array
    cout<< "Enter Elements In Dynamic Array: " <<endl;
    for(int i = 0; i < n; i++){
        cin>> brr[i];
    }
    // Print The Dymaic Array
    cout<< "The Dynamic Array Is: " <<endl;
    Print_Array(n, brr);
}