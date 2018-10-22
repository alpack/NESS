# Contains header files
INCLUDE = include/
INCLUDES := $(wildcard $(INCLUDE)*.h)

# Compile with all the warnings on
CC = gcc
CFLAGS = -Wall -I$(INCLUDE)
LDFLAGS = -lm

# Contains source files
SRC = src/
SOURCES := $(wildcard $(SRC)*.c)

# Contains object files
OBJ = obj/
OBJECTS := $(patsubst %.c,$(OBJ)%.o,$(notdir $(SOURCES)))

# Contains executables
BIN = bin/
BINS := $(patsubst %.c,$(BIN)%,$(notdir $(SOURCES)))

all : $(BINS)

.SECONDEXPANSION:
SRCFILE = $(patsubst $(OBJ)%.o,$(SRC)%.c,$@)
OBJFILE = $(patsubst $(BIN)%,$(OBJ)%.o,$@)
BINFILE = $@

# Rule to make executables
$(BIN)% : $(OBJECTS)
	$(CC) $(OBJFILE) $(LDFLAGS) -o $(BINFILE)

# Rule to make object files
$(OBJ)%.o : $(SOURCES) $(INCLUDES)
	$(CC) $(SRCFILE) $(CXXFLAGS) -c -o $(OBJFILE)

# Don't remove intermediate object files
.PRECIOUS : $(OBJECTS)

make_dirs:
	mkdir -p $(OBJ) $(BIN)

clean_obj:
	-rm $(OBJECTS)

clean :
	-rm $(OBJECTS)
	-rm $(BINS)