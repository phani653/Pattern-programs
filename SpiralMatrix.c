#include<stdio.h>
int main(){
	int n,c=0,i=0,j=0,cell,cc,g=1;
	scanf("%d",&n);
	int ar[n][n];
	cell=n;
	while(c<n*n){
		cc=0;
		for(;cc<cell;cc++,j=j+g) scanf("%d",&ar[i][j]);
		j=j-g; //because went outside inside loop before breaking
		i=i+g;
		c=c+cc;
		cc=0;
		cell--;
		if(c>=n*n) break;
		for(;cc<cell;cc++,i=i+g) scanf("%d",&ar[i][j]);
		i=i-g;
		j=j-g;
		c+=cc;
		g*=-1;
	}
	for(c=0;c<n;c++){
		for(cc=0;cc<n;cc++) printf("%d ",ar[c][cc]); printf("\n");
	}return 0;
}
