#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"
#include "timing.h"
#include "modes.h"


#define dir "/usr/local/share/samples/guitar-acoustic/"
#define base "note_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "acoustic";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

void intro(int instrument, int octave){
  setAmplitude(minvolume/2);
  tempoIntro();
  //silentIntro();
  rest(W*12);
  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,1);
  n(mC,Q,instrument,octave,4);
  n(mC,Q,instrument,octave,1);

  //n(mC,Q,instrument,octave,0);
  //n(mC,Q,instrument,octave,1);
  //n(mC,Q,instrument,octave,4);
  //n(mC,Q,instrument,octave,1);

  rest(W);

  n(mF,Q,instrument,octave,0);
  n(mF,Q,instrument,octave,1);
  n(mF,Q,instrument,octave,4);
  n(mF,Q,instrument,octave,1);

  //n(mF,Q,instrument,octave,0);
  //n(mF,Q,instrument,octave,1);
  //n(mF,Q,instrument,octave,4);
  //n(mF,Q,instrument,octave,1);

  rest(W);

  n(mA,Q,instrument,octave,0);
  n(mA,Q,instrument,octave,1);
  n(mA,Q,instrument,octave,4);
  n(mA,Q,instrument,octave,1);
  
  //n(mA,Q,instrument,octave,0);
  //n(mA,Q,instrument,octave,1);
  //n(mA,Q,instrument,octave,4);
  //n(mA,Q,instrument,octave,1);

  rest(W);

  n(mG,Q,instrument,octave,0);
  n(mG,Q,instrument,octave,1);
  n(mG,Q,instrument,octave,4);
  n(mG,Q,instrument,octave,0);
  
  //n(mG,Q,instrument,octave,0);
  //n(mG,Q,instrument,octave,1);
  //n(mG,Q,instrument,octave,4);
  //n(mG,Q,instrument,octave,0);
  
  rest(W);
}

void verse(int instrument, int octave){
  tempoVerse();
  quiet

  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,1);
  n(mC,Q,instrument,octave,4);
  n(mC,Q,instrument,octave,1);

  n(mF,Q,instrument,octave,0);
  n(mF,Q,instrument,octave,1);
  n(mF,Q,instrument,octave,4);
  n(mF,Q,instrument,octave,1);

  n(mA,Q,instrument,octave,0);
  n(mA,Q,instrument,octave,1);
  n(mA,Q,instrument,octave,4);
  n(mA,Q,instrument,octave,1);

  n(mG,Q,instrument,octave,0);
  n(mG,Q,instrument,octave,1);
  n(mG,Q,instrument,octave,4);
  n(mG,Q,instrument,octave,0);


  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,1);
  n(mC,Q,instrument,octave,2);
  n(mC,Q,instrument,octave,4);

  n(mF,Q,instrument,octave,0);
  n(mF,Q,instrument,octave,1);
  n(mF,Q,instrument,octave,2);
  n(mF,Q,instrument,octave,4);

  n(mA,Q,instrument,octave,0);
  n(mA,Q,instrument,octave,1);
  n(mA,Q,instrument,octave,3);
  n(mA,Q,instrument,octave,4);

  n(mG,Q,instrument,octave,0);
  n(mG,Q,instrument,octave,1);
  n(mG,Q,instrument,octave,2);
  n(mG,Q,instrument,octave,4);


  n(mC,Q,instrument,octave-1,0);
  n(mC,Q,instrument,octave-1,1);
  n(mC,Q,instrument,octave-1,4);
  n(mC,Q,instrument,octave-1,1);

  n(mF,Q,instrument,octave-1,0);
  n(mF,Q,instrument,octave-1,1);
  n(mF,Q,instrument,octave-1,4);
  n(mF,Q,instrument,octave-1,1);

  n(mA,Q,instrument,octave-1,0);
  n(mA,Q,instrument,octave-1,1);
  n(mA,Q,instrument,octave-1,4);
  n(mA,Q,instrument,octave-1,1);

  n(mG,Q,instrument,octave-1,0);
  n(mG,Q,instrument,octave-1,1);
  n(mG,Q,instrument,octave-1,4);
  n(mG,Q,instrument,octave-1,1);


  n(mC,Q,instrument,octave-1,0);
  n(mC,Q,instrument,octave-1,1);
  n(mC,Q,instrument,octave-1,2);
  n(mC,Q,instrument,octave-1,4);

  n(mF,Q,instrument,octave-1,0);
  n(mF,Q,instrument,octave-1,1);
  n(mF,Q,instrument,octave-1,2);
  n(mF,Q,instrument,octave-1,4);

  n(mA,Q,instrument,octave-1,0);
  n(mA,Q,instrument,octave-1,1);
  n(mA,Q,instrument,octave-1,2);
  n(mA,Q,instrument,octave-1,4);

  n(mG,Q,instrument,octave-1,0);
  n(mG,Q,instrument,octave-1,1);
  n(mG,Q,instrument,octave-1,2);
  n(mG,Q,instrument,octave-1,4);


  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,1);
  n(mC,Q,instrument,octave,4);
  n(mC,Q,instrument,octave,1);

  n(mF,Q,instrument,octave,0);
  n(mF,Q,instrument,octave,1);
  n(mF,Q,instrument,octave,4);
  n(mF,Q,instrument,octave,1);

  n(mA,Q,instrument,octave,0);
  n(mA,Q,instrument,octave,1);
  n(mA,Q,instrument,octave,4);
  n(mA,Q,instrument,octave,1);

  n(mG,Q,instrument,octave,0);
  n(mG,Q,instrument,octave,1);
  n(mG,Q,instrument,octave,4);
  n(mG,Q,instrument,octave,1);


  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,1);
  n(mC,Q,instrument,octave,4);
  n(mC,Q,instrument,octave,2);

  n(mF,Q,instrument,octave,0);
  n(mF,Q,instrument,octave,1);
  n(mF,Q,instrument,octave,4);
  n(mF,Q,instrument,octave,2);

  n(mA,Q,instrument,octave,0);
  n(mA,Q,instrument,octave,1);
  n(mA,Q,instrument,octave,4);
  n(mA,Q,instrument,octave,3);

  n(mG,Q,instrument,octave,0);
  n(mG,Q,instrument,octave,1);
  n(mG,Q,instrument,octave,4);
  n(mG,Q,instrument,octave,0);

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

    openOutput("acoustic.rra",0,0);

#include "song.c"

    last = 1;

    closeOutput();

    return 0;
    }
