#pragma once

#include "ofMain.h"

class Rectangle {
    
    public:
        
        Rectangle();

        void draw(float mouseX, float mouseY);

        vector < ofPoint > points;
        
        float speed;
        float headSize;
        ofPoint pos;

};
