class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        int maxf=0;
        unordered_map<int,int> mp;
        for(int high=0;high<fruits.size();high++){
            mp[fruits[high]]++;
            while(mp.size()>2){
                mp[fruits[low]]--;
                if(mp[fruits[low]]==0){
                    mp.erase(fruits[low]);
                }
                low++;
            }
            maxf=max(maxf, high-low+1);
        }
        return maxf;
    }
};