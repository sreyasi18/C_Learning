#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, k;    //for three numbers 1, 2 and 3

    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            for(k=1;k<=3;k++){
 //for removing repeated numbers we have to apply a condition 
               	 if(i!=j && i!=k && j!=k){
                    printf("%d%d%d\n", i, j, k);
                }
                

            }
        }
    }
    return 0;
}
