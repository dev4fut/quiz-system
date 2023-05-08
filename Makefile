# list file to compile
APP_FILES = app\app.cpp
DATA_FILES = data/database.cpp
FUNCTIONS_FILES = functions\helpio.cpp functions\info.cpp functions\fileio.cpp
MODELS_FILES = models\grade.cpp models\user.cpp models\subject.cpp models\question.cpp
CLS = cls

run: # run app\app.cpp
	$(CLS)
	g++ $(APP_FILES) $(FUNCTIONS_FILES) -o app\app.exe
	./app\app.exe
	del app\app.exe

test_data: # run app\data.cpp
	$(CLS)
	g++ $(DATA_FILES) functions/helpio.cpp models/grade.cpp models/user.cpp tests/data_test.cpp -o tests/data_test.exe
	./tests/data_test.exe
	del tests/data_test.exe

# test_functions: # run app\functions.cpp
helpio_test: # run tests/functions_test/helpio_test.cpp
	$(CLS)
	g++ functions/helpio.cpp tests/functions_test/helpio_test.cpp -o tests/functions_test/helpio_test.exe
	./tests/functions_test/helpio_test.exe
	del tests/functions_test/helpio_test.exe

# test_models: # \models\*.cpp
grade_test: # run tests/models_test/grade_test.cpp
	$(CLS)
	g++ models/grade.cpp tests/models_test/grade_test.cpp -o tests/models_test/grade_test.exe
	./tests/models_test/grade_test.exe
	del tests/models_test/grade_test.exe

user_test: # run tests/models_test/user_test.cpp
	$(CLS)
	g++ models/user.cpp models/grade.cpp functions/helpio.cpp tests/models_test/user_test.cpp -o tests/models_test/user_test.exe
	./tests/models_test/user_test.exe
	del tests/models_test/user_test.exe

subject_test: # run tests/models_test/subject_test.cpp
	$(CLS)
	g++ models/subject.cpp tests/models_test/subject_test.cpp -o tests/models_test/subject_test.exe
	./tests/models_test/subject_test.exe
	del tests/models_test/subject_test.exe

question_test: # run tests/models_test/question_test.cpp
	$(CLS)
	g++ models/question.cpp models/subject.cpp tests/models_test/question_test.cpp -o tests/models_test/question_test.exe
	./tests/models_test/question_test.exe
	del tests/models_test/question_test.exe
