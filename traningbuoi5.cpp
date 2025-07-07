#include <stdio.h>
int main(){
	int n; scanf("%d", &n);
	int a[n+1];
	int tongle=0, tongchan=0 ;
	
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (int i=0;i<n;i++){
		if(i%2==0){
			tongchan+=a[i];
		}
		else {
			tongle+=a[i]; 
		} 
	}
	printf("%d %d",tongle,tongchan) ;
}
