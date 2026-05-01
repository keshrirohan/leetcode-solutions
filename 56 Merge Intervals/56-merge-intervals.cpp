class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        int  first=0;
        int lst=1;
        vector<vector<int>> finalans;
        sort(intervals.begin(),intervals.end());
        vector<int> ans=intervals[0];
        
        
        for(int i=0;i<intervals.size();i++){
           
                if(ans[lst]>=intervals[i][first]){
                    ans[lst]=max(ans[lst],intervals[i][lst]);
                    
                }else{
                    finalans.push_back(ans);
                    ans=intervals[i];
                }

            
        }
        finalans.push_back(ans);
        return finalans;
    }
};