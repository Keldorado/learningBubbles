#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(8);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    Bubble tempBubble;
    tempBubble.setup(200); // How many bubbles are produced at one time
    bubbles.push_back(tempBubble); //make new buuble then push it into the vector
    for (int i = 1; i<bubbles.size(); i++){ //for loop
        bubbles[i].update();
        

    }
    ofSetCircleResolution(3); //How many sides the "circle" has
    Bubble tempBubble2;
    tempBubble.setup(3); //How many bubbles are produced at one time
    bubbles2.push_back(tempBubble); //make new buuble then push it into the vector
    for (int i = 1; i<bubbles2.size(); i++){ //for loop
        bubbles2[i].update();
     

    }
     
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i<bubbles.size(); i++) //draws the first set of bubbles
        bubbles[i].draw();
    
    for (int i = 0; i<bubbles2.size(); i++) //draws the second set of bubbles
        bubbles2[i].draw();

}
