//
//  Bubble.cpp
//  learningBubbles
//
//  Created by Austin Kelley on 4/15/15.
//
//

#include "Bubble.h"

Bubble::Bubble(){
    
    pos = ofVec2f(ofGetMouseX()-400, ofGetMouseY()-400); //position of the bubbles
    vel = ofVec2f(2,2); //veloctiy of the bubbles
    rad = 50; //raidus of the bubbles
    myColor = ofColor ((255),ofRandom(255), ofRandom(255)); //the color of the bubbles
    rot = 400; //the rotation of the bubbles
     
}

void Bubble::setup(int _sides){
    sides = _sides; //defines the number of sides
}

void Bubble::update(){
    pos +=vel; //Moves the ball
    rot+=(4,4); //creates the rotation
    
}

void Bubble::draw(){
    ofSetColor(myColor); //sets the color
    ofSetCircleResolution(sides); //sets the resolution of the bubbles
     

    
    ofPushMatrix(); // pushes the matrix
    ofTranslate(400, 400); //translates the bubbles
    ofRotate(rot); //creates rotation
    ofCircle(pos,rad); //gives the bubbles position and radius
    ofPopMatrix(); //pops the matrix
    
    
    
}
