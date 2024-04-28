#ifndef EXPORT_H
#define EXPORT_H

#ifdef _BUILDING_FONE_
#define QX_FONE_DLL_EXPORT QX_DLL_EXPORT_HELPER
#else // _BUILDING_FONE_
#define QX_FONE_DLL_EXPORT QX_DLL_IMPORT_HELPER
#endif // _BUILDING_FONE_

#ifdef _BUILDING_FONE_
#define QX_REGISTER_HPP_QX_FONE QX_REGISTER_HPP_EXPORT_DLL
#define QX_REGISTER_CPP_QX_FONE QX_REGISTER_CPP_EXPORT_DLL
#else // _BUILDING_FONE_
#define QX_REGISTER_HPP_QX_FONE QX_REGISTER_HPP_IMPORT_DLL
#define QX_REGISTER_CPP_QX_FONE QX_REGISTER_CPP_IMPORT_DLL
#endif // _BUILDING_FONE_

#endif // EXPORT_H