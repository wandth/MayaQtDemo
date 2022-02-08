#include "mainWindowUI.h"
#include "ui_MainWindowUI.h"

#include <iostream>

MainWindowUI::MainWindowUI(QWidget *parent) :
		QWidget(parent), ui(new Ui::MainWindowUI)
{
	ui->setupUi(this);

	QObject::connect(ui->test_button, SIGNAL(clicked(bool)), this, SLOT(testButtonClick()));
}

void MainWindowUI::testButtonClick()
{
	std::cout << "hello world";
}

