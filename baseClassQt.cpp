#include "baseClassQt.hpp"

textCompilation_c baseClassQt_c::getErrors_f()
{
    textCompilation_c tmp(errors_pri);
    errors_pri.clear_f();
    return tmp;
}
void baseClassQt_c::setErrors_f(const textCompilation_c& errors_par_con)
{
    errors_pri = errors_par_con;
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
    const text_c& error_par_con
    )
{
    if (error_par_con.empty_f())
    {
        errors_pri
        .append_f(error_par_con);
    }
}
bool baseClassQt_c::anyError_f() const
{
    return not errors_pri.empty_f();
}

