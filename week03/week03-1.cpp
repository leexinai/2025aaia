// week03-1.cpp 二合一的 C++版本
//LeetCode 2579. Count Total Number of Colored Cells
#  LeetCode 2579.Count Total Number of Colored Cells
class Solution{
    long long colcredCells(int n){
        long long ans=n; //要多寫這行,把數字提升 變成64位元 [很長很長的整數]
        return ans*ans+(ans-1)*(ans-1); //C/C++/Java/CA都要加分線
    }
};
