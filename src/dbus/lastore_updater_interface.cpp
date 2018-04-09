/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp com.deepin.lastore.updater.xml -p lastore_updater_interface -i dbus/dbusvariant/app_update_info.h -i dbus/dbusvariant/locale_mirror_source.h -c LastoreUpdaterInterface
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "lastore_updater_interface.h"

/*
 * Implementation of interface class LastoreUpdaterInterface
 */

LastoreUpdaterInterface::LastoreUpdaterInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

LastoreUpdaterInterface::~LastoreUpdaterInterface()
{
}

