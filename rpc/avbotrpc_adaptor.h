/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -v org.avplayer.avbot.xml -a avbotrpc_adaptor -i dbusrpc.hpp
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef AVBOTRPC_ADAPTOR_H_1426187128
#define AVBOTRPC_ADAPTOR_H_1426187128

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "dbusrpc.hpp"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.avplayer.avbot
 */
class AvbotAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.avplayer.avbot")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.avplayer.avbot\">\n"
"    <method name=\"quiet\"/>\n"
"    <signal name=\"account_added\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"account_type\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"account_name\"/>\n"
"    </signal>\n"
"    <signal name=\"account_status_changed\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"account_type\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"account_name\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"change_reason\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"account_name\"/>\n"
"    </signal>\n"
"    <method name=\"search\">\n"
"      <arg direction=\"out\" type=\"(ia(sssss)d)\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"searchstring\"/>\n"
"      <annotation value=\"SearchResult\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    AvbotAdaptor(QObject *parent);
    virtual ~AvbotAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void quiet();
    SearchResult search(const QString &searchstring);
Q_SIGNALS: // SIGNALS
    void account_added(const QString &account_type, const QString &account_name);
    void account_status_changed(const QString &account_type, const QString &account_name, const QString &change_reason, const QString &account_name_);
};

#endif
