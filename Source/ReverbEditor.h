/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_DB2227C1418B1EA__
#define __JUCE_HEADER_DB2227C1418B1EA__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"

class ReverbProcessor;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ReverbEditor  : public AudioProcessorEditor,
                      public SliderListener
{
public:
    //==============================================================================
    ReverbEditor (ReverbProcessor& processor);
    ~ReverbEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void parameterChange (AudioProcessorParameter* param, float newValue);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void sliderValueChanged (Slider* sliderThatWasMoved);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> roomSize;
    ScopedPointer<Label> roomSizeLabel;
    ScopedPointer<Slider> damping;
    ScopedPointer<Label> dampingLabel;
    ScopedPointer<Slider> wet;
    ScopedPointer<Label> wetLabel;
    ScopedPointer<Slider> dry;
    ScopedPointer<Label> dryLabel;
    ScopedPointer<Slider> width;
    ScopedPointer<Label> widthLabel;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ReverbEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_DB2227C1418B1EA__
