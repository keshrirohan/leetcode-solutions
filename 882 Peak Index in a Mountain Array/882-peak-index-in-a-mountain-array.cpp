class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1,mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if  (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1] ){
                return mid;
            }
            else if(arr[mid]<arr[mid+1]){
                s=mid;
            } else if(arr[mid]>arr[mid+1]){
                e=mid;
            }
        }
return mid;
        
    }
};