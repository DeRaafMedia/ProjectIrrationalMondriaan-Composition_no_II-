//
//  rectangels.h
//  ProjectIrrationalMondriaan
//
//  Created by Remco Platjes on 16-11-14.
//
//

#ifndef __ProjectIrrationalMondriaan__rectangels__
#define __ProjectIrrationalMondriaan__rectangels__

#include <stdio.h>

class rectangles{
    public:
        //void setup(string squareId);
        //void update(string squareId);
        void draw(string squareId,
            int initXAxis,
            int initYAxis,
            int initWidth,
            int initHeight,
            int initRed,
            int initGeen,
            int initBlue,
            int initDiameter,
            bool showSquaresId,
            bool oscEnabled);
    
            ofTrueTypeFont font;
    
    private:
};

#endif /* defined(__ProjectIrrationalMondriaan__rectangels__) */
