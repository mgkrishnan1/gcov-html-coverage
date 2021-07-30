pip install gcovr

g++ -fprofile-arcs -ftest-coverage -fPIC -O0 program1.cc -o program    //.gcno file
program   //.gcda file
gcovr -r .

gcovr -r . --html -o example-html.html
gcovr -r . --html --html-details -o example-html-details.html