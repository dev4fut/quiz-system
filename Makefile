# list file to compile
APP_FILES = app\app.cpp
FUNCTIONS_FILES = functions\helpio.cpp functions\info.cpp
MODELS_FILES = models\class.cpp models\subject.cpp models\question.cpp models\questionlist.cpp models\user.cpp models\userlist.cpp
FILES = $(APP_FILES) $(FUNCTIONS_FILES)

run: # run app\app.cpp
	cls
	g++ $(FILES) -o app\app.exe
	./app\app.exe
	del app\app.exe

run_helpme: # run HelpMe\main.cpp
	cls
	g++ HelpMe\main.cpp HelpMe\helpio.cpp -o HelpMe\main.exe
	./HelpMe\main.exe
	del HelpMe\main.exe
