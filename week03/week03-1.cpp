// week03-1.cpp �G�X�@�� C++����
//LeetCode 2579. Count Total Number of Colored Cells
#  LeetCode 2579.Count Total Number of Colored Cells
class Solution{
    long long colcredCells(int n){
        long long ans=n; //�n�h�g�o��,��Ʀr���� �ܦ�64�줸 [�ܪ��ܪ������]
        return ans*ans+(ans-1)*(ans-1); //C/C++/Java/CA���n�[���u
    }
};
