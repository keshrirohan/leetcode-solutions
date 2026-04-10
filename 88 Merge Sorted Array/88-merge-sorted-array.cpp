class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        //  approach 1
        //         for(int i=0;i<(m+n);i++){
        //             if(i<m){
        //                 continue;
        //             }
        //             nums1[i]=nums2[i-m];
        // }
        // sort(nums1.begin(),nums1.end());

        // approach2
        int i = m-1, j = n-1, t = m+n-1;
        while (j >= 0) {
            if (i>=0 && nums1[i] > nums2[j]) {
                nums1[t] = nums1[i];
                i--;
            } else {
                 nums1[t] = nums2[j];
                j--;
            }
            t--;
        }
    }
};