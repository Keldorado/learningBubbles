//
//  Bubble.h
//  learningBubbles
//
//  Created by Austin Kelley on 4/15/15.
//
//

#ifndef __learningBubbles__Bubble__
#define __learningBubbles__Bubble__

#include <ofMain.h>

class Bubble {

public:
    void setup(int _sides);
    void update();
    void draw();
    
    ofVec2f pos; //variable to hold position
    ofVec2f vel; //variable to hold velocity
    float rad; //variable to hold radius
    ofColor myColor; //variable to hold color
    int sides;
    float location;
    
    //These variables are all specific within the class
    
    Bubble();
    
    float rot;

    
    
};


#endif /* defined(__learningBubbles__Bubble__) */
