#include<stdio.h>

int main() {
	int bsize,psize,min,mdex;
	printf("\nEnter number of blocks and processes\n");
	scanf("%d",&bsize);
	scanf("%d",&psize);
	int b[bsize],p[psize],alloc[bsize];
	printf("\nEnter block sizes\n");
	for(int i=0;i<bsize;i++) {
		scanf("%d",&b[i]);
		alloc[i] = -1;
	}
	printf("\nEnter process sizes\n");
	for(int i=0;i<psize;i++)
		scanf("%d",&p[i]);

	// ITERATE OVER PROCESSES
	for(int i=0;i<psize;i++) {
		//ITERATE OVER BLOCK SIZE
		min = 9999;
		mdex = -1;
		for(int j=0;j<bsize;j++) {
			if(p[i]<=b[j] && b[j]<min) {
				// printf("%d -> %d\n",p[i],b[j]);
				min = b[j];
				mdex = j;
			}
		}
			// printf("%d %d\n",min,mdex);
			b[mdex]-=min;
			alloc[i] = mdex;
	}
	for(int i=0;i<psize;i++) {
		printf("%d\n",alloc[i]+1);
	}
	return 0;
}
