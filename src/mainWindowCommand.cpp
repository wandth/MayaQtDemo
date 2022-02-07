#include "mainWindowCommand.h"
#include "mainWindow.h"

#include <maya/MQtUtil.h>


const MString MainWindowCommand::m_command_name("createYTMainWindows");

QPointer<MainWindow>	MainWindowCommand::m_main_window;


void MainWindowCommand::cleanup()
{
	if (!m_main_window.isNull())
	{
		delete m_main_window;
		m_main_window = nullptr;
	}
}


MStatus MainWindowCommand::doIt(const MArgList & args)
{
	if (m_main_window.isNull())
	{
		m_main_window = new MainWindow(QString("WindowDemo"), MQtUtil::mainWindow());
	}

	m_main_window->show();
	m_main_window->activateWindow();
	return MS::kSuccess;
}