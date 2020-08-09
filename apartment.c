//
//  main.c
//  PS-5
//
//  Created by 김혜영 on 2020/08/09.
//  Copyright © 2020 김혜영. All rights reserved.
//

#include <stdio.h>

int n;
int xpos[4] = {0,0,-1,1};
int ypos[4] = {-1,1,0,0};
int arr[26][26];
int visit[26][26]={0};
int num=0;
int size[400]={0};
void dfs(int a, int b,int key){
    visit[a][b]=key;
    for(int i=0;i<4;i++){
        int x=a+xpos[i];
        int y=b+ypos[i];
        if((a>=0 && a<n)&&(b>=0 && b<n)&&(arr[x][y]==1)){
            if(visit[x][y]==0) dfs(x,y,key);
        }
    }
}


int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1 && visit[i][j]==0){
                num++;
                visit[i][j]=num;
                dfs(i,j,num);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visit[i][j]!=0) size[visit[i][j]-1]++;
        }
    }
    for(int i=0;i<num;i++){
        for(int j=num-1;j>i;j--){
            if(size[i]>size[j]){
                int tmp=size[j];
                size[j]=size[i];
                size[i]=tmp;
            }
        }
    }
    printf("%d\n",num);
    for(int i=0;i<num;i++){
        printf("%d\n",size[i]);
    }
    
}

