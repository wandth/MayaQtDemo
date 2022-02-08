#include <maya/MStatus.h>
#include <maya/MObject.h>
#include <maya/MFnPlugin.h>

#include "mainWindowCommand.h"


 __declspec(dllexport)
 MStatus initializePlugin(MObject plugin)
{
	MStatus status;

	MFnPlugin	pluginFn(plugin, "Autodesk, Inc.", "1.0", "Any", &status);


	status = pluginFn.registerCommand(MainWindowCommand::m_command_name, MainWindowCommand::creator);

	return status;
}

__declspec(dllexport)
MStatus uninitializePlugin(MObject plugin)
{
	MStatus status;

	MFnPlugin pluginFn(plugin, "Autodesk, Inc.", "1.0", "Any", &status);

	MainWindowCommand::cleanup();

	status = pluginFn.deregisterCommand(MainWindowCommand::m_command_name);

	return status;

}