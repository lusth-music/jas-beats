#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/ocarina/"
#define base "note_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "ocarina";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

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

    openOutput("ocarina.rra",0,0);

    int i;
    for(i=0; i<2; i++){
      play(W,instrument,octave+i,C);
      play(W,instrument,octave+i,D);
      play(W,instrument,octave+i,E);
      play(W,instrument,octave+i,F);
      play(W,instrument,octave+i,G);
      play(W,instrument,octave+i,A);
      play(W,instrument,octave+i,B);
    }
    play(W,instrument,octave+2,C);

    rest(W*2);

    play(Q,instrument,octave,D);
    play(Q,instrument,octave,F);
    play(W,instrument,octave+1,D);
    play(Q,instrument,octave,D);
    play(Q,instrument,octave,F);
    play(W,instrument,octave+1,D);
    play(H,instrument,octave+1,E);
    play(Q,instrument,octave+1,F);
    play(Q,instrument,octave+1,E);
    play(Q,instrument,octave+1,F);
    play(Q,instrument,octave+1,E);
    play(Q,instrument,octave+1,C);
    play(W,instrument,octave,A);

    rest(Q);

    //chord(H,instrument,octave,D,+4,0); //+4,+7,0);
    //1C, 2D, 3E, 4F, 5G, 6A, 7B
    c(2,Q,instrument,octave-1);
    c(4,Q,instrument,octave-1);
    c(2,W,instrument,octave+0);
    c(2,Q,instrument,octave-1);
    c(4,Q,instrument,octave-1);
    c(2,W,instrument,octave+0);
    c(3,H,instrument,octave+0);
    c(4,Q,instrument,octave+0);
    c(3,Q,instrument,octave+0);
    c(4,Q,instrument,octave+0);
    c(3,Q,instrument,octave+0);
    c(1,Q,instrument,octave+0);
    c(6,W,instrument,octave-1);


    last = 1;

    closeOutput();

    return 0;
    }
