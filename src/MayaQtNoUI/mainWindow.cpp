#include "mainWindow.h"

#include <maya/MGlobal.h>

#include <QtCore/QPointer>
#include <QtCore/Qt>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>


MainWindow::MainWindow(QString &title, QWidget *parent) : m_info("hello world"), QWidget(parent)
{
	this->setParent(parent);
	this->setAttribute(Qt::WA_DeleteOnClose);
	this->setWindowFlag(Qt::Window);
	this->setWindowTitle(title);
	this->setMinimumSize(200, 200);


	QHBoxLayout *main_lay = new QHBoxLayout(this);

	QPushButton *button = new QPushButton("demo");

	connect(button, &QPushButton::clicked, this, &MainWindow::print_str);

	main_lay->addWidget(button);
}

MainWindow::~MainWindow()
{

}

void MainWindow::print_str()
{
	MGlobal::displayInfo(m_info);
}