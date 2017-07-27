/*
 *  TextManager.h
 *  Jimmy Choo Shop Window
 *
 *  Created by Imanol Gomez on 27/07/17.
 *
 */


#pragma once

#include "Manager.h"
#include "TextVisual.h"

//========================== class TextManager ==============================
//============================================================================
/** \class TextManager TextManager.h
 *	\brief Class managing the text
 *	\details it renders the current subtitles according to a width, height and position
 */


class TextManager: public Manager
{
    static const string UNICODE_FONT_PATH; //The Apps unicode font path
    
public:
    
    //! Constructor
    TextManager();
    
    //! Destructor
    ~TextManager();
    
    //! Setup the Text Manager
    void setup();
    
    //! Update the Text Manager
    void update();
    
    //! Draw the Text Manager
    void draw();
    
    void drawPreviousVisuals();
    
    void drawCurrentVisuals();
    
    void  onChangeSize(int& value);
    
    void  onChangeWidth(float& value);
    
    void  onChangeLineHeight(float& value);
    
    void  onChangePos(ofVec2f& value);
    
    void  onChangeShowBox (bool value);
    
    void onChangeTransitionTime(float& value);
    
    void setColor(ofColor& color);
    
    void setCurrentText(const string& text);
    
    
private:
        
    void setupFbos();
    
    void setupVisuals();
    
    void addCurrentCrossFadeAnimations();
    
    void addPreviewCrossFadeAnimations();
    
    
private:
    
    typedef  map<string, shared_ptr<TextVisual>> TextVisualMap;
    
    TextVisualMap   m_textVisuals;
    
    ofFbo       m_currentFbo;
    ofFbo       m_previusFbo;
    float       m_transitionTime;

};



