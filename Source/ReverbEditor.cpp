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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "ReverbEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
#include "ReverbProcessor.h"
//[/MiscUserDefs]

//==============================================================================
ReverbEditor::ReverbEditor (ReverbProcessor& processor)
    : AudioProcessorEditor (processor)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (roomSize = new Slider ("Room Size Slider"));
    roomSize->setRange (0, 1, 0);
    roomSize->setSliderStyle (Slider::LinearHorizontal);
    roomSize->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
    roomSize->addListener (this);

    addAndMakeVisible (roomSizeLabel = new Label ("Room Size Label",
                                                  TRANS("Room Size:")));
    roomSizeLabel->setFont (Font (15.00f, Font::plain));
    roomSizeLabel->setJustificationType (Justification::centredLeft);
    roomSizeLabel->setEditable (false, false, false);
    roomSizeLabel->setColour (TextEditor::textColourId, Colours::black);
    roomSizeLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (damping = new Slider ("Damping Slider"));
    damping->setRange (0, 1, 0);
    damping->setSliderStyle (Slider::LinearHorizontal);
    damping->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
    damping->addListener (this);

    addAndMakeVisible (dampingLabel = new Label ("Damping Label",
                                                 TRANS("Damping:")));
    dampingLabel->setFont (Font (15.00f, Font::plain));
    dampingLabel->setJustificationType (Justification::centredLeft);
    dampingLabel->setEditable (false, false, false);
    dampingLabel->setColour (TextEditor::textColourId, Colours::black);
    dampingLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (wet = new Slider ("Wet Slider"));
    wet->setRange (0, 1, 0);
    wet->setSliderStyle (Slider::LinearHorizontal);
    wet->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
    wet->addListener (this);

    addAndMakeVisible (wetLabel = new Label ("Wet Label",
                                             TRANS("Wet:")));
    wetLabel->setFont (Font (15.00f, Font::plain));
    wetLabel->setJustificationType (Justification::centredLeft);
    wetLabel->setEditable (false, false, false);
    wetLabel->setColour (TextEditor::textColourId, Colours::black);
    wetLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (dry = new Slider ("Dry Slider"));
    dry->setRange (0, 1, 0);
    dry->setSliderStyle (Slider::LinearHorizontal);
    dry->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
    dry->addListener (this);

    addAndMakeVisible (dryLabel = new Label ("Dry Label",
                                             TRANS("Dry:")));
    dryLabel->setFont (Font (15.00f, Font::plain));
    dryLabel->setJustificationType (Justification::centredLeft);
    dryLabel->setEditable (false, false, false);
    dryLabel->setColour (TextEditor::textColourId, Colours::black);
    dryLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (width = new Slider ("Width Slider"));
    width->setRange (0, 1, 0);
    width->setSliderStyle (Slider::LinearHorizontal);
    width->setTextBoxStyle (Slider::TextBoxRight, false, 80, 20);
    width->addListener (this);

    addAndMakeVisible (widthLabel = new Label ("Width Label",
                                               TRANS("Width:")));
    widthLabel->setFont (Font (15.00f, Font::plain));
    widthLabel->setJustificationType (Justification::centredLeft);
    widthLabel->setEditable (false, false, false);
    widthLabel->setColour (TextEditor::textColourId, Colours::black);
    widthLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 140);


    //[Constructor] You can add your own custom stuff here..
    roomSize->setValue (processor.roomSize->getValue(), dontSendNotification);
    damping->setValue (processor.damping->getValue(), dontSendNotification);
    wet->setValue (processor.wet->getValue(), dontSendNotification);
    dry->setValue (processor.dry->getValue(), dontSendNotification);
    width->setValue (processor.width->getValue(), dontSendNotification);
    //[/Constructor]
}

