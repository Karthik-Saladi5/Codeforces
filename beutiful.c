#include<stdio.h>
#include<math.h>
void takeinput()
{
   #ifndef ONLINE_JUDGE
    freopen("D:\\coding\\input.txt","r",stdin);
    freopen("D:\\coding\\output.txt","w",stdout);
    #endif
}
int main()
{
    //takeinput();
    int mat[5][5];
    int I,J;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1){
                I=i;
                J=j;
            }
        }
    }
    printf("%d",abs(I-2)+abs(J-2));
}