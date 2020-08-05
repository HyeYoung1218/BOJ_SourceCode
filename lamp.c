//
//  main.c
//  PS-4
//
//  Created by 김혜영 on 2020/08/05.
//  Copyright © 2020 김혜영. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    int N,M,K;
    char lamp[52][52];
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%s",lamp[i]);
    }
    scanf("%d",&K);
    int max=0;
    for(int i=0;i<N;i++){
        int zero=0;
        int cmp=0;
        for(int j=0;j<M;j++){
            if(lamp[i][j]=='0') zero++;
        }
        if(zero<=K && zero%2 == K%2){
            for(int a=0;a<N;a++){
                if(strcmp(lamp[i],lamp[a])==0) cmp++;
            }
        }
        max= (cmp>max) ? cmp : max;
    }
    printf("%d\n",max);
    return 0;
}
