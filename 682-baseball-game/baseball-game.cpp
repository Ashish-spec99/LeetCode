class Solution {
public:
    int calPoints(vector<string>& oprns) {
        vector<int> scores;
        int n = oprns.size();
        int sum = 0;
        
        for(int i=0; i<n; i++){

            if(oprns[i] == "+"){
                scores.push_back(scores[scores.size()-1] + scores[scores.size()-2]);
            }
            else if(oprns[i] == "D"){
                int x = 2 * scores.back();
                scores.push_back(x);
            }
            else if(oprns[i] == "C"){
                scores.pop_back();
            }
            else{
                int x = stoi(oprns[i]);
                scores.push_back(x);
            }
        }
        for(int i=0; i<scores.size(); i++){
            sum += scores[i];
        }
        return sum;
    }
};