#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "timing.h"
#include "modes.h"
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "drums";
char *PROGRAM_VERSION = "0.01";

static int last = 0;

void intro(int instrument,int octave){
  tempoIntro();
  rest(W*2);
  int spot;
  int beats;
  float maxBeats = 14;
  float diffvolume = maxvolume - minvolume;
  
  setAmplitude(0);
  for(beats = 0; beats < maxBeats/2; ++beats){

    spot = getLocation();
    drumkitHHOpen(1,1,"g-------g-------",SX); setLocation(spot);
    drumkitSnare (1,1,"----------------",SX);

    setAmplitude((beats/maxBeats) * diffvolume);
  }

  for(beats = maxBeats/2; beats < maxBeats; ++beats){

    spot = getLocation();
    drumkitHHOpen(1,1,"g-------g-------",SX); setLocation(spot);
    drumkitSnare (1,1,"----g-------g---",SX);

    setAmplitude((beats/maxBeats) * diffvolume);
  }

  for(beats = 0; beats < 4; ++beats){
    spot = getLocation();
    drumkitHHOpen(1,1,"g-------g-------",SX); setLocation(spot);
    drumkitSnare (1,1,"----g-------g---",SX);
  }
}

void verse(int instrument,int octave){
  tempoVerse();
  int spot;
  amp

  spot = getLocation(); //1
  drumkitCrash    (1,1,"x---------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"x---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g-----x-x-x-----",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g-----g-x-X-----",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);
  //8


  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g-----g-x-x-----",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g-----g-x-x-----",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  //16


  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g-----x-x-x-----",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--x-----x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--x-----x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g---------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--x-----x-----x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g-------",SX);

  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"g-----x-x-x-----",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----g-------g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"--x---x-x-x-x-x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g---g-g-",SX);
}

void chorus(int instrument,int octave){
  tempoChorus();
  int spot;
  spot = getLocation(); //1
  amp
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"x---------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);


  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g-------g-------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g-------g-------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g-------g-------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g-------g-------",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---g---g---g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---g---g---g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---g---g---g---",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

  spot = getLocation(); //1
  drumkitCrash    (1,1,"----------------",SX); setLocation(spot);
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"g---g---g-g-x-X-",SX); setLocation(spot);
  drumkitSnare    (1,1,"----------------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"----------------",SX);

}

void bridge(int instrument,int octave){
  tempoBridge();
  int spot;
  spot = getLocation(); //1
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------X-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-------g---x-x-",SX);

  spot = getLocation(); //2
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x---x-x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-x-x-----------",SX);

  spot = getLocation(); //3
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"g-------x---g-g-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-----------g-g-",SX);

  spot = getLocation(); //4
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"g-g-g---x---g-x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"g-g-g-----------",SX);

  spot = getLocation(); //5
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"g-------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-----------x-x-",SX);

  spot = getLocation(); //6
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x---g-x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"--x-x-----------",SX);

  spot = getLocation(); //7
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"g-------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-----------x-x-",SX);

  spot = getLocation(); //8
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"g-------x---g-x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"--x-x-----------",SX);

  spot = getLocation(); //9
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"g-------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-----------x-x-",SX);

  spot = getLocation(); //10
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x---g-x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-x-x-----------",SX);

  spot = getLocation(); //11
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"g-------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-----------x-x-",SX);

  spot = getLocation(); //12
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x---g-x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-x-x-----------",SX);

  spot = getLocation(); //13
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"g-------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-----------x-x-",SX);

  spot = getLocation(); //14
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------x---g-x-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"g-x-x-----------",SX);

  spot = getLocation(); //15
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"g-------x-------",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-----------x-x-",SX);

  spot = getLocation(); //16
  drumkitHHOpen   (1,1,"----------------",SX); setLocation(spot);
  drumkitHHClosed (1,1,"----------------",SX); setLocation(spot);
  drumkitSnare    (1,1,"--------X-x-g-g-",SX); setLocation(spot);
  drumkitTomHi    (1,1,"----------------",SX); setLocation(spot);
  drumkitTom      (1,1,"----------------",SX); setLocation(spot);
  drumkitTomLo    (1,1,"----------------",SX); setLocation(spot);
  drumkitKick     (1, 1,"x-x-x---X-------",SX);

}

void outro(int instrument,int octave){
  tempoOutro();
  silentOutro();
}

int
main()
    {
    songInit();

    setTime(4,4);
    setStride(0.05); //delay between notes played in a chord
    setSustain(0.99995); //logarithmic scale
    setAmplitude(0.4);

    openOutput("drums.rra",0,0);
    int instrument, octave;
    instrument = 0;
    octave = 0;


#include "song.c"

    last = 1;

    closeOutput();

    return 0;
    }
