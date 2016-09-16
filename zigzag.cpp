#include<iostream>
#include<vector>
using namespace std;

class ZigZag{
    public:
    int longestZigZag(vector<int>);
};

int ZigZag::longestZigZag(vector<int> sequence){

    int len = sequence.size();
    if(len == 1)
        return 1;
  //  cout << "size:" << len<< endl;
    vector<int> max(len),sign(len,0);
    max[0] = 1; sign[0] = 1;

    for(int i=1;i<len;i++){
        max[i] = 1;
        for(int j=0;j<i;j++ ){
            if(j==0 && sequence[i] != sequence[j]){
                max[i] = 2;
                sign[i] =  sequence[j] - sequence[i];
            } else{
                    if((sign[j] > 0 && sequence[j]-sequence[i] < 0) || (sign[j] < 0 && sequence[j]-sequence[i] > 0) && max[i] < max[j]+1){
                        max[i] = max[j] +1;
                        sign[i] = sequence[j]-sequence[i];
                    }
            }
        }
    }

    int count = max[0];
    for(int i =1;i<len;i++){
    //  cout << max[i] << " ";
        if(count < max[i])
          count = max[i];
    }
    //cout << endl;
return count;
}

int main(){
    int s[] = {374, 40, 854, 203, 203, 156, 362, 279, 812, 955,
600, 947, 978, 46, 100, 953, 670, 862, 568, 188,
67, 669, 810, 704, 52, 861, 49, 640, 370, 908,
477, 245, 413, 109, 659, 401, 483, 308, 609, 120,
249, 22, 176, 279, 23, 22, 617, 462, 459, 244};
    vector<int> v(s,s+(sizeof(s)/sizeof(s[0])));
    ZigZag z ;
    cout << z.longestZigZag(v)<< endl;

return 0;
}
