///week14-3.cpp
///UVA11063: B2-Sequence
///Not OK, Only Part 1:Input Part 2: Output
#include <stdio.h>
int main()
{
	int a[100];
	int N,t=1;
	while(scanf("%d",&N) ==1){///part 1;
		for(int i=0;i<N;i++){///part 1
			scanf("%d", &a[i]);///part 1
		}

		///part 2:Output
		printf("Case #%d: It is a B2-Sequence.\n\n",t);
		t++;
	}
}
