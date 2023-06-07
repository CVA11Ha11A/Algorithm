#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) 
 {

    int answer = 0;
    int AcuteAngle = 1; //예각
    int RightAngle = 2;  //직각
    int ObtuseAngle = 3; //둔각
    int FlatAngle = 4; //평각
    int Reslut = 0;
    
    if(0 < angle && angle < 90)
    {
        answer = AcuteAngle;
    }
    else if(90 == angle)
    {
        answer = RightAngle;
    }
    else if(90 < angle && angle < 180)
    {
        answer = ObtuseAngle;
    }
    else
    {
        answer = FlatAngle;
    }
     return answer;
}
     