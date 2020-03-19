#ifndef BASECLASSQTSO_BASECLASSQT_HPP
#define BASECLASSQTSO_BASECLASSQT_HPP

#include "crossPlatformMacros.hpp"

#include "textQtso/text.hpp"

class EXPIMP_BASECLASSQTSO baseClassQt_c
{
        textCompilation_c errors_pri;
protected:
        void setErrors_f(const textCompilation_c& errors_par_con);
        void appendError_f(
            const text_c& error_par_con
        );
        void appendErrors_f(const textCompilation_c& errors_par_con
        );
public:
        //return the error, clears the internal error variable (errorStr_pri)
        textCompilation_c getErrors_f();

        static void appendError_f(
            QString& str_par,
            const QString& error_par_con
            , const QString& separator_par_con = "\n"
        );

        bool anyError_f() const;
};

#endif // BASECLASSQTSO_BASECLASSQT_HPP
