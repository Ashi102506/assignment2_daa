
#include <stdc++.h>
using namespace std;
int main(){
    vector<int> at={900,910,920,1100,1120};
    vector<int> dt={940,1200,950,1130,1140};
    sort(at.begin(),at.end());
    sort(dt.begin(),dt.end());
    int i=0,j=0,plat=0,ans=0;
    while(i<at.size()){
        if(at[i]<dt[j]){
            plat++;
            ans=max(ans,plat);
            i++;
        } else {
            plat--;
            j++;
        }
    }
    cout<<"Minimum number of platforms required = "<<ans;
}
