//Using STL Functions
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        copy(s.begin(),s.end(),nums.begin());
        return s.size();
    }
};
//Two Pointer Approach much faster
class Solution {
public:
    int removeDuplicates(vector<int>& nums,int j=1) {
        if(nums.size()==0)return 0;
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]!=nums[i+1]) nums[j++]=nums[i+1];
        return j;
    }
};

//Little more cleaner approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums,int c=0) {
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])c++;
            else nums[i-c]=nums[i];
          }
        return nums.size()-c;
    }
};