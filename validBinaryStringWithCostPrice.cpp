/*You are given two integers n and k.

The cost of a binary string s is defined as the sum of all indices i (0-based) such that s[i] == '1'.

A binary string is considered valid if:

It does not contain two consecutive '1' characters.
Its cost is less than or equal to k.
Return a list of all valid binary strings of length n in any order.

 

Example 1:

Input: n = 3, k = 1

Output: ["000","010","100"]*/
class Solution{
public:
    void binary(string s,int n,vector<string>&all){
        if(s.length()==n){
            all.push_back(s);
            return;
        }
        binary(s+'0',n,all);
        binary(s+'1',n,all);
    }
    vector<string> generateValidStrings(int n, int k) {
        vector<string>all;
        vector<string>ans;
        binary("",n,all);
        for(int i=0;i<all.length();i++){
            bool cond = true;
            int cost=0;
            for(int j=i;j<all[i].length();j++){
                if(j>0&& all[i][j-1]=='1' && all[i][j]=='1'){
                    cond=false;
                }
                if(all[i][j]=='1') cost+=j;
            }
            if(cond&& cost<=k) {
                ans.push_back(all[i]);
            }
        }

    }

};