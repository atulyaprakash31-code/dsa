#include <stdio.h>



int main()
{
    int max=0;
int a[]={-10,4,5,-3};
for(int i=0;i<4;i++){
    int sum=0;
    
    for(int j=i; j<4;j++){
        sum+=a[j];
        if(sum>max){
        max=sum;

        }
        


    }


}
printf("%d",max);



    return 0;
}


