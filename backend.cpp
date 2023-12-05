#include "backend.h"
#include <QDebug>
#include <QProcess>
#include <QTimer>
Backend::Backend(QObject *parent)
    : QObject{parent}
{
    QTimer::singleShot(120000, [=]{
        exit(-1);
    });
}

Backend::~Backend()
{
    qDebug()<<"<<<<<<<<< destructor Backend";
}

void Backend::shutdown()
{
    QProcess::execute("shutdown", {"-h", "now"});
}

void Backend::reboot()
{
    QProcess::execute("shutdown", {"-r", "now"});
}

