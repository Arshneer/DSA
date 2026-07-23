class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int max=-1;
        for(int i=0;i<n;i++){
          mp[nums[i]]++;
        }
        for(auto i :mp){
            if(i.second>max){
                max=i.second;
            }
        }
        int ans=0;
        for(auto i:mp){
            if(i.second==max){
             ans+=i.second;
            }
        }
        return ans;
    }
};