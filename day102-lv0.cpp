// https://leetcode.com/problems/two-out-of-three/description/

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> s1;
        unordered_set<int> s2;
        unordered_set<int> s3;

        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        for(int i=0;i<nums3.size();i++){
            s3.insert(nums3[i]);
        }

        unordered_map<int,int> m;

        for(auto it:s1){
            m[it] += 1;
        }
        for(auto it:s2){
            m[it] += 1;
        }
        for(auto it:s3){
            m[it] += 1;
        }

        vector<int> res;
        for(auto it:m){
            if(it.second > 1){
                res.push_back(it.first);
            }
        }
        return res;
    }
};