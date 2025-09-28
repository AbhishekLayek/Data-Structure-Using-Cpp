/* Minimum Amount Of Time To Collect Garbadge (Leetcode Problem No. 2391) */

// There Are Three Types Of Garbadge Are Present Paper('P') , Glass('G') And Metal('M')
// There Are Three Trucks One For Paper, One For Glass And One For Metal Garbadge. And Only One Truck Can Travel At A Single Time.
// Time Required To Pick Each Garbage = 1 minute. Travel Time From One Index To Another Index Is Given In The Program.


#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int garbadgeCollection(vector<string>& garbadge, vector<int>& travel){
    int pickP = 0, pickG = 0, pickM = 0, travelP = 0, travelG = 0, travelM = 0, lastP = 0, lastG = 0, lastM = 0;

    // We Have To Traverse The Garbage
    for(int i = 0; i < garbadge.size(); i++){
        string curr_str = garbadge[i];

        // We Have To Access The Each Chracter From Each Strings Of Garbadge
        for(auto ch: curr_str){

            if(ch == 'P'){
                pickP++;
                lastP = i;
            }
            if(ch == 'G'){
                pickG++;
                lastG = i;
            }
            if(ch == 'M'){
                pickM++;
                lastM = i;
            }
        }
    }

    // Calculate The Total Travel Time
    for(int i = 0; i < lastP; i++){
        travelP += travel[i];
    }
    for(int i = 0; i < lastG; i++){
        travelG += travel[i];
    }
    for(int i = 0; i < lastM; i++){
        travelM += travel[i];
    }

    // calculate The Minimum Time

    int time = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);

    return time;
}

int main(){
    int n;
    vector<string>garbadge;
    vector<int>travel;
    cout<< "Enter The Number Of Garbadges: ";
    cin>> n;
    cout<< "Enter Garbadges: "<<endl;
    for(int i = 0; i < n; i++){
        string str;
        cin>> str;
        garbadge.push_back(str);
    }
    cout<< "Enter The Travel Times: "<<endl;
    for(int i = 1; i < n; i++){
        int t;
        cin>> t;
        travel.push_back(t);
    }
    int ans = garbadgeCollection(garbadge, travel);
    cout<< "Minimum Amount Of Time To Collect garbadge = " << ans << " Miniutes";
}