#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"
#include "modes.h"
#include "timing.h"



/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "sustain";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

void intro(int instrument, int octave){
  /*
   * C
   * D
   * E
   * F
   * G
   * A
   * B
   * */
  tempoIntro();
  //silentIntro();
  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,0);
  n(mC,Q,instrument,octave,0);

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
  silentOutro();
}

int
main()
    {
    int instrument;
    int pluck, drawn;
    int octave = 4;
    int spot;

#define inst "/usr/local/share/samples/bass-acoustic/"

    songInit();
    pluck = readScale("/usr/local/share/samples/bass-acoustic/","adrian-pluck_");
    drawn = readScale("/usr/local/share/samples/cello/","synth_");

    setTime(4,4);
    setStride(0.05); //delay between notes played in a chord
    setSustain(0.99995); //logarithmic scale
    setAmplitude(0.3);

    openOutput("sustain.rra",0,0);

    spot = getLocation();
    //instrument = pluck;
//#include "song.c"
    setLocation(spot);
    instrument = drawn;
#include "song.c"

    last = 1;

    closeOutput();

    return 0;
    }
