#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"
#include "timing.h"
#include "modes.h"

#define dir "/usr/local/share/samples/guitar-acoustic/"
#define base "melo_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "guitar";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

int end(){
  last = 1;
  closeOutput();
  return 0;
}

void intro(int instrument, int octave){
  amp
  tempoIntro();
  silentIntro();
  //rest(W*12);
  //c(mC,W,instrument,octave);
  //rest(W);
  //c(mF,W,instrument,octave);
  //rest(W);
  //c(mA,W,instrument,octave);
  //rest(W);
  //c(mG,W,instrument,octave);
  //rest(W);
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
  amp
  c(mC,W,instrument,octave);
  rest(W);

  quiet
    rest(W);
  //play(W,instrument,octave,D); //1h
  //play(W,instrument,octave-1,B);
    rest(W);
  amp
  cM(mC,W,instrument,octave);
  rest(W);

  quiet
    rest(W);
    rest(W);
  //play(W,instrument,octave,D); //5
  //play(W,instrument,octave,E); //6
  amp
  c(mA,W,instrument,octave-1); //7
  rest(W); //7h

  quiet
    rest(W);
  //play(W,instrument,octave-1,B); //8h
    rest(W);
  //play(W,instrument,octave,C); //9h
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

    
    openOutput("guitar.rra",0,0);

#include "song.c"

    last = 1;

    closeOutput();

    return 0;
    }
