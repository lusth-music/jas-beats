#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"
#include "timing.h"
#include "modes.h"

#define dir "/usr/local/share/samples/cello/"
#define base "synth_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "cello";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

void intro(int instrument, int octave){
  tempoIntro();
  int beats;
  float maxBeats = 16 * 4;
  float diffvolume = maxvolume - minvolume;
  quiet
  for(beats = 0; beats < maxBeats; ++beats){
    n(mC,Q,instrument,octave,0); 
    setAmplitude(minvolume + (beats/maxBeats) * diffvolume);
  };

  for(beats = 0; beats < 4*4; ++beats){
    n(mC,Q,instrument,octave,0); 
  }
}

void verse(int instrument, int octave){
  tempoVerse();
  silentVerse();
}

void chorus(int instrument, int octave){
  tempoChorus();
  silentChorus();
}

void bridge(int instrument, int octave){
  tempoBridge();
  silentBridge();
}

void outro(int instrument, int octave){
  tempoOutro();
  //silentOutro();
  tempoIntro();
  int beats;
  float maxBeats = 8 * 4;
  float diffvolume = maxvolume - minvolume;
  louder
  for(beats = maxBeats; beats >= 0; --beats){
    n(mC,Q,instrument,octave,0); 
    setAmplitude((beats/maxBeats) * diffvolume);
  };
}

int
main()
    {
    int instrument;
    int octave = 4;

    songInit();

    instrument = readScale(dir,base);

    setTempo(350);
    setTime(4,4);
    setStride(0.05); //delay between notes played in a chord
    setSustain(0.99995); //logarithmic scale

    
    openOutput("cello.rra",0,0);
    amp

#include "song.c"

    last = 1;

    closeOutput();

    return 0;
    }
