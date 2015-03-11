#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"
#include "timing.h"


#define dir "/usr/local/share/samples/piano/"
#define base "bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "piano";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

void intro(int instrument, int octave){
    silentIntro();
}

void verse(int instrument, int octave){
    silentVerse();
}

void chorus(int instrument, int octave){
    silentChorus();
}

void bridge(int instrument, int octave){
    silentBridge();
}

void outro(int instrument, int octave){
    silentOutro();
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
    setAmplitude(0.3);

    
    openOutput("piano.rra",0,0);

    intro(instrument,octave);
    verse(instrument, octave);
    chorus(instrument, octave);
    verse(instrument, octave);
    chorus(instrument, octave);
    bridge(instrument, octave);
    //chorus(instrument, octave);
    outro(instrument, octave);

    last = 1;

    closeOutput();

    return 0;
    }
