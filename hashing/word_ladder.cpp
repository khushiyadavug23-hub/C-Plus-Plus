class Solution {
public:
    int ladderLength(string start, string end, vector<string>& list) {
        set<string>st(list.begin() , list.end());
        queue<pair<string ,int>>q;
        q.push({start , 1});
        while(!q.empty()){
            string word = q.front().first;
            int time = q.front().second;
            q.pop();
            if(word == end) return time;
            int n = word.size();
            for(int i=0 ; i<n ; ++i){
                char ch = word[i];
                for(int j=0 ; j<26 ; ++j){
                    word[i] = 'a'+j;
                    if(st.find(word)!=st.end()){
                        st.erase(word);
                        q.push({word , time+1});
                    }
                }word[i] = ch;
            }
        }return 0;

    }
};
