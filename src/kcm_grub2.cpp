/*
    SPDX-License-Identifier: GPL-2.0-or-later
    SPDX-FileCopyrightText: %{CURRENT_YEAR} %{AUTHOR} <%{EMAIL}>
*/

#include <QApplication>
#include <QQmlApplicationEngine>
#include <QUrl>
#include <QtQml>

#include <KAboutData>
#include <KLocalizedContext>
#include <KLocalizedString>


#include "kcm_grub2.h"



#include <KPluginFactory>

K_PLUGIN_CLASS_WITH_JSON(KCMGRUB2, "kcm_grub2.json")

KCMGRUB2::KCMGRUB2(QObject *parent, const KPluginMetaData &data, const QVariantList &)
    : KQuickAddons::ConfigModule(parent, data)
    
{
    setButtons(Help);

    qmlRegisterUncreatableType<GrubData>("org.kde.plasma.kcm.grub", 1, 0, "GrubData", QStringLiteral("Only for enums"));
}

// GrubSettings *KCMGRUB2::grubSettings() const{
//     return m
// }

KCMGRUB2::~KCMGRUB2()
{
}

// KCMGRUB2Model *KCMGRUB2::model() const
// {
//     return m_model;
// }

void KCMGRUB2::load()
{
    // m_model->load();
}

void KCMGRUB2::defaults()
{
}

void KCMGRUB2::save()
{
}

#include "kcm_grub2.moc"

