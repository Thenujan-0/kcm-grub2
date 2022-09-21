/*******************************************************************************
 * Copyright (C) 2008-2013 Konstantinos Smanis <konstantinos.smanis@gmail.com> *
 *                                                                             *
 * This program is free software: you can redistribute it and/or modify it     *
 * under the terms of the GNU General Public License as published by the Free  *
 * Software Foundation, either version 3 of the License, or (at your option)   *
 * any later version.                                                          *
 *                                                                             *
 * This program is distributed in the hope that it will be useful, but WITHOUT *
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for    *
 * more details.                                                               *
 *                                                                             *
 * You should have received a copy of the GNU General Public License along     *
 * with this program. If not, see <http://www.gnu.org/licenses/>.              *
 *******************************************************************************/



//Qt
#include <QBitArray>

//KDE
#include <KCModule>

#include "grubdata.h"

namespace KAuth
{
    class ActionReply;
}
using namespace KAuth;


#pragma once

#include <KQuickAddons/ConfigModule>


class KCMGRUB2 : public KQuickAddons::ConfigModule
{
    Q_OBJECT

public:
    explicit KCMGRUB2(QObject *parent, const KPluginMetaData &data, const QVariantList &);
    ~KCMGRUB2() override;

    void load() override;
    void save() override;
    void defaults() override;


private:
    QHash <QString,QString> m_model;
};



