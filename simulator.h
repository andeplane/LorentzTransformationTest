#ifndef SIMULATOR_H
#define SIMULATOR_H
#include <QObject>

class Simulator : public QObject
{
    Q_OBJECT
public:
    Simulator(QObject* parent = 0);
    ~Simulator();

public slots:
    void step();

signals:
    void stepCompleted();
};

#endif // SIMULATOR_H
