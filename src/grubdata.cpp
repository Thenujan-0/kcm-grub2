#include <grubdata.h>

#include <QDebug>
#include <QProcess>
#include <KConfig>
#include <QDir>
#include <QFile>
#include <KShell>
#include <QDebug>
#include <QQuickItem>
#include <QQuickRenderControl>
#include <QStandardPaths>
#include <QWindow>





GrubData::GrubData(QObject *parent)
    : QAbstractListModel(parent)
{
//      showMenu = true;
    GrubData::load();
    qWarning()<<"loaded everything";
    qWarning()<<m_osEntries;
}

