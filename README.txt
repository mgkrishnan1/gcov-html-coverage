pip install gcovr

g++ -fprofile-arcs -ftest-coverage -fPIC -O0 program1.cc -o program    //.gcno file
program   //.gcda file
gcovr -r .

gcovr -r . --html -o example-html.html
gcovr -r . --html --html-details -o example-html-details.html


Reference
https://gcovr.com/en/stable/guide.html
https://github.com/gcovr/gcovr/tree/2b50284e8a6792b4ddcba14e2050c5c05f15deb6
