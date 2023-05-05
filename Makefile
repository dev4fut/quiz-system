# list file to compile
APP_FILES = app\app.cpp
DATA_FILES = app\data.cpp
FUNCTIONS_FILES = functions\helpio.cpp functions\info.cpp functions\fileio.cpp
MODELS_FILES = models\grade.cpp models\subject.cpp models\question.cpp models\user.cpp
FILES = $(APP_FILES) $(FUNCTIONS_FILES)

run: # run app\app.cpp
	cls
	g++ $(FILES) -o app\app.exe
	./app\app.exe
	del app\app.exe

test_data: # run app\data.cpp
	cls
	g++ $(DATA_FILES) functions/helpio.cpp models/grade.cpp models/user.cpp tests/data_test.cpp -o tests/data_test.exe
	./tests/data_test.exe
	del tests/data_test.exe
