#include "baseClassQt.hpp"

#include <utility>

namespace eines {

QString baseClassQt_c::getError_f()
{
    QString tmp(errorStr_pri);
    errorStr_pri.clear();
    return tmp;
}
void baseClassQt_c::setError_f(const QString& error_par_con)
{
    errorStr_pri = error_par_con;
}
void baseClassQt_c::appendError_f(
    QString& str_par,
    const QString& error_par_con
    , const QString& separator_par_con)
{
    if (str_par.isEmpty())
    {
        str_par
        .append(error_par_con);
    }
    else
    {
        str_par
        .append(separator_par_con)
        .append(error_par_con);
    }
}

void baseClassQt_c::appendError_f(
    const QString& error_par_con
    , const QString& separator_par_con)
{
    if (errorStr_pri.isEmpty())
    {
        errorStr_pri
        .append(error_par_con);
    }
    else
    {
        errorStr_pri
        .append(separator_par_con)
        .append(error_par_con);
    }
}
bool baseClassQt_c::anyError_f() const
{
    return not errorStr_pri.isEmpty();
}

}
