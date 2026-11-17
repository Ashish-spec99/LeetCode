class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.length();

        int rs=0;
        int e=n-1;

        while(rs<=e){
            if(s[rs]!=s[e]){
                return false;
            }
            else{
                rs++;
                e--;
            }
        }
        return true;
    }
};