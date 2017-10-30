#ifndef BASECLASSQTSO_BASECLASSQT_HPP
#define BASECLASSQTSO_BASECLASSQT_HPP

#include <QString>

namespace eines
{

class baseClassQt_c
{
        QString errorStr_pri;
protected:
        void setError_f(const QString& error_par_con);
        void appendError_f(
            const QString& error_par_con
            , const QString& separator_par_con = "\n"
        );
public:
        //return the error, clears the internal error variable (errorStr_pri)
        QString getError_f();

        static void appendError_f(
            QString& str_par,
            const QString& error_par_con
            , const QString& separator_par_con = "\n"
        );

        bool anyError_f() const;

};

}
#endif // BASECLASSQTSO_BASECLASSQT_HPP
