/*
 *  ShowcaseScene.h
 *  Jimmy Choo Shop Window
 *
 *  Created by Imanol Gomez on 28/07/17.
 *
 */

#pragma once


#include "ofxScene.h"

class ShowcaseScene : public ofxScene {

public:

    //! Constructor
    ShowcaseScene();
    
    //! Set up the scene
    void setup();

    //! Update the scene
    void update();

    //! Draw the scene
    void draw();
    
    //! Called when fading in
    void willFadeIn();

    //! Called when to start drawing
    void willDraw();

    //! Called fading out
    void willFadeOut();

    //! Called when exit
    void willExit();
    
private:
    
    
    void setupDmx();
    
    void updateColors();
    
private:
    
    bool m_updateColors;
};

