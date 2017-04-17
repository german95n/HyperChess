#include <Include\MainWindow.h>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
}

MainWindow::~MainWindow() {

}

void MainWindow::on_s_NewGame_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_s_LoadGame_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_s_Options_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_s_Credits_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_n_Back_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_n_Play_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_l_Back_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_l_Continue_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_o_Video_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_o_Sound_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_o_Back_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_ov_Back_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_os_Back_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_ov_Save_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_os_Save_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_c_Back_Button_clicked() {
	ui.stackedWidget->setCurrentIndex(0);
}
