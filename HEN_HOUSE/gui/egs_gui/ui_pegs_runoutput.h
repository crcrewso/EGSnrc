/*

###############################################################################
#
#  EGSnrc user interface for egs_gui run output
#  Copyright (C) 2015 National Research Council Canada
#
#  This file is part of EGSnrc.
#
#  EGSnrc is free software: you can redistribute it and/or modify it under
#  the terms of the GNU Affero General Public License as published by the
#  Free Software Foundation, either version 3 of the License, or (at your
#  option) any later version.
#
#  EGSnrc is distributed in the hope that it will be useful, but WITHOUT ANY
#  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
#  FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for
#  more details.
#
#  You should have received a copy of the GNU Affero General Public License
#  along with EGSnrc. If not, see http://www.gnu.org/licenses/.
#
###############################################################################
#
#  Author:          Iwan Kawrakow, 2003
#
#  Contributors:    Ernesto Mainegra-Hing
#
###############################################################################

*/

/********************************************************************************
** Form generated from reading UI file 'pegs_runoutput.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEGS_RUNOUTPUT_H
#define UI_PEGS_RUNOUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PEGS_RunOutput
{
public:
    QVBoxLayout *vboxLayout;
    QTextEdit *run_output;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacer6;
    QPushButton *pushButton8;

    void setupUi(QWidget *PEGS_RunOutput)
    {
        if (PEGS_RunOutput->objectName().isEmpty())
            PEGS_RunOutput->setObjectName(QString::fromUtf8("PEGS_RunOutput"));
        PEGS_RunOutput->resize(592, 663);
        vboxLayout = new QVBoxLayout(PEGS_RunOutput);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        run_output = new QTextEdit(PEGS_RunOutput);
        run_output->setObjectName(QString::fromUtf8("run_output"));

        vboxLayout->addWidget(run_output);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacer6 = new QSpacerItem(396, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer6);

        pushButton8 = new QPushButton(PEGS_RunOutput);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));

        hboxLayout->addWidget(pushButton8);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(PEGS_RunOutput);
        QObject::connect(pushButton8, SIGNAL(clicked()), PEGS_RunOutput, SLOT(hideWindow()));

        QMetaObject::connectSlotsByName(PEGS_RunOutput);
    } // setupUi

    void retranslateUi(QWidget *PEGS_RunOutput)
    {
        PEGS_RunOutput->setWindowTitle(QCoreApplication::translate("PEGS_RunOutput", "PEGS Output", nullptr));
        pushButton8->setText(QCoreApplication::translate("PEGS_RunOutput", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PEGS_RunOutput: public Ui_PEGS_RunOutput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEGS_RUNOUTPUT_H
