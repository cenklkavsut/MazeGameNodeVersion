// MazeAssigment.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include<cstdio>
#include<cstdlib>
#include <string>
#include "Draw.cpp"

using namespace std;

int main()
{


	Room* A = new Room();
	Room* B = new Room();


	A->setN(B);

	cout << "Welcome To Maze Gamo a maze Game for the best like you!" << endl;
	Draw gen;
	//it is the draw class through calling gen generate it will call the class 
	gen.generate();


	system("Pause");//pauses for input.

	return 0;
}