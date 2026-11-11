class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        int n = s.size();

        string ans = "";

        for(int i=0; i<n; i++){

            ans.push_back(s[i]);

            if(ans.size() >= k){
                bool same = true;
                for(int j=ans.size()-k; j<ans.size(); j++){
                    if(ans[j] != ans[ans.size() - k]) {
                       same = false;
                       break;
                    }
                }
                    if(same){
                        for(int j=0; j<k; j++){

                            ans.pop_back();
                        }
                    }
            }
        }
        return ans;
    }
};