/*
  ==============================================================================

    Ball.h
    Created: 12 Jul 2020 4:00:24pm
    Author:  SEM

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class Ball  : public juce::Component
{
public:
    Ball();
    ~Ball() override;

    void paint (juce::Graphics&) override;
    void resized() override;

    float posX {10};
    float posY {10};
    float speedX {1};
    float speedY {3};
    float size {20};
private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Ball)
};
