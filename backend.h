#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>

class Backend : public QObject
{
    Q_OBJECT
public:
    explicit Backend(QObject *parent = nullptr);
    ~Backend();
public slots:
    void shutdown();
    void reboot();
signals:

};

#endif // BACKEND_H
