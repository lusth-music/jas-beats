#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

void tempoChorus() {
  setTempo(230);
}

void silentChorus() {
  rest(W*16);
}

void tempoIntro() {
  setTempo(230);
}

void silentIntro() {
  rest(W*20);
}

void tempoVerse() {
  setTempo(230);
}


void silentVerse(){
  rest(W*24);
}

void tempoBridge(){
  setTempo(180);
}


void silentBridge(){
  rest(W*16);
}

void tempoOutro() {
  setTempo(230);
}

void silentOutro(){
  rest(W);
}

