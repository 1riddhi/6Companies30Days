#define pb push_back

class Solution {
    vector<int> v;
    vector<vector<int>> ans;
public:
    void func(int target, int k, int id){
      
      if(k==0 && target==0){
          ans.push_back(v);
          return ;
      }
      if(id>=10) return ;
      v.push_back(id);
      func(target-id,k-1,id+1);
      v.pop_back();
      func(target,k,id+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        func(n,k,1);
        return ans;

    }
};
