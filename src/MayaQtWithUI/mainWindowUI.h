#ifndef MAINWINDOWUI_H
#define MAINWINDOWUI_H

#include <QtWidgets/QWidget>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowUI; }
QT_END_NAMESPACE

class MainWindowUI : public QWidget
{
Q_OBJECT

public:
	explicit MainWindowUI(QWidget *parent = nullptr);

	~MainWindowUI()  override = default;


Q_SLOT
	void testButtonClick();


private:
	std::unique_ptr<Ui::MainWindowUI> ui;
};


#endif
