#ifndef TESTGIT_H
#define TESTGIT_H

#include <QtWidgets/QMainWindow>
#include "ui_testgit.h"

class TestGit : public QMainWindow
{
	Q_OBJECT

public:
	TestGit(QWidget *parent = 0);
	~TestGit();

private:
	Ui::TestGitClass ui;
	//ฤ๚บร
	int m;
};

#endif // TESTGIT_H
