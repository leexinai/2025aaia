//week06-3.cpp
//LeetCode 1780.check-if-number-is-a-sum-of-powers-of-three
//題目看似很難,但程式很簡單,只要while(迴圈)if(迴圈)就好了
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){ // 只要n還又數字,就剝皮,剝掉3的倍數
            //n%3 會剩下??剩1個很好,剩0很好,但2就不好
            if(n%3==2)return  false;
            n = n / 3;//剝掉3的倍數
        }
        return true;
    }
};
