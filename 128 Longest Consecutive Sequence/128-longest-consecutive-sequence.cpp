    class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            unordered_set<int> mp(nums.begin(),nums.end());
            int curr;
            int len=0,ans=0;
            for(int num : mp){
                if(mp.find(num-1)==mp.end()){// finding the continous lowest among every number 
                    curr=num;
                    len=1;
                    while(mp.find(curr+1)!=mp.end()){
                        curr++;
                        len++;
                    }
                    ans=max(ans,len);
                }
                
            }
            return ans;
        }
    };