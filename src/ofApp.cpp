#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetVerticalSync(true);

    ofEnableAlphaBlending();
    ofBackground(0,0,0);
    
    for(int i = 0; i<2; i++){
        Rectangle myRect;
        myRect.headSize = ofRandom(70);
        myRect.speed = ofRandom(0.03);
        myRect.pos = ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        myRects.push_back(myRect);
    }
    
}


//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i<myRects.size(); i++){
        myRects[i].draw(mouseX, mouseY);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    myRects.clear();
    for(int i = 0; i<2; i++){
        Rectangle myRect;
        myRect.headSize = ofRandom(70);
        myRect.speed = ofRandom(0.03);
        myRect.pos = ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        myRects.push_back(myRect);
    }
    
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
