## DIRECTORIES
# source files (.c)
SRC	= src/
SOURCES	:= $(wildcard $(SRC)*.c)
# header files (.h)
INC  = include/
INCLUDES := $(wildcard $(INC)*.h)
# object files (.o)
OBJ	= obj/
OBJECTS	:= $(SOURCES:$(SRC)%.c=$(OBJ)%.o)
# dependencies (.d)
DEP	= dep/
DEPENDS	:= $(OBJECTS:$(OBJ)%.o=$(DEP)%.d)
# executables (binaries)
BIN	= bin/

## COMPILER AND WARNINGS
CC	= gcc
TARGET	= NESS
CFLAGS	= -Wall -I$(INC)
LFLAGS	= -lm
REMOVE	:= rm -rf

# Linking
$(BIN)$(TARGET): $(OBJECTS) $(CMN_OBJ)
	mkdir -p $(BIN)
	$(CC) $(LFLAGS) -o $@ $(OBJECTS) $(CMN_OBJ)
	@echo "Linking complete"

-include $(DEPENDS)

# Compilation
$(OBJECTS): $(OBJ)%.o : $(SRC)%.c
	mkdir -p $(OBJ)
	mkdir -p $(DEP)
	$(CC) -c $(CFLAGS) $< -o $@
	$(CC) -I$(INC) -MM -MT '$(OBJ)$*.o' $(SRC)$*.c > $(DEP)$*.d
	@echo "Compiled $<"

# Make commands
.PHONY: clean
clean:
	$(REMOVE) $(OBJECTS) $(OBJ) $(BIN) $(DEP)
	@echo "Deleted $<"

.PHONY: remove
remove:
	$(REMOVE) $(BIN)$(TARGET)
	$(REMOVE) $(OBJECTS)
	$(REMOVE) $(DEPENDS)
	$(REMOVE) cscope.*
	@echo "Deleted $<"

.PHONY: all
all: $(BIN)$(TARGET)
