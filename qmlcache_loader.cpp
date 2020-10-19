#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,1,0,0,0,1,0,0,0,
8,0,2,0,0,0,40,0,0,0,2,0,0,1,226,0,
0,0,0,0,1,0,0,0,0,0,0,4,10,0,0,0,
0,0,1,0,0,0,0,0,0,3,96,0,0,0,0,0,
1,0,0,0,0,0,0,5,162,0,0,0,0,0,1,0,
0,0,0,0,0,1,116,0,0,0,0,0,1,0,0,0,
0,0,0,0,172,0,0,0,0,0,1,0,0,0,0,0,
0,1,50,0,0,0,0,0,1,0,0,0,0,0,0,2,
52,0,0,0,0,0,1,0,0,0,0,0,0,3,26,0,
0,0,0,0,1,0,0,0,0,0,0,1,90,0,0,0,
0,0,1,0,0,0,0,0,0,0,96,0,0,0,0,0,
1,0,0,0,0,0,0,4,54,0,0,0,0,0,1,0,
0,0,0,0,0,2,8,0,0,0,0,0,1,0,0,0,
0,0,0,2,160,0,0,0,0,0,1,0,0,0,0,0,
0,1,150,0,0,0,0,0,1,0,0,0,0,0,0,2,
204,0,0,0,0,0,1,0,0,0,0,0,0,4,192,0,
0,0,0,0,1,0,0,0,0,0,0,3,126,0,0,0,
0,0,1,0,0,0,0,0,0,5,48,0,0,0,0,0,
1,0,0,0,0,0,0,5,206,0,0,0,0,0,1,0,
0,0,0,0,0,3,190,0,0,0,0,0,1,0,0,0,
0,0,0,3,220,0,0,0,0,0,1,0,0,0,0,0,
0,5,122,0,0,0,0,0,1,0,0,0,0,0,0,0,
214,0,0,0,0,0,1,0,0,0,0,0,0,4,100,0,
0,0,0,0,1,0,0,0,0,0,0,0,26,0,0,0,
0,0,1,0,0,0,0,0,0,2,242,0,0,0,0,0,
1,0,0,0,0,0,0,0,54,0,0,0,0,0,1,0,
0,0,0,0,0,5,16,0,0,0,0,0,1,0,0,0,
0,0,0,5,88,0,0,0,0,0,1,0,0,0,0,0,
0,1,184,0,0,0,0,0,1,0,0,0,0,0,0,4,
232,0,0,0,0,0,1,0,0,0,0,0,0,2,128,0,
0,0,0,0,1,0,0,0,0,0,0,3,52,0,0,0,
0,0,1,0,0,0,0,0,0,0,240,0,0,0,0,0,
1,0,0,0,0,0,0,0,136,0,0,0,0,0,1,0,
0,0,0,0,0,4,150,0,0,0,0,0,1,0,0,0,
0,0,0,2,98,0,0,0,0,0,1,0,0,0,0,0,
0,1,20,0,0,0,0,0,1,0,0,0,0,0,0,3,
160,0,0,0,0,0,1,0,0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,6,7,69,144,37,0,109,0,
111,0,98,0,105,0,108,0,101,0,11,8,174,66,252,0,
78,0,114,0,102,0,80,0,97,0,105,0,114,0,46,0,
113,0,109,0,108,0,18,11,105,247,188,0,68,0,101,0,
116,0,101,0,99,0,116,0,70,0,111,0,99,0,80,0,
97,0,114,0,97,0,109,0,46,0,113,0,109,0,108,0,
17,4,30,213,28,0,68,0,101,0,116,0,101,0,99,0,
116,0,70,0,111,0,99,0,72,0,97,0,108,0,108,0,
46,0,113,0,109,0,108,0,15,14,214,229,156,0,82,0,
116,0,68,0,97,0,116,0,97,0,83,0,101,0,116,0,
117,0,112,0,46,0,113,0,109,0,108,0,18,2,91,56,
252,0,80,0,114,0,111,0,102,0,105,0,108,0,101,0,
68,0,105,0,115,0,112,0,108,0,97,0,121,0,46,0,
113,0,109,0,108,0,10,8,171,105,124,0,82,0,116,0,
68,0,97,0,116,0,97,0,46,0,113,0,109,0,108,0,
15,14,189,72,28,0,67,0,117,0,115,0,116,0,111,0,
109,0,71,0,97,0,117,0,103,0,101,0,46,0,113,0,
109,0,108,0,12,15,122,227,28,0,67,0,111,0,110,0,
116,0,114,0,111,0,108,0,115,0,46,0,113,0,109,0,
108,0,17,2,151,12,252,0,80,0,97,0,105,0,114,0,
105,0,110,0,103,0,68,0,105,0,97,0,108,0,111,0,
103,0,46,0,113,0,109,0,108,0,10,3,139,165,60,0,
65,0,100,0,99,0,77,0,97,0,112,0,46,0,113,0,
109,0,108,0,14,1,145,156,188,0,70,0,105,0,108,0,
101,0,80,0,105,0,99,0,107,0,101,0,114,0,46,0,
113,0,109,0,108,0,14,5,145,51,188,0,67,0,111,0,
110,0,110,0,101,0,99,0,116,0,66,0,108,0,101,0,
46,0,113,0,109,0,108,0,18,12,141,13,60,0,68,0,
105,0,114,0,101,0,99,0,116,0,105,0,111,0,110,0,
83,0,101,0,116,0,117,0,112,0,46,0,113,0,109,0,
108,0,16,0,117,151,124,0,80,0,97,0,114,0,97,0,
109,0,69,0,100,0,105,0,116,0,73,0,110,0,116,0,
46,0,113,0,109,0,108,0,19,4,123,7,124,0,80,0,
97,0,114,0,97,0,109,0,69,0,100,0,105,0,116,0,
83,0,116,0,114,0,105,0,110,0,103,0,46,0,113,0,
109,0,108,0,20,2,155,78,188,0,68,0,101,0,116,0,
101,0,99,0,116,0,70,0,111,0,99,0,69,0,110,0,
99,0,111,0,100,0,101,0,114,0,46,0,113,0,109,0,
108,0,12,15,38,128,60,0,84,0,101,0,114,0,109,0,
105,0,110,0,97,0,108,0,46,0,113,0,109,0,108,0,
13,13,182,85,28,0,80,0,97,0,114,0,97,0,109,0,
76,0,105,0,115,0,116,0,46,0,113,0,109,0,108,0,
19,5,23,65,28,0,80,0,97,0,114,0,97,0,109,0,
69,0,100,0,105,0,116,0,68,0,111,0,117,0,98,0,
108,0,101,0,46,0,113,0,109,0,108,0,16,6,184,151,
124,0,80,0,97,0,114,0,97,0,109,0,69,0,100,0,
105,0,116,0,111,0,114,0,115,0,46,0,113,0,109,0,
108,0,17,10,104,121,124,0,80,0,114,0,111,0,102,0,
105,0,108,0,101,0,69,0,100,0,105,0,116,0,111,0,
114,0,46,0,113,0,109,0,108,0,10,3,137,186,124,0,
80,0,112,0,109,0,77,0,97,0,112,0,46,0,113,0,
109,0,108,0,19,14,13,45,188,0,67,0,111,0,110,0,
102,0,105,0,103,0,80,0,97,0,103,0,101,0,77,0,
111,0,116,0,111,0,114,0,46,0,113,0,109,0,108,0,
12,1,33,221,124,0,70,0,119,0,85,0,112,0,100,0,
97,0,116,0,101,0,46,0,113,0,109,0,108,0,14,6,
230,180,156,0,86,0,101,0,115,0,99,0,51,0,68,0,
86,0,105,0,101,0,119,0,46,0,113,0,109,0,108,0,
12,15,223,34,60,0,83,0,101,0,116,0,116,0,105,0,
110,0,103,0,115,0,46,0,113,0,109,0,108,0,12,8,
56,238,60,0,80,0,114,0,111,0,102,0,105,0,108,0,
101,0,115,0,46,0,113,0,109,0,108,0,20,8,114,44,
60,0,83,0,101,0,116,0,117,0,112,0,87,0,105,0,
122,0,97,0,114,0,100,0,73,0,110,0,116,0,114,0,
111,0,46,0,113,0,109,0,108,0,19,0,219,99,252,0,
68,0,105,0,114,0,101,0,99,0,116,0,111,0,114,0,
121,0,80,0,105,0,99,0,107,0,101,0,114,0,46,0,
113,0,109,0,108,0,20,4,39,44,60,0,83,0,101,0,
116,0,117,0,112,0,87,0,105,0,122,0,97,0,114,0,
100,0,73,0,110,0,112,0,117,0,116,0,46,0,113,0,
109,0,108,0,22,8,173,195,28,0,80,0,97,0,114,0,
97,0,109,0,69,0,100,0,105,0,116,0,83,0,101,0,
112,0,97,0,114,0,97,0,116,0,111,0,114,0,46,0,
113,0,109,0,108,0,18,15,9,184,92,0,83,0,101,0,
116,0,117,0,112,0,87,0,105,0,122,0,97,0,114,0,
100,0,70,0,111,0,99,0,46,0,113,0,109,0,108,0,
17,6,214,64,60,0,67,0,111,0,110,0,102,0,105,0,
103,0,80,0,97,0,103,0,101,0,65,0,112,0,112,0,
46,0,113,0,109,0,108,0,17,13,18,34,60,0,68,0,
111,0,117,0,98,0,108,0,101,0,83,0,112,0,105,0,
110,0,66,0,111,0,120,0,46,0,113,0,109,0,108,0,
13,11,181,36,28,0,68,0,101,0,116,0,101,0,99,0,
116,0,73,0,77,0,85,0,46,0,113,0,109,0,108,0,
17,7,148,103,188,0,80,0,97,0,114,0,97,0,109,0,
69,0,100,0,105,0,116,0,69,0,110,0,117,0,109,0,
46,0,113,0,109,0,108,0,14,11,245,23,188,0,68,0,
101,0,116,0,101,0,99,0,116,0,66,0,108,0,100,0,
99,0,46,0,113,0,109,0,108,0,17,8,115,103,28,0,
80,0,97,0,114,0,97,0,109,0,69,0,100,0,105,0,
116,0,66,0,111,0,111,0,108,0,46,0,113,0,109,0,
108,0,19,1,94,107,92,0,80,0,97,0,114,0,97,0,
109,0,76,0,105,0,115,0,116,0,83,0,99,0,114,0,
111,0,108,0,108,0,46,0,113,0,109,0,108,0,8,8,
1,90,92,0,109,0,97,0,105,0,110,0,46,0,113,0,
109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _mobile_main_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ParamListScroll_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ParamEditBool_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_DetectBldc_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ParamEditEnum_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_DetectIMU_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_DoubleSpinBox_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ConfigPageApp_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_SetupWizardFoc_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ParamEditSeparator_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_SetupWizardInput_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_DirectoryPicker_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_SetupWizardIntro_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_Profiles_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_Settings_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_Vesc3DView_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_FwUpdate_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ConfigPageMotor_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_PpmMap_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ProfileEditor_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ParamEditors_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ParamEditDouble_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ParamList_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_Terminal_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_DetectFocEncoder_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ParamEditString_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ParamEditInt_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_DirectionSetup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ConnectBle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_FilePicker_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_AdcMap_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_PairingDialog_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_Controls_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_CustomGauge_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_RtData_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_ProfileDisplay_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_RtDataSetup_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_DetectFocHall_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_DetectFocParam_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _mobile_NrfPair_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/main.qml"), &QmlCacheGeneratedCode::_mobile_main_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ParamListScroll.qml"), &QmlCacheGeneratedCode::_mobile_ParamListScroll_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ParamEditBool.qml"), &QmlCacheGeneratedCode::_mobile_ParamEditBool_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/DetectBldc.qml"), &QmlCacheGeneratedCode::_mobile_DetectBldc_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ParamEditEnum.qml"), &QmlCacheGeneratedCode::_mobile_ParamEditEnum_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/DetectIMU.qml"), &QmlCacheGeneratedCode::_mobile_DetectIMU_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/DoubleSpinBox.qml"), &QmlCacheGeneratedCode::_mobile_DoubleSpinBox_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ConfigPageApp.qml"), &QmlCacheGeneratedCode::_mobile_ConfigPageApp_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/SetupWizardFoc.qml"), &QmlCacheGeneratedCode::_mobile_SetupWizardFoc_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ParamEditSeparator.qml"), &QmlCacheGeneratedCode::_mobile_ParamEditSeparator_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/SetupWizardInput.qml"), &QmlCacheGeneratedCode::_mobile_SetupWizardInput_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/DirectoryPicker.qml"), &QmlCacheGeneratedCode::_mobile_DirectoryPicker_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/SetupWizardIntro.qml"), &QmlCacheGeneratedCode::_mobile_SetupWizardIntro_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/Profiles.qml"), &QmlCacheGeneratedCode::_mobile_Profiles_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/Settings.qml"), &QmlCacheGeneratedCode::_mobile_Settings_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/Vesc3DView.qml"), &QmlCacheGeneratedCode::_mobile_Vesc3DView_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/FwUpdate.qml"), &QmlCacheGeneratedCode::_mobile_FwUpdate_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ConfigPageMotor.qml"), &QmlCacheGeneratedCode::_mobile_ConfigPageMotor_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/PpmMap.qml"), &QmlCacheGeneratedCode::_mobile_PpmMap_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ProfileEditor.qml"), &QmlCacheGeneratedCode::_mobile_ProfileEditor_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ParamEditors.qml"), &QmlCacheGeneratedCode::_mobile_ParamEditors_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ParamEditDouble.qml"), &QmlCacheGeneratedCode::_mobile_ParamEditDouble_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ParamList.qml"), &QmlCacheGeneratedCode::_mobile_ParamList_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/Terminal.qml"), &QmlCacheGeneratedCode::_mobile_Terminal_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/DetectFocEncoder.qml"), &QmlCacheGeneratedCode::_mobile_DetectFocEncoder_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ParamEditString.qml"), &QmlCacheGeneratedCode::_mobile_ParamEditString_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ParamEditInt.qml"), &QmlCacheGeneratedCode::_mobile_ParamEditInt_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/DirectionSetup.qml"), &QmlCacheGeneratedCode::_mobile_DirectionSetup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ConnectBle.qml"), &QmlCacheGeneratedCode::_mobile_ConnectBle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/FilePicker.qml"), &QmlCacheGeneratedCode::_mobile_FilePicker_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/AdcMap.qml"), &QmlCacheGeneratedCode::_mobile_AdcMap_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/PairingDialog.qml"), &QmlCacheGeneratedCode::_mobile_PairingDialog_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/Controls.qml"), &QmlCacheGeneratedCode::_mobile_Controls_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/CustomGauge.qml"), &QmlCacheGeneratedCode::_mobile_CustomGauge_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/RtData.qml"), &QmlCacheGeneratedCode::_mobile_RtData_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/ProfileDisplay.qml"), &QmlCacheGeneratedCode::_mobile_ProfileDisplay_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/RtDataSetup.qml"), &QmlCacheGeneratedCode::_mobile_RtDataSetup_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/DetectFocHall.qml"), &QmlCacheGeneratedCode::_mobile_DetectFocHall_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/DetectFocParam.qml"), &QmlCacheGeneratedCode::_mobile_DetectFocParam_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/mobile/NrfPair.qml"), &QmlCacheGeneratedCode::_mobile_NrfPair_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qml)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(mobile_qml_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qml))
int QT_MANGLE_NAMESPACE(qCleanupResources_qml)() {
    Q_CLEANUP_RESOURCE(mobile_qml_qmlcache);
    return 1;
}
