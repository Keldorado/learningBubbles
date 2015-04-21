#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(8);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    Bubble tempBubble;
    tempBubble.setup(8);
    bubbles.push_back(tempBubble); //make new buuble then push it into the vector
    for (int i = 1; i<bubbles.size(); i++){
        bubbles[i].update();
        

    }
    ofSetCircleResolution(3);
    Bubble tempBubble2;
    tempBubble.setup(3);
    bubbles2.push_back(tempBubble); //make new buuble then push it into the vector
    for (int i = 1; i<bubbles2.size(); i++){
        bubbles2[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i<bubbles.size(); i++)
        bubbles[i].draw();
    
    for (int i = 0; i<bubbles2.size(); i++)
        bubbles2[i].draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    


}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
