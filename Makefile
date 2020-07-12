IDIR=include
CC=gcc
CFLAGS=-I$(IDIR)
ODIR=obj
LIBS=-lm
SDIR=src

_DEPS = bootscreen.h bs_priv.h colors.h fonts.h types.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = bootscreen.o hcfont.o helvr10.o ip19.o ip20.o ip24.o ip26.o ip30.o ip32.o ip35.o main.o ncenb18.o sgcslogo.o sgifont.o scrb18.o unkfont.o venice.o vgxfont.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

sgibootscreen: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~