#ifndef WINDOWOBJ_H
#define WINDOWOBJ_H

#include <QObject>

class windowobj : public QObject
{
    Q_OBJECT
public:
    explicit windowobj(QObject *parent = nullptr);

signals:
};

#endif // WINDOWOBJ_H
