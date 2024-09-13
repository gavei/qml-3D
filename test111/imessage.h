#ifndef IMESSAGE_H
#define IMESSAGE_H

#include <QObject>

class IMessage : public QObject
{
    Q_OBJECT
public:
    explicit IMessage(QObject *parent = nullptr);

signals:
};

#endif // IMESSAGE_H
