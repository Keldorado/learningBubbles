#pragma once

#include "ofMain.h"
#include "Bubble.h"
#define number 60

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    vector <Bubble> bubbles; // creates a vector for the first set of bubbles
    
    vector <Bubble> bubbles2; // creates a vector for the second set of bubbles
		
};
