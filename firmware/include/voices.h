// All "Voice" Information is stored here

struct voice
{
  int note;
  float noteFreq;
  int velocity;
  bool noteOnOff;
  AudioSynthWaveform &waveformA;
  AudioSynthWaveform &waveformB;
  AudioSynthNoisePink &noise;
  AudioMixer4 &waveformMixer;
  AudioEffectEnvelope &ampEnv;
  AudioEffectEnvelope &filterEnv;
  AudioFilterStateVariable &filter;
};

voice VOICE_1 = {0, 0.0, 0, false, V1_A, V1_B, V1_N, V1_MIX, V1_ENV, V1_FILT_ENV, V1_FILT};
voice VOICE_2 = {0, 0.0, 0, false, V2_A, V2_B, V2_N, V2_MIX, V2_ENV, V2_FILT_ENV, V2_FILT};
voice VOICE_3 = {0, 0.0, 0, false, V3_A, V3_B, V3_N, V3_MIX, V3_ENV, V3_FILT_ENV, V3_FILT};
voice VOICE_4 = {0, 0.0, 0, false, V4_A, V4_B, V4_N, V4_MIX, V4_ENV, V4_FILT_ENV, V4_FILT};
voice VOICE_5 = {0, 0.0, 0, false, V5_A, V5_B, V5_N, V5_MIX, V5_ENV, V5_FILT_ENV, V5_FILT};
voice VOICE_6 = {0, 0.0, 0, false, V6_A, V6_B, V6_N, V6_MIX, V6_ENV, V6_FILT_ENV, V6_FILT};
voice VOICE_7 = {0, 0.0, 0, false, V7_A, V7_B, V7_N, V7_MIX, V7_ENV, V7_FILT_ENV, V7_FILT};
voice VOICE_8 = {0, 0.0, 0, false, V8_A, V8_B, V8_N, V8_MIX, V8_ENV, V8_FILT_ENV, V8_FILT};
voice VOICE_9 = {0, 0.0, 0, false, V9_A, V9_B, V9_N, V9_MIX, V9_ENV, V9_FILT_ENV, V9_FILT};
voice VOICE_10 = {0, 0.0, 0, false, V10_A, V10_B, V10_N, V10_MIX, V10_ENV, V10_FILT_ENV, V10_FILT};
voice VOICE_11 = {0, 0.0, 0, false, V11_A, V11_B, V11_N, V11_MIX, V11_ENV, V11_FILT_ENV, V11_FILT};
voice VOICE_12 = {0, 0.0, 0, false, V12_A, V12_B, V12_N, V12_MIX, V12_ENV, V12_FILT_ENV, V12_FILT};

const int polyBuffSize = 12;
voice polyBuff[polyBuffSize] = {
    VOICE_1,
    VOICE_2,
    VOICE_3,
    VOICE_4,
    VOICE_5,
    VOICE_6,
    VOICE_7,
    VOICE_8,
    VOICE_9,
    VOICE_10,
    VOICE_11,
    VOICE_12};