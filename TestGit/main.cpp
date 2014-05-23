#include "testgit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TestGit w;
	w.show();
	return a.exec();
}
