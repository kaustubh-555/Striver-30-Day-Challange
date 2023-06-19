class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[126]={0};
        int maxtillnow=0,ans=0;
        queue<char> q;
        for(int i=0;i<s.size();i++){
            if(hash[s[i]-32]==0){
                hash[s[i]-' ']++;
                maxtillnow++;
                q.push(s[i]);
            }
            else{
                ans=max(maxtillnow,ans);
                while(q.front()!=s[i]){
                    hash[q.front()-32]=0;
                    q.pop();
                    maxtillnow--;
                }
                q.pop();
                q.push(s[i]);
            }
        }
        ans=max(maxtillnow,ans);
        return ans;
        
    }
};