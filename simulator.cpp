#include "simulator.h"

Simulator::Simulator(QObject *parent) :
    QObject(parent)
{

}

Simulator::~Simulator()
{

}

void Simulator::step()
{

    emit stepCompleted();
}
