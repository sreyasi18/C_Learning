#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k; //for three numbers 1,2,3
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			for (k=1;k<=3;k++){
				//for not repeating the combinations we have to check i,j,k are not same
				if(i!=j && j!=k && k!=i){
					printf("%d%d%d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
