//
//  main.c
//  PS-2
//
//  Created by 김혜영 on 2020/07/31.
//  Copyright © 2020 김혜영. All rights reserved.
//

#include <stdio.h>

unsigned long combination(int n, int r){
    int p=1;
    for(int i=1;i<=r;i++){
        p=p*(n-i+1)/i;
    }
    return p;
}

unsigned long path(int n, int m, int num){
    if(num==0)
        return (n>=m)? combination(n+m-2,m-1): combination(n+m-2,n-1);
    else{
        int x,y;
        if(num%m==0){
            x=num/m-1;
            y=m-1;
        }
        else{
            x=num/m;
            y=(num%m)-1;
        }
    
        unsigned long num1= (x<=y)?combination(x+y,x):combination(x+y,y);
        unsigned long num2= ((n-x)<=(m-y))?combination(n+m-(x+y)-2,n-x-1):combination(n+m-(x+y)-2,n-x-1);
        return num1*num2;
    }
}

int main() {
    int n,m,num;
    scanf("%d %d %d",&n,&m,&num);
    unsigned long ans = path(n,m,num);
    printf("%lu\n",ans);
}

