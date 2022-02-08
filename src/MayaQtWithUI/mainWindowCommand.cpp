#include "mainWindowCommand.h"
#include "mainWindowUI.h"

#include <maya/MQtUtil.h>


const MString MainWindowCommand::m_command_name("createMainWindowUI");


void MainWindowCommand::cleanup()
{

}


MStatus MainWindowCommand::doIt(const MArgList &args)
{
	std::unique_ptr<MainWindowUI> main_window_ui(new MainWindowUI(MQtUtil::mainWindow()));
	main_window_ui->show();


	return MS::kSuccess;
}