/* Rearrange Array Element By Sign */

#include<iostream>
#include<vector>
using namespace std;

void Print_Vector(vector<int>v){
    for(int i = 0; i < v.size(); i++){
        cout<< v[i] << '\t';
    }
    return;
}

void Rearrange_By_Sign(vector<int>&v){
    int size = v.size();
    vector<int>ans(size);
    for(int index = 0, pos = 0, neg = 1; index < size; index++){
        if(v[index] > 0){
            ans[pos] = v[index];
            pos += 2;
        }
        else if(v[index] < 0){
            ans[neg] = v[index];
            neg += 2;
        }
    }
    v = ans;
    return;
}

int main(){
    int n;
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
    Rearrange_By_Sign(v);
    cout<<endl<< "After Rearranging By Sign, The Array: "<<endl;
    Print_Vector(v);
}
