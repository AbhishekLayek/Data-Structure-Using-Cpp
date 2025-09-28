/* Create A Vector Of Vector (which have 2 elements), And Sort In Descending By 1st index Using Custom Comparator */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Print_VectorOfVector(vector<vector<int>>&v){
    for(int i = 0; i < v.size(); i++){
        vector<int>&temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<< a << "  " << b <<endl;
    }
    return;
}

// Custom Comparator For Sort In Descending By 1st index

bool myComp(vector<int>&a, vector<int>&b){
    return a[1] > b[1];
}

int main(){
    vector<vector<int>>v;
    int n;
    cout<< "Enter The Size: ";
    cin>> n;
    cout<< "Enter Elements: "<<endl;
    for(int i = 0; i < n; i++){
        vector<int>temp;
        int a, b;
        cin>>a;
        cin>>b;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout<< "Vector Of Vector Is: "<<endl;
    Print_VectorOfVector(v);

    sort(v.begin(), v.end(), myComp);

    cout<< "After Sort In Descending Order By 1st Index: "<<endl;
    Print_VectorOfVector(v);
}