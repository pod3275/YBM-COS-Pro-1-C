#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Point2D {
    int x;
    int y;
}Point2D;

typedef struct Rectangle{
    Point2D* LeftDown;
    Point2D* RightUp;
}Rectangle;

int solution(int x1, int y1, int x2, int y2, int plus_x, int plus_y){
    Point2D leftdown = {@@@};
    Point2D rightup = {@@@};
    Rectangle rect = {@@@};
    
    int first_width = (rect@@@ - rect@@@) * (rect@@@ - rect@@@);
    
    rightup.x += plus_x;
    rightup.y += plus_y;
    
    int second_width = (rect@@@ - rect@@@) * (rect@@@ - rect@@@);
    
    return second_width - first_width;
}