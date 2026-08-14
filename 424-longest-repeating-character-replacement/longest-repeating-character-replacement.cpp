class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0;
        vector<int> count(26,0);
        int maxfreq=0;
        int maxlen=0;
        for(int high=0;high<s.size();high++){
            count[s[high]-'A']++;
            maxfreq= max(maxfreq, count[s[high]-'A']);
            int changes= (high-low+1)-maxfreq;
            if(changes>k){
                count[s[low]-'A']--;
                low++;

            }
 maxlen = max(maxlen, high - low + 1);
        }
        return maxlen;
    }
};