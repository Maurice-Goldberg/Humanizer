/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class HumanizerAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                       public juce::Slider::Listener
{
public:
    HumanizerAudioProcessorEditor (HumanizerAudioProcessor&);
    ~HumanizerAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    
    void sliderValueChanged (juce::Slider* slider) override;

private:
    juce::Slider mGainSlider;

    HumanizerAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HumanizerAudioProcessorEditor)
};
