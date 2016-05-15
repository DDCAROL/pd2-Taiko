#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	    Q_OBJECT

	public:
			    explicit MainWindow(QWidget *parent = 0);
				    ~MainWindow();
					    int score_cnt = 0;
						    QTimer *countdown;
							    QTimer *timer;
								    int cnt = 30;
									    int a[28];
										    int b[28];

	private:
											    Ui::MainWindow *ui;
												    int xred,xred2,xred3,xred4,xred5,xred6,xred7,xred8,xred9,xred10,xred11,xred12,xred13,xred14;
													    int xblue,xblue2,xblue3,xblue4,xblue5,xblue6,xblue7,xblue8,xblue9,xblue10,xblue11,xblue12,xblue13,xblue14;
														    int y;
															    void keyPressEvent(QKeyEvent * event);

																private slots:
																	    void timer_timeout();

																    void on_exit_clicked();

																	public slots:
																		    void moveButton();
};

#endif // MAINWINDOW_H

