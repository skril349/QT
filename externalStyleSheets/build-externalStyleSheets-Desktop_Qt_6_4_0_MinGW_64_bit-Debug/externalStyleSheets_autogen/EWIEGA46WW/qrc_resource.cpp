/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.4.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // C:/QT_6/projects/QT/externalStyleSheets/externalStyleSheets/styles/style.css
  0x0,0x0,0x0,0xc9,
  0x51,
  0x50,0x75,0x73,0x68,0x42,0x75,0x74,0x74,0x6f,0x6e,0x7b,0xd,0xa,0x63,0x6f,0x6c,
  0x6f,0x72,0x3a,0x77,0x68,0x69,0x74,0x65,0x3b,0xd,0xa,0x62,0x61,0x63,0x6b,0x67,
  0x72,0x6f,0x75,0x6e,0x64,0x2d,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x72,0x65,0x64,0x3b,
  0xd,0xa,0x7d,0xd,0xa,0xd,0xa,0x51,0x50,0x75,0x73,0x68,0x42,0x75,0x74,0x74,
  0x6f,0x6e,0x5b,0x74,0x65,0x78,0x74,0x3d,0x22,0x73,0x75,0x62,0x6d,0x69,0x74,0x22,
  0x5d,0x7b,0xd,0xa,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x77,0x68,0x69,0x74,0x65,0x3b,
  0xd,0xa,0xd,0xa,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x2d,0x63,
  0x6f,0x6c,0x6f,0x72,0x3a,0x67,0x72,0x65,0x79,0x3b,0xd,0xa,0xd,0xa,0x7d,0xd,
  0xa,0xd,0xa,0x51,0x50,0x75,0x73,0x68,0x42,0x75,0x74,0x74,0x6f,0x6e,0x23,0x4f,
  0x6b,0x42,0x75,0x74,0x74,0x6f,0x6e,0x7b,0xd,0xa,0x63,0x6f,0x6c,0x6f,0x72,0x3a,
  0x77,0x68,0x69,0x74,0x65,0x3b,0xd,0xa,0xd,0xa,0x62,0x61,0x63,0x6b,0x67,0x72,
  0x6f,0x75,0x6e,0x64,0x2d,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x67,0x72,0x65,0x65,0x6e,
  0x3b,0xd,0xa,0xd,0xa,0x7d,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // styles
  0x0,0x6,
  0x7,0xac,0x2,0xc3,
  0x0,0x73,
  0x0,0x74,0x0,0x79,0x0,0x6c,0x0,0x65,0x0,0x73,
    // style.css
  0x0,0x9,
  0x0,0x28,0xbf,0x23,
  0x0,0x73,
  0x0,0x74,0x0,0x79,0x0,0x6c,0x0,0x65,0x0,0x2e,0x0,0x63,0x0,0x73,0x0,0x73,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/styles
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/styles/style.css
  0x0,0x0,0x0,0x12,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x84,0xe2,0xc4,0xde,0x71,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_resource)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_resource)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resource)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resource)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_resource)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resource)(); }
   } dummy;
}
