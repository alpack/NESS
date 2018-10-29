#### MAKEFILE CONFIG ####                #
# CC      = compiler                     #
# CFLAGS  = compiler flags (-Warnall)    #
# LDFLAGS = linker flags                 #
# TARGET  = executable's name            #
SHELL   = /bin/bash
CC	    = gcc
CFLAGS	= -Wall
LDFLAGS	= -lm
TARGET	= NESS
MKDIR 	= mkdir -p
REMOVE 	= rm -rf

#### DIRECTORY ASSIGNMENTS ####          #
# DIR = makefile's directory             #
# BIN = binaries (executable) directory  #
# SRC = source files (.c) directory      #
# INC = header files (.h) directory      #
# OBJ = object files (.o) directory      #
# DEP = dependencies (.d) directory      #
SRC	= src/
INC = include/
DEP	= dep/
OBJ	= obj/
BIN	= bin/
DB	= database/

#### MOCK DIRECTORY ASSIGNMENTS ####         #
# ENTITIES    =                              #
# BOARDS      =                              #
# NEWS        =                              #
# POSTS       =                              # 
# AGENDA      =                              #
# WORLD       =                              # 
# ZONES       =                              # 
# QUESTS      =                              # 
# EPICS       =                              # 
# CHARACTERS  =                              # 
# PROFILES    =                              # 
# TALENTS     =                              # 
# MILESTONES  =                              # 
# RESOURCES   =                              # 
# ITEMS       =                              # 
# INVENTORIES =                              # 
# MAILBOXES   =                              # 
# ALLIANCES   =                              # 
# GUILDS      =                              # 
# TRIBES      =                              # 
# SQUADS      =                              #  
ENTITIES = database/{boards,world,characters,resources,alliances}
# BOARDS TREE
BOARDS = database/boards/{news,posts,agenda}
NEWS   = boards/news/{news01.txt,news02.txt,news03.txt}
POSTS  = boards/posts/{post01.txt,post02.txt,post03.txt}
AGENDA = boards/agenda/{agenda01.txt,agenda02.txt,agenda03.txt}
# WORLD TREE
WORLD  = database/world/{zones,quests,epics}
ZONES  = world/zones/{zone01.txt,zone02.txt,zone03.txt}
QUESTS = world/quests/{quest01.txt,quest02.txt,quest03.txt}
EPICS  = world/epics/{epic01.txt,epic02.txt,epic03.txt}
# CHARACTERS TREE
CHARACTERS = database/characters/{profiles,talents,milestones}
PROFILES   = characters/profiles/{card01.txt,card02.txt,card03.txt}
TALENTS    = characters/talents/{talent01.txt,talent02.txt,talent03.txt}
MILESTONES = characters/milestones/{milestone01.txt,milestone02.txt,milestone03.txt}
# RESOURCES TREE
RESOURCES   = database/resources/{inventories,items,mailboxes}
ITEMS       = resources/items/{item01.txt,item02.txt,item03.txt}
INVENTORIES = resources/inventories/{inventory01.txt,inventory02.txt,inventory03.txt}
MAILBOXES   = resources/mailboxes/{mailbox01.txt,mailbox02.txt,mailbox03.txt}
# ALLIANCES TREE
ALLIANCES = database/alliances/{guilds,tribes,squads}
GUILDS    = alliances/guilds/{guild01.txt,guild02.txt,guild03.txt}
TRIBES    = alliances/tribes/{tribe01.txt,tribe02.txt,tribe03.txt}
SQUADS    = alliances/squads/{squad01.txt,squad02.txt,squad03.txt}

#### WILDCARD EXPANSIONS ####               #
# SOURCES  = get all .c files in src/       #
# INCLUDES = get all .h files in include/   #
# OBJECTS  = change .c list into list of .o #
# DEPENDS  = change .o list into list of .d #
SOURCES	 := $(wildcard $(SRC)*.c)
INCLUDES := $(wildcard $(INC)*.h)
OBJECTS	 := $(patsubst $(SRC)%.c, $(OBJ)%.o, $(SOURCES))
DEPENDS	 := $(patsubst $(OBJ)%.o, $(DEP)%.d, $(OBJECTS))

#### RULES ####
# LINK object files (.o) w/ header files (.h)
$(BIN)$(TARGET): $(OBJECTS)
	$(MKDIR) $(BIN)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)
	@echo "Linking complete!"

# COMPILE source files (.c) into object files (.o)
# OUTPUT objects' (.o) dependencies (.d) into dep/
$(OBJECTS): $(OBJ)%.o : $(SRC)%.c
	$(MKDIR) $(OBJ)
	$(CC) -c $(CFLAGS) -I$(INC) $< -o $@
	$(MKDIR) $(DEP)
	$(CC) $(CFLAGS) -MM -MT $(OBJ)$*.o $(SRC)$*.c > $(DEP)$*.d
	@echo "Compiled $<"

#### MAKEFILE COMMANDS ####
.PHONY:	help
help:
	@echo ' '
	@echo 'Usage: make [all] [clean] [database] [remove] [reset] [help] [tree]'
	@echo ' '
	@echo '            all      -   make a complete build of the project'
	@echo '            clean    -  delete compiled & built files and their respective folders'
	@echo '            help     -  display different usages of the makefile'
	@echo '            remove   -  remove only the compiled and built files - doesnt remove folders'
	@echo '            tree     -  display project directory in tree format'
	@echo '            database -  creates directories for the projects database'
	@echo '            reset    -  deletes all database folders and their contents'
	@echo ' '

.PHONY: all
all: 
	make database
	make mockfiles
	make
	$(BIN)$(TARGET)

.PHONY: tree
tree:
	@find . -not -path '*/\.*' | sed -e "s/[^-][^\/]*\// |/g" -e "s/|\([^ ]\)/|-\1/"

.PHONY: clean
clean:
	$(REMOVE) $(OBJECTS) $(OBJ) $(BIN) $(DEP)
	@echo 'Deleted all compiled and built files, and their respective folders'

.PHONY: remove
remove:
	$(REMOVE) $(BIN) $(OBJECTS) $(DEP)
	@echo 'Removed all compiled and built files'

.PHONY: reset
reset:
	$(REMOVE) $(DB)
	@echo 'Database erased. I hope you know what you are doing.'

.PHONY: database
database:
	$(MKDIR) $(ENTITIES)
	$(MKDIR) $(BOARDS) $(RESOURCES) $(WORLD) $(CHARACTERS) $(ALLIANCES)
	@echo 'Mock database is up and ready for use! ;)'

.PHONY: mockfiles
mockfiles:
	touch $(DB)$(NEWS) $(DB)$(POSTS) $(DB)$(AGENDA)
	touch $(DB)$(ZONES) $(DB)$(QUESTS) $(DB)$(EPICS)
	touch $(DB)$(PROFILES) $(DB)$(TALENTS) $(DB)$(MILESTONES)
	touch $(DB)$(ITEMS) $(DB)$(INVENTORIES) $(DB)$(MAILBOXES)
	touch $(DB)$(GUILDS) $(DB)$(TRIBES) $(DB)$(SQUADS)
	@echo 'Mock data created! :D'
