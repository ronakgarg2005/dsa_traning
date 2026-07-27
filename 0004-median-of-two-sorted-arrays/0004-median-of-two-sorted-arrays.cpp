class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec =nums1;
        for(int x :nums2){
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        int n=vec.size();
        double m;
        if(n%2==0){
            m=vec[n/2]+vec[(n/2)-1];
            m=m/2;
            return m;
        }
        m=vec[n/2];
        return m;


    }
};