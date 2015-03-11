#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

void silentChorus() {
  setTempo(350);
  for(int i = 0; i<16; ++i){
    rest(W);
  }
}

void silentIntro() {
  setTempo(300);
  rest(W*2);
  rest(W*3);
  rest(W*2);
  rest(W*3);
  rest(W*2);
}

void silentVerse(){
  setTempo(325);
  //rest(W*16);
}

void silentBridge(){
  setTempo(325);
  //rest(W*10);
}

void silentOutro(){
  setTempo(325);
  rest(W*9);
}

