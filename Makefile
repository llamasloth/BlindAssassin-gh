#OBJS specifies which files to compile as part of the project
OBJS = CApp.cpp CApp_OnInit.cpp CApp_OnEvent.cpp CApp_OnLoop.cpp CApp_OnRender.cpp CApp_OnCleanup.cpp Texture.cpp

#CC specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -Wall
#
#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = CApp

#This is the target that compiles our executable
all : $(OBJS)
		$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