ReverbEditor::~ReverbEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    roomSize = nullptr;
    roomSizeLabel = nullptr;
    damping = nullptr;
    dampingLabel = nullptr;
    wet = nullptr;
    wetLabel = nullptr;
    dry = nullptr;
    dryLabel = nullptr;
    width = nullptr;
    widthLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ReverbEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ReverbEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    roomSize->setBounds (88, 8, 288, 24);
    roomSizeLabel->setBounds (3, 8, 79, 24);
    damping->setBounds (88, 34, 288, 24);
    dampingLabel->setBounds (3, 34, 79, 24);
    wet->setBounds (88, 61, 288, 24);
    wetLabel->setBounds (3, 61, 79, 24);
    dry->setBounds (88, 87, 288, 24);
    dryLabel->setBounds (3, 87, 79, 24);
    width->setBounds (88, 112, 288, 24);
    widthLabel->setBounds (3, 112, 79, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void ReverbEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    ReverbProcessor& parent = dynamic_cast<ReverbProcessor&> (*getAudioProcessor());
    AudioProcessorParameter* param = nullptr;
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == roomSize)
    {
        //[UserSliderCode_roomSize] -- add your slider handling code here..
        param = parent.roomSize;
        //[/UserSliderCode_roomSize]
    }
    else if (sliderThatWasMoved == damping)
    {
        //[UserSliderCode_damping] -- add your slider handling code here..
        param = parent.damping;
        //[/UserSliderCode_damping]
    }
    else if (sliderThatWasMoved == wet)
    {
        //[UserSliderCode_wet] -- add your slider handling code here..
        param = parent.wet;
        //[/UserSliderCode_wet]
    }
    else if (sliderThatWasMoved == dry)
    {
        //[UserSliderCode_dry] -- add your slider handling code here..
        param = parent.dry;
        //[/UserSliderCode_dry]
    }
    else if (sliderThatWasMoved == width)
    {
        //[UserSliderCode_width] -- add your slider handling code here..
        param = parent.width;
        //[/UserSliderCode_width]
    }

    //[UsersliderValueChanged_Post]
    if (param != nullptr)
    {
        param->setValueNotifyingHost (static_cast<float> (sliderThatWasMoved->getValue()));
    }
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void ReverbEditor::parameterChange (AudioProcessorParameter* param, float newValue)
{
    ReverbProcessor& parent = dynamic_cast<ReverbProcessor&> (*getAudioProcessor());

    Slider* slider = nullptr;

    if (param == parent.roomSize)
    {
        slider = roomSize;
    }
    else if (param == parent.damping)
    {
        slider = damping;
    }
    else if (param == parent.wet)
    {
        slider = wet;
    }
    else if (param == parent.dry)
    {
        slider = dry;
    }
    else if (param == parent.width)
    {
        slider = width;
    }

    if (slider != nullptr)
    {
        slider->setValue (newValue, dontSendNotification);
    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ReverbEditor" componentName=""
                 parentClasses="public AudioProcessorEditor" constructorParams="ReverbProcessor&amp; processor"
                 variableInitialisers="AudioProcessorEditor (processor)" snapPixels="8"
                 snapActive="1" snapShown="1" overlayOpacity="0.330" fixedSize="1"
                 initialWidth="600" initialHeight="140">
  <BACKGROUND backgroundColour="ffffffff"/>
  <SLIDER name="Room Size Slider" id="f9798174871c0d14" memberName="roomSize"
          virtualName="" explicitFocusOrder="0" pos="88 8 288 24" min="0"
          max="1" int="0" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Room Size Label" id="64c02466bd8385c8" memberName="roomSizeLabel"
         virtualName="" explicitFocusOrder="0" pos="3 8 79 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Room Size:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Damping Slider" id="b355d01f57be4e64" memberName="damping"
          virtualName="" explicitFocusOrder="0" pos="88 34 288 24" min="0"
          max="1" int="0" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Damping Label" id="37a61e17c0000d1f" memberName="dampingLabel"
         virtualName="" explicitFocusOrder="0" pos="3 34 79 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Damping:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Wet Slider" id="f8f4cef641052b0f" memberName="wet" virtualName=""
          explicitFocusOrder="0" pos="88 61 288 24" min="0" max="1" int="0"
          style="LinearHorizontal" textBoxPos="TextBoxRight" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Wet Label" id="54429ce6b5831f34" memberName="wetLabel"
         virtualName="" explicitFocusOrder="0" pos="3 61 79 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Wet:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Dry Slider" id="a37b23e1ba07f91e" memberName="dry" virtualName=""
          explicitFocusOrder="0" pos="88 87 288 24" min="0" max="1" int="0"
          style="LinearHorizontal" textBoxPos="TextBoxRight" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Dry Label" id="1e210761ba037869" memberName="dryLabel"
         virtualName="" explicitFocusOrder="0" pos="3 87 79 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Dry:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Width Slider" id="622aed61508291ee" memberName="width"
          virtualName="" explicitFocusOrder="0" pos="88 112 288 24" min="0"
          max="1" int="0" style="LinearHorizontal" textBoxPos="TextBoxRight"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <LABEL name="Width Label" id="560cfb5cf7d6ed9b" memberName="widthLabel"
         virtualName="" explicitFocusOrder="0" pos="3 112 79 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Width:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
