#include "Rectangle.h"
#include "ofMain.h"


//------------------------------------------------------------------
Rectangle::Rectangle(){
    pos = ofPoint(0, 0);
    headSize = 100;
    speed = 0.03;
    
}


//------------------------------------------------------------------
void Rectangle::draw(float mouseX, float mouseY) {

    float noiseX = ofNoise(ofGetElapsedTimef()) * 3;
    float noiseY = ofNoise(ofGetElapsedTimef() + 100) * 3;

    pos.x = speed * mouseX + (1 - speed) * (pos.x + noiseX);
    pos.y = speed * mouseY + (1 - speed) * (pos.y + noiseY);
    
    ofPoint temp;
    temp = pos;
    points.push_back(temp);
    if (points.size() > 100){
        points.erase(points.begin());
    }
    
    ofSetColor(255,255,255);
    ofNoFill();
    ofBeginShape();
    float dX = 0;
    float dY = 0;
    for (int i = 0; i < points.size(); i++){
        
        ofVertex(points[i].x, points[i].y);
        
        if(i > 0){
            dX = points[i].x - points[i-1].x;
            dY = points[i].y - points[i-1].y;
            ofPushMatrix();
            ofTranslate(points[i].x, points[i].y);
            ofRotateZ(atan2(dY, dX)*180/PI);
            ofSetColor(255, 255, 255, ofMap(i, 0, points.size(), 0, 255));
            if(i == points.size()-1){
                ofFill();
                ofSetColor(255, 255, 255, ofMap(i, 0, points.size(), 0, 200));
            }
            
            float rectSize = ofMap(i, 0, points.size(), 0, headSize);
            ofSetRectMode(OF_RECTMODE_CENTER);
            ofRect(0, 0, rectSize, rectSize);
            ofNoFill();
            ofPopMatrix();
        }
    }
    ofEndShape();
}

