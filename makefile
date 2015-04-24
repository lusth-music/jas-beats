#Place the names of all your tracks here (as RRA filenames)

 RRA = guitar.rra piano.rra acoustic.rra sustain.rra drums.rra cello.rra cello-drawn.rra
SONG = guitar.rra acoustic.rra drums.rra piano.rra cello.rra cello-drawn.rra
SRRA = stereo.rra
INCLUDE=/usr/local/include/songlib/
LIB=/usr/local/lib/

all : $(RRA)

%.rra	: %.x
		./$<

%.x	: %.c
		gcc -Wall -g -o $@ -I$(INCLUDE) $< -L$(LIB) -lsong -lm 

mix.rra		: song.c $(SONG)
		rrafastmixer $(SONG) > mix.rra

fastmix : song.c $(SONG)
		rrafastmixer $(SONG) | rplay

play	: mix.rra
		rplay mix.rra 

playcello : cello.rra
		cat cello.rra | rplay

playpiano : piano.rra
		cat piano.rra | rrachorus -r 0.000001 | rplay

playdrums : drums.rra
		cat drums.rra | rplay

playsustain : sustain.rra
		rplay sustain.rra

playguitar : guitar.rra
		rplay guitar.rra

playacoustic : acoustic.rra
		rplay acoustic.rra

playmix : mix.rra
		rplay mix.rra

playmaster:  $(SRRA)
	rrafastmixer $(SRRA) | rramaster ! rplay

master.rra :  $(SRRA)
	rrafastmixer $(SRRA) | rramaster > master.rra

master.mp3 : master.rra
	rra2mp3 master.rra

rraidentity : rraidentity.c
		gcc -Wall -g -o rraidentity rraidentity.c -lsong -lm 

.PHONY : clean

clean :
		rm -f $(RRA) $(SRRA) master.rra mix.rra master.mp3 *.x *.wav
		rm -f -r *.x.dSYM
