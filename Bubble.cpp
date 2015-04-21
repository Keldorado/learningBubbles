//
//  Bubble.cpp
//  learningBubbles
//
//  Created by Austin Kelley on 4/15/15.
//
//

#include "Bubble.h"

Bubble::Bubble(){
    
    pos = ofVec2f(ofGetMouseX()-400, ofGetMouseY()-400);
    vel = ofVec2f(2,2);
    rad = 50;
    myColor = ofColor ((255),ofRandom(255), ofRandom(255));
    rot = 400;
     
}

void Bubble::setup(int _sides){
    sides = _sides;
}

void Bubble::update(){
    pos +=vel; //Moves the ball
    //rot+=abs(vel.x);
    rot+=(4,4);
    
}

void Bubble::draw(){
    ofSetColor(myColor);
    ofSetCircleResolution(sides);
    //option 1
    /*
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(rot);
    ofCircle(0,0,rad); //I DONT KNOW WHAT THIS DOES
    ofPopMatrix();
    */
     
     
    
    //option 2
    
    ofPushMatrix();
    ofTranslate(400, 400);
    ofRotate(rot);
    ofCircle(pos,rad); //I DONT KNOW WHAT THIS DOES
    ofPopMatrix();
    
    
    
}
