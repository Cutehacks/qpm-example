#include <QObject>
#include "qpm.h"

QPM_BEGIN_NAMESPACE(io, qpm, example)

class HelloQpm : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString message READ message NOTIFY messageChanged)

public:
    HelloQpm(QObject *parent = 0);
    inline QString message() const {return m_message;}

signals:
    void messageChanged(QString message);

private:
    QString m_message;
};

QPM_END_NAMESPACE(io, qpm, example)
