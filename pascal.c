#include<stdio.h>
int fact(int);
int combi(int,int);
int pascal(int);
int fact(int m){
	int f=1,i;
	for(i=1;i<=m;i++){
		f=f*m;
	}
	return(f);
}
int combi(int m,int r){
	return(fact(m)/(fact(m-r)*fact(r)));
}
int pascal(int n ){
	int i,j,k,r;
	for(i=1;i<=n;i++){
		k=1;
		r=0;
		for(j=1;j<=2*n-1;j++){
			if(j>=n+1-i&&j<=n-1+i &&k){
				printf("%2d",combi(i-1,r));
				k=0;
				r++;
			}
			else{
				printf("  ");
				k=1;
			}
			
		}
			printf("\n");
	}

}
int main(){
	int n;
	scanf("%d",&n);
	pascal(n);
}
