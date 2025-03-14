// week04-1.cpp  C++セ 璶糶︹祘Α
// LeetCode 2529. Maximum Count of Postive Integers and Negative Integers
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0) pos++; //タ计++
            if(nums[i]<0) neg++; //璽计++
        }
        if( pos>neg ) return pos; //タ计ゑ耕 癳
        else return neg; //ぃ礛碞璽计ゑ耕 癳
    }
};
