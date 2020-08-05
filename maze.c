//
//  main.c
//  PS-1
//
//  Created by 김혜영 on 2020/07/26.
//  Copyright © 2020 김혜영. All rights reserved.
//

#include <stdio.h>


typedef struct pos{
    int x;
    int y;
}pos;
int maze[100][100]={ 0 };
int visit[100][100]={ 0 };
pos queue[10000];
int front=0;
int rear=0;
int n,m;



void enque(int x, int y)
{
    pos temp;
    temp.x = x; temp.y = y;
    queue[rear++] = temp;
}

pos deque()
{
    pos temp = queue[front++];
    return temp;
}
 
int isEmpty() {
    if (front == rear)
        return 1;
    else
        return 0;
}

int xpos[4]={0,0,1,-1};
int ypos[4]={1,-1,0,0};



void bfs(){
    int nextx, nexty;
    
    while(!isEmpty()){
        pos current;
        current = deque();
        for(int i=0;i<4;i++){
            nextx=current.x+xpos[i];
            nexty=current.y+ypos[i];
            if(nextx>=0 && nexty>=0 && nextx<n && nexty<m){
                if(maze[nextx][nexty]==1)
                {
                    if(visit[nextx][nexty]==0){
                        visit[nextx][nexty]=visit[current.x][current.y]+1;
                        enque(nextx,nexty);
                    }
                }
                 
            }
        }
    }
}


int main() {
    scanf("%d %d",&n,&m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1d",&maze[i][j]);
        }
    }
    visit[0][0]=1;
    
    enque(0,0);
    bfs();
    printf("%d\n",visit[n-1][m-1]);
}
