#include <QApplication>
#include <QDialog>

#include "gotocelldialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Ui::GoToCellDialog ui;
    GoToCellDialog *dialog = new GoToCellDialog;
    dialog->show();

    return app.exec();
}
