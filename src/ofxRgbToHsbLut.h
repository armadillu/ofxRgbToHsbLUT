//
//  ofxRgbToHsbLut.h
//  BaseApp
//
//  Created by Oriol Ferrer Mesià on 20/1/16.
//
//

#ifndef __BaseApp__ofxRgbToHsbLut__
#define __BaseApp__ofxRgbToHsbLut__

#include "ofMain.h"

class ofxRgbToHsbLut{

public:
	
	ofxRgbToHsbLut();

	static void createLUT();
	const ofColor& rgbToHsb(const ofColor & c) const;

protected:

	static bool inited;
	static ofColor lut[256][256][256];

};

#endif /* defined(__BaseApp__ofxRgbToHsbLut__) */
