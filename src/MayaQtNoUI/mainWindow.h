#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QWidget>
#include <QtCore/QString>
#include <maya/MString.h>

class MainWindow : public QWidget
{
	Q_OBJECT
public:
	MainWindow(QString& title, QWidget* parent = nullptr);

	~MainWindow();

private:

public slots:
	void print_str();

private:
	MString m_info;
};


#endif
