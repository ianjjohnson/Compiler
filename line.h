/*
ifile.cpp
Ian Johnson

Provides an interface to a Line class,
where a line represents a line of code
in Script++ which will be compiled
*/

#ifndef LINE
#define LINE

#include <iostream>
#include "string.h"
#include "vector.h"

class Line{

    public:

        static const int MAX_LINE_LENGTH = 1024;

        Line();
        Line(String);

        friend std::ostream& operator<<(std::ostream&, const Line&);
        char& operator[] (const int);

        int getIndentation();
        void indent(int);
        void semicolon();
        void translate();
        bool isEmpty();
        String getString();

    private:

        String original;
        int indentation;

        void calculateIndentation();
        void printCheck();
        void includesCheck();

};

#endif
