#ifndef MAYAQTDEMO_MAINWINDOWCOMMAND_H
#define MAYAQTDEMO_MAINWINDOWCOMMAND_H


#include <maya/MPxCommand.h>
#include <QtCore/QPointer>
#include <maya/MString.h>

#include "mainWindow.h"

class MainWindowCommand:MPxCommand
{
public:
	static void		cleanup();
	static void*	creator() { return new MainWindowCommand(); }

	MStatus			doIt(const MArgList& args);

public:
	static QPointer<MainWindow>	m_main_window;
	static const MString    m_command_name;
};

#endif //MAYAQTDEMO_MAINWINDOWCOMMAND_H
