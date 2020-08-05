//
//  main.c
//  PS-3
//
//  Created by 김혜영 on 2020/08/03.
//  Copyright © 2020 김혜영. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int f[1001]={0};
    f[1]=1;
    f[2]=3;
    if(n==1){
        printf("%d\n",f[n]);
    }
    else if(n==2){
        printf("%d\n",f[n]);
    }
    else{
        for(int i=3;i<=n;i++){
            f[i]=f[i-1]+f[i-2]*2;
            f[i]=f[i]%10007;
        }
        printf("%d\n",f[n]);
    }
    
    return 0;
}
