/*

###############################################################################
#
#  EGSnrc user interface for egs_gui pegs page
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
** Form generated from reading UI file 'pegs_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEGS_PAGE_H
#define UI_PEGS_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EGS_PegsPage
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox6;
    QVBoxLayout *verticalLayout;
    QTableWidget *composition_table;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox11;
    QHBoxLayout *hboxLayout;
    QLineEdit *medname_le;
    QHBoxLayout *hboxLayout1;
    QGroupBox *groupBox8;
    QHBoxLayout *hboxLayout2;
    QComboBox *medtype_cbox;
    QGroupBox *rho_group;
    QHBoxLayout *hboxLayout3;
    QLineEdit *rho_le;
    QComboBox *comboBox2;
    QGroupBox *groupBox3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *dc_icru_check;
    QCheckBox *rad_icru_check;
    QCheckBox *rayleigh_check;
    QHBoxLayout *horizontalLayout;
    QCheckBox *is_gas;
    QSpacerItem *horizontalSpacer;
    QLabel *gaspLabel;
    QLineEdit *gaspEdit;
    QLabel *gaspUnits;
    QSpacerItem *spacer5;
    QGroupBox *dc_group;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel5;
    QComboBox *dc_where;
    QLineEdit *dc_file;
    QPushButton *dc_button;
    QGroupBox *groupBox5;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout5;
    QLabel *textLabel1;
    QLineEdit *ae_le;
    QComboBox *ae_units;
    QHBoxLayout *hboxLayout6;
    QLabel *textLabel2;
    QLineEdit *ap_le;
    QComboBox *ap_units;
    QHBoxLayout *hboxLayout7;
    QLabel *textLabel3;
    QLineEdit *ue_le;
    QComboBox *ue_units;
    QHBoxLayout *hboxLayout8;
    QLabel *textLabel4;
    QLineEdit *up_le;
    QComboBox *up_units;
    QGroupBox *groupBox10;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout9;
    QCheckBox *new_data_file;
    QSpacerItem *spacer2;
    QCheckBox *append_to_datafile;
    QSpacerItem *spacer3;
    QHBoxLayout *hboxLayout10;
    QLabel *textLabel6;
    QLineEdit *ofile_le;
    QPushButton *ofile_b;
    QHBoxLayout *hboxLayout11;
    QSpacerItem *spacer4;
    QPushButton *go_button;
    QPushButton *cancel_button;
    QPushButton *details_b;

    void setupUi(QWidget *EGS_PegsPage)
    {
        if (EGS_PegsPage->objectName().isEmpty())
            EGS_PegsPage->setObjectName(QString::fromUtf8("EGS_PegsPage"));
        EGS_PegsPage->setEnabled(true);
        EGS_PegsPage->resize(1886, 710);
        verticalLayout_5 = new QVBoxLayout(EGS_PegsPage);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox6 = new QGroupBox(EGS_PegsPage);
        groupBox6->setObjectName(QString::fromUtf8("groupBox6"));
        groupBox6->setMinimumSize(QSize(261, 281));
        verticalLayout = new QVBoxLayout(groupBox6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        composition_table = new QTableWidget(groupBox6);
        if (composition_table->columnCount() < 2)
            composition_table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        composition_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        composition_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (composition_table->rowCount() < 20)
            composition_table->setRowCount(20);
        composition_table->setObjectName(QString::fromUtf8("composition_table"));
        composition_table->setRowCount(20);
        composition_table->setColumnCount(2);

        verticalLayout->addWidget(composition_table);


        horizontalLayout_2->addWidget(groupBox6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox11 = new QGroupBox(EGS_PegsPage);
        groupBox11->setObjectName(QString::fromUtf8("groupBox11"));
        hboxLayout = new QHBoxLayout(groupBox11);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        medname_le = new QLineEdit(groupBox11);
        medname_le->setObjectName(QString::fromUtf8("medname_le"));

        hboxLayout->addWidget(medname_le);


        verticalLayout_4->addWidget(groupBox11);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        groupBox8 = new QGroupBox(EGS_PegsPage);
        groupBox8->setObjectName(QString::fromUtf8("groupBox8"));
        hboxLayout2 = new QHBoxLayout(groupBox8);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(11, 11, 11, 11);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        medtype_cbox = new QComboBox(groupBox8);
        medtype_cbox->addItem(QString());
        medtype_cbox->addItem(QString());
        medtype_cbox->addItem(QString());
        medtype_cbox->setObjectName(QString::fromUtf8("medtype_cbox"));
        medtype_cbox->setEnabled(false);

        hboxLayout2->addWidget(medtype_cbox);


        hboxLayout1->addWidget(groupBox8);

        rho_group = new QGroupBox(EGS_PegsPage);
        rho_group->setObjectName(QString::fromUtf8("rho_group"));
        rho_group->setEnabled(false);
        hboxLayout3 = new QHBoxLayout(rho_group);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(11, 11, 11, 11);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        rho_le = new QLineEdit(rho_group);
        rho_le->setObjectName(QString::fromUtf8("rho_le"));

        hboxLayout3->addWidget(rho_le);

        comboBox2 = new QComboBox(rho_group);
        comboBox2->addItem(QString());
        comboBox2->addItem(QString());
        comboBox2->setObjectName(QString::fromUtf8("comboBox2"));

        hboxLayout3->addWidget(comboBox2);


        hboxLayout1->addWidget(rho_group);


        verticalLayout_4->addLayout(hboxLayout1);

        groupBox3 = new QGroupBox(EGS_PegsPage);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        verticalLayout_3 = new QVBoxLayout(groupBox3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        dc_icru_check = new QCheckBox(groupBox3);
        dc_icru_check->setObjectName(QString::fromUtf8("dc_icru_check"));
        dc_icru_check->setChecked(true);

        verticalLayout_2->addWidget(dc_icru_check);

        rad_icru_check = new QCheckBox(groupBox3);
        rad_icru_check->setObjectName(QString::fromUtf8("rad_icru_check"));
        rad_icru_check->setChecked(true);

        verticalLayout_2->addWidget(rad_icru_check);

        rayleigh_check = new QCheckBox(groupBox3);
        rayleigh_check->setObjectName(QString::fromUtf8("rayleigh_check"));
        rayleigh_check->setChecked(true);

        verticalLayout_2->addWidget(rayleigh_check);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        is_gas = new QCheckBox(groupBox3);
        is_gas->setObjectName(QString::fromUtf8("is_gas"));

        horizontalLayout->addWidget(is_gas);

        horizontalSpacer = new QSpacerItem(9, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gaspLabel = new QLabel(groupBox3);
        gaspLabel->setObjectName(QString::fromUtf8("gaspLabel"));

        horizontalLayout->addWidget(gaspLabel);

        gaspEdit = new QLineEdit(groupBox3);
        gaspEdit->setObjectName(QString::fromUtf8("gaspEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gaspEdit->sizePolicy().hasHeightForWidth());
        gaspEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(gaspEdit);

        gaspUnits = new QLabel(groupBox3);
        gaspUnits->setObjectName(QString::fromUtf8("gaspUnits"));

        horizontalLayout->addWidget(gaspUnits);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(groupBox3);

        spacer5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(spacer5);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        dc_group = new QGroupBox(EGS_PegsPage);
        dc_group->setObjectName(QString::fromUtf8("dc_group"));
        hboxLayout4 = new QHBoxLayout(dc_group);
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(11, 11, 11, 11);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        textLabel5 = new QLabel(dc_group);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
        textLabel5->setWordWrap(false);

        hboxLayout4->addWidget(textLabel5);

        dc_where = new QComboBox(dc_group);
        dc_where->addItem(QString());
        dc_where->addItem(QString());
        dc_where->setObjectName(QString::fromUtf8("dc_where"));

        hboxLayout4->addWidget(dc_where);

        dc_file = new QLineEdit(dc_group);
        dc_file->setObjectName(QString::fromUtf8("dc_file"));

        hboxLayout4->addWidget(dc_file);

        dc_button = new QPushButton(dc_group);
        dc_button->setObjectName(QString::fromUtf8("dc_button"));

        hboxLayout4->addWidget(dc_button);


        verticalLayout_5->addWidget(dc_group);

        groupBox5 = new QGroupBox(EGS_PegsPage);
        groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
        gridLayout = new QGridLayout(groupBox5);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        textLabel1 = new QLabel(groupBox5);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout5->addWidget(textLabel1);

        ae_le = new QLineEdit(groupBox5);
        ae_le->setObjectName(QString::fromUtf8("ae_le"));

        hboxLayout5->addWidget(ae_le);

        ae_units = new QComboBox(groupBox5);
        ae_units->addItem(QString());
        ae_units->addItem(QString());
        ae_units->setObjectName(QString::fromUtf8("ae_units"));

        hboxLayout5->addWidget(ae_units);


        gridLayout->addLayout(hboxLayout5, 0, 0, 1, 1);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setSpacing(6);
        hboxLayout6->setObjectName(QString::fromUtf8("hboxLayout6"));
        textLabel2 = new QLabel(groupBox5);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setWordWrap(false);

        hboxLayout6->addWidget(textLabel2);

        ap_le = new QLineEdit(groupBox5);
        ap_le->setObjectName(QString::fromUtf8("ap_le"));

        hboxLayout6->addWidget(ap_le);

        ap_units = new QComboBox(groupBox5);
        ap_units->addItem(QString());
        ap_units->addItem(QString());
        ap_units->setObjectName(QString::fromUtf8("ap_units"));

        hboxLayout6->addWidget(ap_units);


        gridLayout->addLayout(hboxLayout6, 1, 0, 1, 1);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setObjectName(QString::fromUtf8("hboxLayout7"));
        textLabel3 = new QLabel(groupBox5);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        hboxLayout7->addWidget(textLabel3);

        ue_le = new QLineEdit(groupBox5);
        ue_le->setObjectName(QString::fromUtf8("ue_le"));

        hboxLayout7->addWidget(ue_le);

        ue_units = new QComboBox(groupBox5);
        ue_units->addItem(QString());
        ue_units->addItem(QString());
        ue_units->addItem(QString());
        ue_units->setObjectName(QString::fromUtf8("ue_units"));

        hboxLayout7->addWidget(ue_units);


        gridLayout->addLayout(hboxLayout7, 0, 1, 1, 1);

        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setObjectName(QString::fromUtf8("hboxLayout8"));
        textLabel4 = new QLabel(groupBox5);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        textLabel4->setWordWrap(false);

        hboxLayout8->addWidget(textLabel4);

        up_le = new QLineEdit(groupBox5);
        up_le->setObjectName(QString::fromUtf8("up_le"));

        hboxLayout8->addWidget(up_le);

        up_units = new QComboBox(groupBox5);
        up_units->addItem(QString());
        up_units->addItem(QString());
        up_units->addItem(QString());
        up_units->setObjectName(QString::fromUtf8("up_units"));

        hboxLayout8->addWidget(up_units);


        gridLayout->addLayout(hboxLayout8, 1, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox5);

        groupBox10 = new QGroupBox(EGS_PegsPage);
        groupBox10->setObjectName(QString::fromUtf8("groupBox10"));
        vboxLayout = new QVBoxLayout(groupBox10);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(6);
        hboxLayout9->setObjectName(QString::fromUtf8("hboxLayout9"));
        new_data_file = new QCheckBox(groupBox10);
        new_data_file->setObjectName(QString::fromUtf8("new_data_file"));

        hboxLayout9->addWidget(new_data_file);

        spacer2 = new QSpacerItem(85, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacer2);

        append_to_datafile = new QCheckBox(groupBox10);
        append_to_datafile->setObjectName(QString::fromUtf8("append_to_datafile"));

        hboxLayout9->addWidget(append_to_datafile);

        spacer3 = new QSpacerItem(84, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(spacer3);


        vboxLayout->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setObjectName(QString::fromUtf8("hboxLayout10"));
        textLabel6 = new QLabel(groupBox10);
        textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
        textLabel6->setWordWrap(false);

        hboxLayout10->addWidget(textLabel6);

        ofile_le = new QLineEdit(groupBox10);
        ofile_le->setObjectName(QString::fromUtf8("ofile_le"));

        hboxLayout10->addWidget(ofile_le);

        ofile_b = new QPushButton(groupBox10);
        ofile_b->setObjectName(QString::fromUtf8("ofile_b"));

        hboxLayout10->addWidget(ofile_b);


        vboxLayout->addLayout(hboxLayout10);


        verticalLayout_5->addWidget(groupBox10);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(6);
        hboxLayout11->setObjectName(QString::fromUtf8("hboxLayout11"));
        spacer4 = new QSpacerItem(330, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout11->addItem(spacer4);

        go_button = new QPushButton(EGS_PegsPage);
        go_button->setObjectName(QString::fromUtf8("go_button"));

        hboxLayout11->addWidget(go_button);

        cancel_button = new QPushButton(EGS_PegsPage);
        cancel_button->setObjectName(QString::fromUtf8("cancel_button"));

        hboxLayout11->addWidget(cancel_button);

        details_b = new QPushButton(EGS_PegsPage);
        details_b->setObjectName(QString::fromUtf8("details_b"));

        hboxLayout11->addWidget(details_b);


        verticalLayout_5->addLayout(hboxLayout11);


        retranslateUi(EGS_PegsPage);
        QObject::connect(dc_icru_check, SIGNAL(toggled(bool)), EGS_PegsPage, SLOT(densityIcruChanged(bool)));
        QObject::connect(medtype_cbox, SIGNAL(activated(QString)), EGS_PegsPage, SLOT(medtypeChanged(QString)));
        QObject::connect(dc_button, SIGNAL(clicked()), EGS_PegsPage, SLOT(getDensityFile()));
        QObject::connect(details_b, SIGNAL(clicked()), EGS_PegsPage, SLOT(showHideDetails()));
        QObject::connect(is_gas, SIGNAL(toggled(bool)), EGS_PegsPage, SLOT(enable_gaspEdit()));

        QMetaObject::connectSlotsByName(EGS_PegsPage);
    } // setupUi

    void retranslateUi(QWidget *EGS_PegsPage)
    {
        EGS_PegsPage->setWindowTitle(QCoreApplication::translate("EGS_PegsPage", "Form1", nullptr));
        groupBox6->setTitle(QCoreApplication::translate("EGS_PegsPage", "Medium composition", nullptr));
        QTableWidgetItem *___qtablewidgetitem = composition_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("EGS_PegsPage", "Element", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = composition_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("EGS_PegsPage", "Fraction by weight", nullptr));
        groupBox11->setTitle(QCoreApplication::translate("EGS_PegsPage", "Medium name", nullptr));
        groupBox8->setTitle(QCoreApplication::translate("EGS_PegsPage", "Medium type", nullptr));
        medtype_cbox->setItemText(0, QCoreApplication::translate("EGS_PegsPage", "Element", nullptr));
        medtype_cbox->setItemText(1, QCoreApplication::translate("EGS_PegsPage", "Compound", nullptr));
        medtype_cbox->setItemText(2, QCoreApplication::translate("EGS_PegsPage", "Mixture", nullptr));

        rho_group->setTitle(QCoreApplication::translate("EGS_PegsPage", "Mass density", nullptr));
        comboBox2->setItemText(0, QCoreApplication::translate("EGS_PegsPage", "g/cm**3", nullptr));
        comboBox2->setItemText(1, QCoreApplication::translate("EGS_PegsPage", "kg/m**3", nullptr));

        groupBox3->setTitle(QCoreApplication::translate("EGS_PegsPage", "Options", nullptr));
        dc_icru_check->setText(QCoreApplication::translate("EGS_PegsPage", "ICRU density correction", nullptr));
        rad_icru_check->setText(QCoreApplication::translate("EGS_PegsPage", "ICRU radiative stopping power", nullptr));
        rayleigh_check->setText(QCoreApplication::translate("EGS_PegsPage", "Include Rayleigh data", nullptr));
        is_gas->setText(QCoreApplication::translate("EGS_PegsPage", "Medium is a gas", nullptr));
        gaspLabel->setText(QCoreApplication::translate("EGS_PegsPage", "gas pressure", nullptr));
        gaspUnits->setText(QCoreApplication::translate("EGS_PegsPage", "atm", nullptr));
        dc_group->setTitle(QCoreApplication::translate("EGS_PegsPage", "Density correction file", nullptr));
        textLabel5->setText(QCoreApplication::translate("EGS_PegsPage", "Look in", nullptr));
        dc_where->setItemText(0, QCoreApplication::translate("EGS_PegsPage", "HEN_HOUSE", nullptr));
        dc_where->setItemText(1, QCoreApplication::translate("EGS_PegsPage", "EGS_HOME", nullptr));

        dc_button->setText(QCoreApplication::translate("EGS_PegsPage", "...", nullptr));
        groupBox5->setTitle(QCoreApplication::translate("EGS_PegsPage", "Energy range", nullptr));
        textLabel1->setText(QCoreApplication::translate("EGS_PegsPage", "AE", nullptr));
        ae_units->setItemText(0, QCoreApplication::translate("EGS_PegsPage", "keV", nullptr));
        ae_units->setItemText(1, QCoreApplication::translate("EGS_PegsPage", "MeV", nullptr));

        textLabel2->setText(QCoreApplication::translate("EGS_PegsPage", "AP", nullptr));
        ap_units->setItemText(0, QCoreApplication::translate("EGS_PegsPage", "keV", nullptr));
        ap_units->setItemText(1, QCoreApplication::translate("EGS_PegsPage", "MeV", nullptr));

        textLabel3->setText(QCoreApplication::translate("EGS_PegsPage", "UE", nullptr));
        ue_units->setItemText(0, QCoreApplication::translate("EGS_PegsPage", "keV", nullptr));
        ue_units->setItemText(1, QCoreApplication::translate("EGS_PegsPage", "MeV", nullptr));
        ue_units->setItemText(2, QCoreApplication::translate("EGS_PegsPage", "GeV", nullptr));

        textLabel4->setText(QCoreApplication::translate("EGS_PegsPage", "UP", nullptr));
        up_units->setItemText(0, QCoreApplication::translate("EGS_PegsPage", "keV", nullptr));
        up_units->setItemText(1, QCoreApplication::translate("EGS_PegsPage", "MeV", nullptr));
        up_units->setItemText(2, QCoreApplication::translate("EGS_PegsPage", "GeV", nullptr));

        groupBox10->setTitle(QCoreApplication::translate("EGS_PegsPage", "PEGS Output", nullptr));
        new_data_file->setText(QCoreApplication::translate("EGS_PegsPage", "Create new data file", nullptr));
        append_to_datafile->setText(QCoreApplication::translate("EGS_PegsPage", "Append to existing data file", nullptr));
        textLabel6->setText(QCoreApplication::translate("EGS_PegsPage", "Output file", nullptr));
        ofile_b->setText(QCoreApplication::translate("EGS_PegsPage", "...", nullptr));
        go_button->setText(QCoreApplication::translate("EGS_PegsPage", "&Go", nullptr));
        cancel_button->setText(QCoreApplication::translate("EGS_PegsPage", "&Cancel", nullptr));
        details_b->setText(QCoreApplication::translate("EGS_PegsPage", "&Details>>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EGS_PegsPage: public Ui_EGS_PegsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEGS_PAGE_H
