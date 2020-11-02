//
// Created by 짱유나 on 2020/11/03.
//

#include <stdio.h>

void move(enum origin to){
    printf("%d쪽으로 이동한다.\n", to);
}

int main(){
    enum origin { EAST, WEST, SOUTH, NORTH };
    enum origin mark =  WEST;
    enum origin head = SOUTH;
    move(head);

    return 0;
}