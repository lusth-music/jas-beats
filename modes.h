#define mC 1
#define mD 2
#define mE 3
#define mF 4
#define mG 5
#define mA 6
#define mB 7
#define maxvolume 0.3
#define minvolume 0.1
#define louder setAmplitude(maxvolume);
#define amp setAmplitude(minvolume + (maxvolume-minvolume)/2);
#define quiet setAmplitude(minvolume);
#define rampup setAmplitude(getAmplitude() * 1.1);
#define rampdn setAmplitude(getAmplitude() * 0.9);
#define ramp(rate) setAmplitude(getAmplitude() * rate);
