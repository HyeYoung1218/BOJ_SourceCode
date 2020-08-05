# BOJ_SourceCode

## <백준 Problem Solving>


### 1. 백준 2178번: 미로 탐색
-------------------------

### 2. 백준 10164번: 격자상의 경로
-------------------------

### 3. 백준 11727번: 2Xn 타일링 2
-------------------------



### 4. 백준 1034번: 램프
-------------------------
<img width="754" alt="스크린샷 2020-08-05 오후 4 25 29" src="https://user-images.githubusercontent.com/67541842/89384262-c87d0b80-d738-11ea-8c78-da162b89fc92.png">

#### 설명:      
        
        
우선 한 행이 켜져있기 위해서는 해당하는 행의 상태가 모두 1이어야 하는데        
결과적으로 정답으로 나오는 행의 최대 개수는 조건을 만족하는 초기 상태가 동일한 행의 최대값이라고 볼 수 있다.       
초기상태가 동일한 것을 비교할 때 비효율적인 반복문 사용을 피하기 위해서는        
처음부터 램프의 상태를 저장하는 2차원배열 변수의 형태를 char로 두어 각 행에 문자열로 값을 받아 저장할 수 있도록 한다.      
결국 string.h 헤더파일에 들어있는 strcmp 함수로 쉽게 두 행의 일치여부를 확인할 수 있게 된다.     
문제를 풀기 위해서 우선 각 행이 k번의 스위치 조작으로 켜진 상태가 될 수 있는지 확인해야 하는데       
k가 홀수이면 초기에 꺼져있는 램프 개수도 홀수여야하고 짝수이면 초기에 꺼져있는 램프 개수도 역시 짝수가 되어야한다.          
위의 조건들을 토대로 적절한 반복문을 사용하여 정답이 나오도록 구현하였다.     
