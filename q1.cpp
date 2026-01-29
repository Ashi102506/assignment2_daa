
#include <stdc++.h>
using namespace std;
int main(){
    int n=6;
    vector<int> start={1,3,0,5,8,5};
    vector<int> finish={2,4,6,7,9,9};
    vector<pair<int,int>> act;
    for(int i=0;i<n;i++) act.push_back({finish[i], start[i]});
    sort(act.begin(), act.end());
    int count=1;
    int lastFinish=act[0].first;
    cout<<"Selected activities: ("<<act[0].second<<","<<act[0].first<<") ";
    for(int i=1;i<n;i++){
        if(act[i].second>=lastFinish){
            count++;
            lastFinish=act[i].first;
            cout<<"("<<act[i].second<<","<<act[i].first<<") ";
        }
    }
    cout<<"\nMaximum number of activities = "<<count;
}
