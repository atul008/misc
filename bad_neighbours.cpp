#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class BadNeighbours{
    public:
    int maxDonations(vector<int>);
};
int BadNeighbours::maxDonations(vector<int> donations){
    int len = (int)donations.size();
    int temp;
    if(len == 1)
        return donations[0];

    vector<int> maxd(donations.begin(),donations.end());

maxd[2] = donations[2] + donations[0];
    for(int i=3;i<len;i++){
        for(int j=0;j<i-1;j++){

            if(j==0 && i==len-1)
                continue;
            //temp = max(maxd[j-1],maxd[j]);
            if(i == len-1){
                if(maxd[i] < donations[i] +maxd[j]-maxd[0])
                    maxd[i] = donations[i] + maxd[j]-maxd[0];

            }else{
                if(maxd[i] < donations[i] +maxd[j])
                    maxd[i] = donations[i] + maxd[j];
            }
        }

    }

    int count = maxd[0];
    for(int i=1;i<len;i++){
    //    cout << maxd[i] << " ";
        if(count< maxd[i])
        count= maxd[i];
    }
  //  cout << endl;
return count;
}
int main(){
    int d[] ={94, 40, 49, 65, 21, 21, 106, 80, 92, 81, 679, 4, 61,
  6, 237, 12, 72, 74, 29, 95, 265, 35, 47, 1, 61, 397,
  52, 72, 37, 51, 1, 81, 45, 435, 7, 36, 57, 86, 81, 72};

    vector<int> v(d,d+(sizeof(d)/sizeof(d[0])));
    BadNeighbours bn;
    cout << bn.maxDonations(v) << endl;
return 0;
}
