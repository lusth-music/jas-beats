#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"
#include "timing.h"


#define dir "/usr/local/share/samples/guitar-acoustic/"
#define base "note_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "acoustic";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

void intro(int instrument, int octave){
    //silentIntro();
  setTempo(300);
  b(1,W*2,instrument,octave,   "x--",SX);
  b(1,W,instrument,octave,   "-x-",  "--x",SX);
  b(5,W,instrument,octave-1,"---x", "-x-",SX);
  b(4,W,instrument,octave-1,"---x", "-x-",SX);
  b(4,W*2,instrument,octave-1,"--x",SX);
  b(6,W,instrument,octave-1, "x--", "-x-",SX);
  b(6,W,instrument,octave-1, "x--", "--x",SX);
  b(5,W,instrument,octave-1, "x--", "-x-",SX);
  b(5,W*2,instrument,octave-1, "--x", "---",SX);
}

void verse(int instrument, int octave){
    silentVerse();
}

void chorus(int instrument, int octave){
    //silentChorus();
    setTempo(350);
    b(1,W,instrument,octave,   "x--",  "x--",  "x--", "d--",SX);
    b(1,W,instrument,octave,   "x--",  "x--",  "x--", "d--",SX);
    b(5,W,instrument,octave-1,"---x", "---x", "--x-", "-x-",SX);
    b(4,W,instrument,octave-1,"---x", "---x", "--x-", "-x-",SX);
    b(6,W,instrument,octave-1, "x--",  "-x-", "---x", "-x-",SX);
    b(6,W,instrument,octave-1, "x--",  "-x-",  "---", "--x",SX);
    b(5,W,instrument,octave-1, "x--",  "x--",  "-x-", "-x-",SX);
    b(5,W,instrument,octave-1, "--x",  "-x-",  "x--", "---",SX);

    b(1,W,instrument,octave,   "x--",  "x--",  "x--", "d--",SX);
    b(1,W,instrument,octave,   "x--",  "x--",  "x--", "d--",SX);
    b(5,W,instrument,octave-1,"---x", "--x-", "-x--", "---",SX);
    b(4,W,instrument,octave-1,"---x", "--x-", "-x--", "---",SX);
    b(6,W,instrument,octave-1, "--x",  "-x-", "-x--", "-x-",SX);
    b(6,W,instrument,octave-1, "--x",  "-x-", "-x--", "-x-",SX);
    b(5,W,instrument,octave-1, "x--",  "-x-",  "--x", "---x",SX);
    b(5,W,instrument,octave-1, "d--",  "-d-",  "--d", "---d",SX);
}

void bridge(int instrument, int octave){
    silentBridge();
}

void outro(int instrument, int octave){
    //silentOutro();
  setTempo(325);
  b(1,W,instrument,octave,   "x--", "--x", "-x-",SX); //1
  b(1,W,instrument,octave, "--x", "---",SX); //5
  b(4,W,instrument,octave-1, "x--", "-x-", "-x-",SX); //5
  b(4,W,instrument,octave-1, "x--", "---",SX); //6
  b(6,W,instrument,octave-1, "x--", "-x-", "-x-", SX); //6
  b(6,W,instrument,octave-1,"--x", "---",SX); //4
  b(5,W,instrument,octave-1,"--x", "-x-","x--",SX); //4
  b(5,W,instrument,octave-1,"---x", "-x-",SX); //5
  cpower2(1,W,instrument,octave);
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

    intro(instrument, octave );
    verse(instrument, octave );
    chorus(instrument, octave );
    verse(instrument, octave );
    chorus(instrument, octave );
    bridge(instrument, octave );
    //chorus(instrument, octave );
    outro(instrument, octave );

    last = 1;

    closeOutput();

    return 0;
    }
