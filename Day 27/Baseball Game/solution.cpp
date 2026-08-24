class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score;
        int n = 0, top1=0;
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="+"){
                top1 = score.top();
                score.pop();
                n = top1 + score.top();
                score.push(top1);
                score.push(n);
            }
            else if(operations[i] == "D"){
                n = score.top();
                n *= 2;
                score.push(n);
            }
            else if(operations[i]=="C"){
                score.pop();
            }
            else{
                score.push(stoi(operations[i]));
            }
        }
        n=0;
        while(!score.empty()){
            n+=score.top();
            score.pop();
        }
        return n;
    }
};