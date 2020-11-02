//
// Created by 짱유나 on 2020/11/03.
//

#include <stdio.h>

//error 코드이다.
typedef enum origin { EAST, WEST, SOUTH, NORTH };
void move(enum origin to)
{
    printf("%d쪽으로 이동한다.\n",to);
}
void koreanMove(enum origin to){
    static char *oriname[]  = {"동", "서","남","북"};
    printf("%s쪽으로 이동한다.\n",oriname[to]);
}

int main(){
    enum origin mark =  WEST;
    enum origin head = SOUTH;
    move(head);
    koreanMove(mark);
    return 0;
}