#include <iostream>
#include <vector>
using namespace std;

class solution{
public:
    int digitFrequencyScore(int n){
        vector<int>freq(10,0);
        while(n>0){
            freq[n%10]++;
            n/=10;
        }
        int ans= 0;
        for(int i=0;i<=9;i++){
            if(freq[i]>0){
                ans+= freq[i]*i;
            }
        }
        return ans;
    }
};
int main(){
    solution obj;
    int n;
    cout <<"Enter Number :";
    cin>>n;
    int result = obj.digitFrequencyScore(n);
    cout<< "Output :"<< result <<endl;
    return 0;

}