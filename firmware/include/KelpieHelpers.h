// HELPER FUNCTIONS USED ACROSS VARIOUS CLASSES AND IN MAIN CODE

#ifndef Kelpie_Helpers_h
#define Kelpie_Helpers_h

#include <Arduino.h>
#include <keyMappings.h>
#include <Audio.h>
#include <voices.h>
#include <HardwareInputs.h>
#include <globalSynthState.h>
#include <contants.h>

extern const byte numPolyVoices;
extern polyVoice polyVoices[];
extern polyVoice monoVoices[];
extern synthState globalState;
extern boolean prevButtonsState[];
extern AudioAmplifier MASTER_GAIN;
extern AudioSynthWaveformSine LFO;
extern AudioMixer4 LFO_MIXER_FILTER;
extern AudioMixer4 LFO_MIXER_AMP;
extern const byte MONOBUFFERSIZE;
extern byte monoBuffer[];

enum playModes {
  PLAY_NOTE,
  UPDATE_NOTE,
  STOP_NOTE
};

enum buttonNames {
  OSC_1_BUTTON,
  OSC_2_BUTTON,
  POLY_MONO_BUTTON,
  SHIFT_BUTTON
};

void activateVoice(byte index, byte note, float frequency, float gain);
void decactivateVoice(byte index, boolean stopOscillator);
void playNoteMono(byte playMode, byte note, float noteGain);
void bufferShift(byte indexToRemove, byte currentIndexPlaying);
void keyBuffMono(byte note, float noteGain, boolean isNoteOn);
void keyBuffPoly(byte note, float noteGain, boolean playNote);
void handleButtonPress(boolean *buttonState);
void handleKnobChange(pot knob);
float calculateOscConstant(float osc1Vol, float osc2Vol, float noiseVol);
void setWaveformLevels(float osc1Vol, float osc2Vol, float noiseVol, float oscConstant);
float calculateDetuneValue(int knobReading);

#endif