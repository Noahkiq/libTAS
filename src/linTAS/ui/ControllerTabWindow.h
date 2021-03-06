/*
    Copyright 2015-2018 Clément Gallet <clement.gallet@ens-lyon.org>

    This file is part of libTAS.

    libTAS is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libTAS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with libTAS.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LINTAS_CONTROLLERTABWINDOW_H_INCLUDED
#define LINTAS_CONTROLLERTABWINDOW_H_INCLUDED

#include <QDialog>
#include <QCheckBox>
#include <QSpinBox>
#include <QSlider>

#include "ControllerWidget.h"
#include "../Context.h"
#include "../../shared/AllInputs.h"

class ControllerTabWindow : public QDialog {
    Q_OBJECT

public:
    ControllerTabWindow(Context *c, QWidget *parent = Q_NULLPTR);

    ControllerWidget *controllers[AllInputs::MAXJOYS];
    Context *context;

protected:
    void keyPressEvent(QKeyEvent *e);
    void keyReleaseEvent(QKeyEvent *e);

public slots:
    void slotButtonToggle(int id, int button, bool pressed);
    void slotSetInputs(AllInputs &ai);

};

#endif
