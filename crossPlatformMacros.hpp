//because windows sucks...

#ifndef BASECLASSQTSO_CROSSPLATFORMMACROS_HPP
#define BASECLASSQTSO_CROSSPLATFORMMACROS_HPP

#include <QtCore/QtGlobal>

//remember to define this variable in the .pro file
#if defined(BASECLASSQTSO_LIBRARY)
#  define EXPIMP_BASECLASSQTSO Q_DECL_EXPORT
#else
#  define EXPIMP_BASECLASSQTSO Q_DECL_IMPORT
#endif

#endif // BASECLASSQTSO_CROSSPLATFORMMACROS_HPP
