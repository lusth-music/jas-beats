#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"
#include "timing.h"
#include "modes.h"

#define dir "/usr/local/share/samples/piano/piano-bright/"
#define base "bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "piano";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

void intro(int instrument, int octave){
  tempoIntro();
  silentIntro();
}

void verse(int instrument, int octave){
  tempoVerse();
  silentVerse();
}

void chorus(int instrument, int octave){
  tempoChorus();
  play(W,instrument,octave,G);
  rest(W);
  play(W,instrument,octave,Bb);
  play(W,instrument,octave,Gs);
  play(W,instrument,octave,G);
  rest(W);
  play(H,instrument,octave,Bb);
  play(H,instrument,octave+1,C);
  play(H,instrument,octave,G);
  play(H,instrument,octave,F);

  play(W,instrument,octave,G);
  rest(W);
  play(W,instrument,octave,Bb);
  play(W,instrument,octave+1,C);
  play(W,instrument,octave,G);
  rest(W);
  play(H,instrument,octave,F);
  play(H,instrument,octave,G);
  play(H,instrument,octave,Bb);
  play(H,instrument,octave,Gs);
}

void bridge(int instrument, int octave){
  tempoBridge();
  amp
  c(mC,W,instrument,octave);
  rest(W);

  quiet

  n(mD,W,instrument,octave, 0);
  n(mB,W,instrument,octave-1, 0);

  amp
  cM(mC,W,instrument,octave);
  rest(W);

  quiet

  n(mD,W,instrument,octave, 0);
  n(mE,W,instrument,octave, 0);
  amp
  c(mA,W,instrument,octave-1); //7
  rest(W); //7h

  quiet
  n(mB,W,instrument,octave-1, 0);
  n(mC,W,instrument,octave, 0);
  amp
  c(mD,W,instrument,octave); //10h
  rest(W); //11
  //play(W,instrument,octave-1,A); //19
  louder
  c(mE,W,instrument,octave);
  rest(W);
}

void outro(int instrument, int octave){
  tempoOutro();
  //silentOutro();
  c(mE,W,instrument,octave);
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

    
    openOutput("piano.rra",0,0);
    amp

#include "song.c"

    last = 1;

    closeOutput();

    return 0;
    }