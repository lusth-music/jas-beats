#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/"
#define base "mandolin/sample_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "drums";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

int
main()
    {
    int instrument;
    int spot;

    songInit();

    instrument = readScale(dir,base);

    setTempo(250);
    setTime(4,4);
    setStride(0.05); //delay between notes played in a chord
    setSustain(0.99995); //logarithmic scale
    setAmplitude(0.4);

    openOutput("drums.rra",0,0);

    spot = getLocation();
    drumkitHHOpen(1,1,"----------X-x-x-",SX); setLocation(spot);
    drumkitSnare (1,1,"-----------X-g-g",SX);

    spot = getLocation();
    drumkitHHOpen(2,1,"X-x-x-x-x-X-x-x-",SX); setLocation(spot);
    drumkitSnare (2,1,"X-g-g-g-g-X-g-g-",SX);

    spot = getLocation();
    drumkitHHOpen(1,1,"X-x-x-x-X-x-x-X-",SX); setLocation(spot);
    drumkitSnare (1,1,"X-g-g-g-X-g-g-X-",SX);

    spot = getLocation();
    drumkitHHOpen(1,1,"x-X-x-X-X-X-X-X-",SX); setLocation(spot);
    drumkitSnare (1,1, "g-X-g-X-X-X-X-X-",SX);

    spot = getLocation();
    drumkitCrash (1,1,"x---------------",SX); setLocation(spot);
    drumkitHHOpen(1,1,"x-X-x-X-X-X-X-X-",SX); setLocation(spot);
    drumkitSnare (1,1,"g-X-g-X-X-X-X-X-",SX); setLocation(spot);
    drumkitKick  (1,2,"x-------x-x-----",SX);

    last = 1;

    closeOutput();

    return 0;
    }
