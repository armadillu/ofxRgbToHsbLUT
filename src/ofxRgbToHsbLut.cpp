//
//  ofxRgbToHsbLut.cpp
//  BaseApp
//
//  Created by Oriol Ferrer Mesià on 20/1/16.
//
//

#include "ofxRgbToHsbLut.h"


bool ofxRgbToHsbLut::inited = false;
ofColor ofxRgbToHsbLut::lut[256][256][256] = {ofColor::white};

void ofxRgbToHsbLut::createLUT(){
	if(!inited){
		ofColor c;
		float h,s,b;
		for(int i = 0; i < 256; i++){
			c.r = i;
			for(int j = 0; j < 256; j++){
				c.g = j;
				for(int k = 0; k < 256; k++){
					c.b = k;
					c.getHsb(h,s,b);
					lut[i][j][k] = ofColor(h,s,b,255);
				}
			}
		}
		ofLogNotice("ofxRgbToHsbLut") << "created LUT!";
		inited = true;
	}
}


const ofColor& ofxRgbToHsbLut::rgbToHsb(const ofColor & c) {
	return lut[c.r][c.g][c.b];
}
