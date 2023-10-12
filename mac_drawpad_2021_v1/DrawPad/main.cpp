#include "DrawPad.hpp"
#include <math.h>

void DrawMain()//
{
    Clear(kColorBlack);
    
    FillRect(-300, -200, 600, 400, kColorRed);
    FillTriangle(-300, -200, -300+200*2, 200, -300, 200, kColorYellow);
    FillTriangle(-300, -200, -300+200*1, 200, -300, 200, kColorBlue);
    FillTriangle(-300, -200, 300, -200+133*2, 300, -200, kColorWhite);
    FillTriangle(-300, -200, 300, -200+133*1, 300, -200, kColorGreen);
}

