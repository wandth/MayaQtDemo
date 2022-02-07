#include <maya/MStatus.h>
#include <maya/MObject.h>
#include <maya/MFnPlugin.h>

#include "mainWindowCommand.h"

MStatus initializePlugin(MObject plugin)
{
	MStatus ststus;

	MFnPlugin	pluginFn(plugin, "Autodesk, Inc.", "1.0", "Any", &ststus);


	ststus = pluginFn.registerCommand(MainWindowCommand::m_command_name, MainWindowCommand::creator);

	return ststus;
}


MStatus uninitializePlugin(MObject plugin)
{
	MStatus ststus;

	MFnPlugin pluginFn(plugin, "Autodesk, Inc.", "1.0", "Any", &ststus);

	MainWindowCommand::cleanup();

	ststus = pluginFn.deregisterCommand(MainWindowCommand::m_command_name);

	return ststus;

}