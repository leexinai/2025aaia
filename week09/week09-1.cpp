///week09-1.cpp
///LeetCode 38. Count and Say�Ʀr�s��X�{ �N�ҥ�RLE��k{�s�X}��{�Ʀr+�r��}���Φ�
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string prev = countAndSay(n-1);///��²�檺Case �p�G�O1�N�^��"1"
        string ans = "";
        char prevC = prev[0];///�e�@�Ӧr��
        int prevN = 1;///�e�@�Ӧr�� �ֿn�X�{�X��
        for(int i=1; i<prev.length();i++){
            if(prevC == prev[i]) prevN++;///�ۦP �N+1
            else{///�r�����P��
                ans += string(to_string(prevN)) + prevC;///�X�{�X�� + ���Ӧr��(�e�X���e�ֿn���r��)
                prevC = prev[i];///�s���r��
                prevN = 1;///�q1�}�l(�s���r�� ��1��)
            }
        }
        ans += string(to_string(prevN)) + prevC;///�̫�@�� �]�n�e�X�h
        return ans;
    }
};
