class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int profit=0;
        int maxprofit=0;
        int min =prices[0] ;
        for(int i=0;i<prices.size();i++){
            if(min>prices[i]){
                min=prices[i];
            }
            profit=prices[i]-min;
            if(profit>maxprofit){
                maxprofit=profit;
            }
            
        }
        return maxprofit;
    }
};