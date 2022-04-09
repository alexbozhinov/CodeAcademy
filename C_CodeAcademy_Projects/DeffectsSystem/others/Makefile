LIBDIR = ../lib

CC = gcc
CFLAGSEXTRA = -Werror -Wstrict-prototypes
CFLAGS = -Wall -I$(INCLUDES) -g -std=c99 

OBJDIR = .././obj
SRCDIR = .././src

TARGET = deffects

LIBS = -lm

_DEPS = *.h
DEPS = $(patsubst %,$(LIBDIR)/%,$(_DEPS))

_OBJ = *.c
OBJ = $(patsubst %,$(SRCDIR)/%,$(_OBJ))

$(OBJDIR)/%.o: $(_OBJ:.c=.o) $(DEPS)
	$(CC) -c -o -g $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	@echo Linking $(TARGET)
	@$(CC) -o $(TARGET) $^ $(CFLAGS) $(LIBS)

 #.PHONY: clean

#clean:
#	@echo Cleaning up
#	@rm -f $(OBJDIR)/*.o *~ core $(IDIR)/*~ 

