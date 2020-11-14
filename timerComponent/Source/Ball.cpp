/*
  ==============================================================================

    Ball.cpp
    Created: 12 Jul 2020 4:00:24pm
    Author:  SEM

  ==============================================================================
*/

#include <JuceHeader.h>
#include "Ball.h"

//==============================================================================
Ball::Ball()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

Ball::~Ball()
{
}

void Ball::paint (juce::Graphics& g)
{
    juce::Rectangle<float> area{posX, posY, size, size};
    g.fillAll(juce::Colours::black);
    g.setColour(juce::Colours::lightgoldenrodyellow);
    g.drawEllipse(area, 20);
}

void Ball::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
