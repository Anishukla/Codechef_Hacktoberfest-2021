#include<stdio.h>
int main(){

 int test,z;
 scanf("%d",&test);
 for(z=0;z<test;z++){
int m,n,q;
 scanf("%d %d %d",&m ,&n ,&q);

 int d=2;
 int array1[q][d];


 int i,j;
 for(i=0;i<q;i++){
     scanf("%d %d",&array1[i][0],&array1[i][1]);
 }
 int array[m][n];
 int k,l;
 for(k=0;k<m;k++){
   for(l=0;l<n;l++){
     array[k][l]=0;
   }
}
int o,p,r,count1,count2;
for(o=0;o<q;o++){
    count1=array1[o][0]-1;
    count2=array1[o][1]-1;
  for(p=0;p<n;p++){
    array[count1][p]++;
  }
     for(r=0;r<m;r++){
       array[r][count2]++;
     }
  }
 int w,x,count=0;
 for(w=0;w<m;w++){
    for(x=0;x<n;x++){
      if(array[w][x]%2!=0){
         count++;
       }
    }

  }
  printf("%d\n",count);
}
return 0;
}
