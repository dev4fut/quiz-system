# list file to compile
APP_FILES = app\app.cpp
DATA_FILES = data/database.cpp
FUNCTIONS_FILES = functions\helpio.cpp functions\info.cpp functions\fileio.cpp
MODELS_FILES = models\grade.cpp models\user.cpp models\subject.cpp models\question.cpp

run: # run app\app.cpp
	cls
	g++ $(APP_FILES) $(FUNCTIONS_FILES) -o app\app.exe
	./app\app.exe
	del app\app.exe

test_data: # run app\data.cpp
	cls
	g++ $(DATA_FILES) functions/helpio.cpp models/grade.cpp models/user.cpp tests/data_test.cpp -o tests/data_test.exe
	./tests/data_test.exe
	del tests/data_test.exe

test_subject: # run tests/models_test/subject_test.cpp
	cls
	g++ models/subject.cpp tests/models_test/subject_test.cpp -o tests/models_test/subject_test.exe
	./tests/models_test/subject_test.exe
	del tests/models_test/subject_test.exe

test_question: # run tests/models_test/question_test.cpp
	cls
	g++ $(FUNCTIONS_FILES) tests\HelpMe\test_helpinput.cpp -o tests\HelpMe\test_helpinput.exe
	./tests\HelpMe\test_helpinput.exe
	del tests\HelpMe\test_helpinput.exe
run_question:
	cls
	g++ Models\question.cpp -o Models\question.exe
	./quiz-system\Models\question.exe
	del ./quiz-system\Models\question.exe
run_asd:
	cls
	g++ $(DATA_FILES) $(MODELS_FILES) functions\info.cpp tests\asd.cpp -o tests\asd.exe
	./tests\asd.exe
	del tests\asd.exe
run_grade:
	cls
	g++ models\grade.cpp tests\models_test\grade_test.cpp -o tests\models_test\grade_test.exe
	./tests\models_test\grade_test.exe
	del tests\models_test\grade_test.exe
