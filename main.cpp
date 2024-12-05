#include "mainwindow.h" // Main window class

#include <QApplication> // QT
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[]) // QT Generated main
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "IdCardGenerator_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    MainWindow w; // Creates main window
    w.show();
    return a.exec();
}
