/*
 * Copyright 2013 Canonical Ltd.
 *
 * This file is part of webbrowser-app.
 *
 * webbrowser-app is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * webbrowser-app is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __SETTINGS_H__
#define __SETTINGS_H__

// Qt
#include <QtCore/QObject>
#include <QtCore/QUrl>

class SearchEngine;

/*
 * Temporary helper class for read-only settings
 * until Settings support lands in the SDK.
 */
class Settings : public QObject
{
    Q_OBJECT

public:
    Settings(QObject* parent=0);

    const QUrl& homepage() const;
    SearchEngine* searchEngine() const;

private:
    QUrl m_homepage;
    SearchEngine* m_searchengine;
};

#endif // __SETTINGS_H__
