class Solution {
public:
    string getHint(string secret, string guess) {
        map<char,int> m,p;
        int c=0;
        for(int i=0;i<guess.size();i++)
        {
            if(guess[i]==secret[i]){
                c++;
            }
            else{
                m[guess[i]]++;
                p[secret[i]]++;
            }
        }
        int d=0;
        for(auto it:m){
            if(p.find(it.first)!=p.end()) d+=min(it.second,p[it.first]);
        }
        string s="";
        s+=to_string(c);
        s+='A';
        s+=to_string(d);
        s+='B';
     
        return s;
    }
};
