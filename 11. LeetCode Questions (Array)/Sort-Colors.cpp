/* Sort 0's , 1's & 2's In A Given Array */

#include<iostream>
#include<utility>
#include<vector>
using namespace std;

void Print_Vector(vector<int>v){
    for(int i = 0; i < v.size(); i++){
        cout<< v[i] << '\t';
    }
    return;
}

void Sort_Color(vector<int>&v){
    int left = 0, right = (v.size() - 1);
    for(int index = 0; index <= right; ){
        if(v[index] == 0 ){
            swap(v[index] , v[left]);
            left++;
            index++;
        }
        else if(v[index] == 2){
            swap(v[index] , v[right]);
            right--;
        }
        else{
            index++;
        }
    }
    return;
}

int main(){
    int n;
    vector<int>v;
    cout<< "Enter The Number Of Elements You Want To Insert In Vector: ";
    cin>>n;
    cout<< "Enter Elements: "<<endl;
    for(int i = 0; i < n; i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    cout<< "The Vector Is: "<<endl;
    Print_Vector(v);
    Sort_Color(v);
    cout<<endl<< "After Sorting 0's, 1's & 2's The Vector: "<<endl;
    Print_Vector(v);
}