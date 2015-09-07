#include "helloqpm.h"

QPM_BEGIN_NAMESPACE(io, qpm, example);

HelloQpm::HelloQpm(QObject *parent) : QObject(parent) {
    m_message = "Hello from C++";
}

QPM_END_NAMESPACE(io, qpm, example);
