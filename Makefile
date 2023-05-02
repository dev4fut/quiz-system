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

run_test:
	cls
	g++ $(APP_FILES) -o output\login.exe
	./ouput\login.exe
	del output\login.exe
	
run_testmain:
	cls
	g++ $(FUNCTIONS_FILES) tests\HelpMe\test_helpinput.cpp -o tests\HelpMe\test_helpinput.exe
	./tests\HelpMe\test_helpinput.exe
	del tests\HelpMe\test_helpinput.exe
run_hoho:
	cls
	g++ tests\constructor.cpp -o tests\constructor.exe
	./tests\constructor.exe
	del tests\constructor.exe
run_grade:
	cls
	g++ models\grade.cpp tests\models_test\grade_test.cpp -o tests\models_test\grade_test.exe
	./tests\models_test\grade_test.exe
	del tests\models_test\grade_test.exe