/* Search In A Rotated And Sorted Array */

#include<iostream>
#include<vector>
using namespace std;

void Print_Vector(vector<int>v){
    for(int i = 0; i < v.size(); i++){
        cout<< v[i] << '\t';
    }
    return;
}

// Function To Find Pivot Index

int Find_Pivot_Index(vector<int>v){
    int size = v.size();
    for(int start = 0, end = (size - 1); start <= end; ){
        int mid = start + ((end - start)/2);

        // If There Is Single Element Then Return The start or end Index
        if(start == end){
            return start;
        }

        // If The Element In mid index Is Less Than Element In (mid - 1) index Then Return (mid - 1)
        // ***Always Ensure (mid - 1) Will Not Be Negative
        else if((v[mid] < v[mid - 1]) && ((mid - 1) >= 0)){   
            return (mid - 1);
        }

        // If The Element In mid index Is Greater Than Element In (mid + 1) index Then Return mid
        // ***Always Ensure (mid + 1) Not Exceed The Range
        else if((v[mid] > v[mid + 1]) && ((mid + 1) < size)){
            return mid;
        }

        // If v[start] Greater Than v[mid] Means We Are At The Right Side Of The Rotated & Sorted Array.So,To Find Pivot Index Go Left
        else if(v[start] > v[mid]){
            end = mid - 1;
        }
        
        // If v[start] Less Than Or Equal To v[mid] Means We Are At The Left Side Of The Rotated & Sorted Array.So,To Find Pivot Index Go Right
        else if(v[start] <= v[mid]){
            start = mid + 1;
        }
    }
    return -1;
}

void Binary_Search(vector<int>v, int start, int end, int target){
    while(start <= end){
        int mid = start + ((end - start)/2);
        if(v[mid] == target){
            cout<< target << " Found At Index " << mid;
            return;
        }
        else if(v[mid] < target){
            start = mid + 1;
        }
        else if(v[mid] > target){
            end = mid - 1;
        }
    }
    cout<< target << " Not Found";
    return;
}

void Search_RotatedAndSorted(vector<int>v, int target){
    int pivot = Find_Pivot_Index(v);
    if(target >= v[0] && target <= v[pivot]){
        Binary_Search(v, 0, pivot, target);
    }
    else{
        Binary_Search(v, (pivot + 1), (v.size() - 1), target);
    }
    return;
}

int main(){
    int n, target;
    vector<int>v;
    cout<< "Enter The Number Of Elements: ";
    cin>> n;
    cout<< "Enter Elements: "<<endl;
    for(int i = 0; i < n; i++){
        int d; 
        cin>> d;
        v.push_back(d);
    }
    cout<< "The Array Is: "<<endl;
    Print_Vector(v);
    cout<<endl << "Enter Target Element: ";
    cin>> target;
    Search_RotatedAndSorted(v, target);
}