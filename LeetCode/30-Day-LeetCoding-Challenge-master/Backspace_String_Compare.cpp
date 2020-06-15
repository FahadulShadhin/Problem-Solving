class Solution {
public:
    string check(string str) {
        // double ended queue...
        // push pop can be done from both front and end...
        deque<char> q;
        for(int i=0; i<str.size(); i++) {
            if(str[i] != '#')
                q.push_back(str[i]);
            else if(!q.empty())
                q.pop_back();
        }
        string ans = "";
        while(!q.empty()) {
            ans += q.front();
            q.pop_front();
        }
        return ans;
    }
    
    bool backspaceCompare(string S, string T) {
        cout << check(S) << endl << check(T) << endl;
        if(check(S) == check(T)) 
            return true;
        else 
            return false;
    }
};
