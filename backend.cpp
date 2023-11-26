#include "backend.h"
#include <QDebug>
#include <QProcess>
Backend::Backend(QObject *parent)
    : QObject{parent}
{

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

