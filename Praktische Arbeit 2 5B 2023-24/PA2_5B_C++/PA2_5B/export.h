#ifndef EXPORT_H
#define EXPORT_H

#ifdef _BUILDING_PA2
#define PA2_DLL_EXPORT QX_DLL_EXPORT_HELPER
#else // _BUILDING_PA2
#define PA2_DLL_EXPORT QX_DLL_IMPORT_HELPER
#endif // _BUILDING_PA2

#ifdef _BUILDING_PA2
#define QX_REGISTER_HPP_PA2 QX_REGISTER_HPP_EXPORT_DLL
#define QX_REGISTER_CPP_PA2 QX_REGISTER_CPP_EXPORT_DLL
#else // _BUILDING_PA2
#define QX_REGISTER_HPP_PA2 QX_REGISTER_HPP_IMPORT_DLL
#define QX_REGISTER_CPP_PA2 QX_REGISTER_CPP_IMPORT_DLL
#endif // _BUILDING_PA2

#endif // EXPORT_H
