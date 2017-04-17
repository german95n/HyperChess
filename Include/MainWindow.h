#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <ui_MainWindow.h>

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

	private slots:
	void on_s_NewGame_Button_clicked();

	void on_s_LoadGame_Button_clicked();

	void on_s_Options_Button_clicked();

	void on_s_Credits_Button_clicked();

	void on_n_Back_Button_clicked();

	void on_n_Play_Button_clicked();

	void on_l_Back_Button_clicked();

	void on_l_Continue_Button_clicked();

	void on_o_Video_Button_clicked();

	void on_o_Sound_Button_clicked();

	void on_o_Back_Button_clicked();

	void on_ov_Back_Button_clicked();

	void on_os_Back_Button_clicked();

	void on_ov_Save_Button_clicked();

	void on_os_Save_Button_clicked();

	void on_c_Back_Button_clicked();

private:
	Ui::MainWindowClass ui;
};

#endif // MAINWINDOW_H
