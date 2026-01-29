
#include <stdc++.h>
using namespace std;
int main(){
    int W=50;
    vector<int> val={100,60,120};
    vector<int> wt={20,10,40};
    int n=3;
    vector<pair<double,int>> ratio;
    for(int i=0;i<n;i++) ratio.push_back({(double)val[i]/wt[i],i});
    sort(ratio.rbegin(),ratio.rend());
    double total=0;
    for(auto &r:ratio){
        if(W==0) break;
        int i=r.second;
        if(wt[i]<=W){
            total+=val[i];
            W-=wt[i];
        } else {
            total+=r.first*W;
            W=0;
        }
    }
    cout<<"Maximum value = "<<total;
}
