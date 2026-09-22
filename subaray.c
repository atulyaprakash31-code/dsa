#include <stdio.h>



int main()
{
int a[]={1,4,5,3};
for(int i=0;i<4;i++){
    
    for(int j=i; j<4;j++){


        for(int k=i;k<=j;k++){
            printf("%d",a[k]);
        }
        printf("\t");
    }
printf("\n");

}



    return 0;
}




