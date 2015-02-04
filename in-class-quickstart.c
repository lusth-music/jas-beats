#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/"
#define base "mandolin/sample_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "quickstart";
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

    openOutput("quickstart.rra",0,0);

    //see chord progression from wiki "50s_progression"
    int i;
    for(i=0; i<2; ++i) { 
      c(1,W,instrument,octave);
      c(6,W,instrument,octave);
      ci2(4,W,instrument,octave);
      ci2(5,W,instrument,octave);
    }
    cpower2(1,W,instrument,octave);

    verse(instrument,octave);
    last = 1;
    verse(instrument,octave);

    closeOutput();

    return 0;
    }
