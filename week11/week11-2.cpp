///week11-2.cpp
///���F�ѨMSOIT107_ADVANCE_009
///�ڭ̵y�L�Ʋ�{��֪k}
#include <stdio.h>

int main()
{
    printf("��J1�Ӽ�(ex.183)");
    int n;
    scanf("%d",&n);///Ū�Jn
    int ans=0;///�Q���{�̤j����]}
    while(n>0){///while�j��,�@�����
        if(n%10>ans)ans = n%10;///��j���� ��s����
        printf("��� %d\n",n%10);
        n=n/10;///�駹��,n�ܤp
    }
    printf("�̤j���֬O %d\n",ans);
}
