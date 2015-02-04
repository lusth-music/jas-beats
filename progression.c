#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

#define dir "/usr/local/share/samples/piano/"
#define base "bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "progression";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

int
main()
    {
    int instrument;
    int octave = 4;

    songInit();

    instrument = readScale(dir,base);

    setTempo(250);
    setTime(4,4);
    setStride(0.05); //delay between notes played in a chord
    setSustain(0.99995); //logarithmic scale
    setAmplitude(0.3);

    
    openOutput("progression.rra",0,0);

    //see chord progression from wiki "50s_progression"
    // 1 4 6 5 progression (it exists on google, so I suppose this is a valid rearrangement)
    int i = 0; //set to 2 if you want to bypass this
    for(i=0; i<2; ++i) { 

        c(1,W,instrument,octave);
        c(4,W,instrument,octave-1);
      ci2(6,W,instrument,octave-1);
      ci2(5,W,instrument,octave-1);

        c(1,W,instrument,octave);
        c(4,W,instrument,octave-1);
        c(6,W,instrument,octave-1);
        c(5,W,instrument,octave-1);

    }

    cpower2(1,W,instrument,octave);
    

    //arpeggio experimentation
    
    for(i=0; i<2; ++i) { 
      b(1,W,instrument,octave,  "--x",  "-x-",  "x--",SX);
      b(4,W,instrument,octave-1,"---x", "--x-", "-x--",SX); //kinda 'dischordant' -  see below
      b(6,W,instrument,octave-1,"x--", "-x-", "--x",SX);
      ci2(5,W,instrument,octave-1);
    }
    cpower2(1,W,instrument,octave);

    last = 1;

    closeOutput();

    return 0;
    }
