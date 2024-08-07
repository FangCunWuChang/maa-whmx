/* Copyright 2024 周上行Ryer

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#pragma once

#include <QtCore/QString>
#include <QtCore/QList>

int           min_edit_distance(const QString &src, const QString &dst);
QList<double> softmax(const QList<double> &vec);
int           choice(const QList<double> &weights);
int           choice(int min_index, int max_index);
QList<int>    multi_choice(int n, int min_index, int max_index);
double        eval_color_distance(const int (&lhs_rgb)[3], const int (&rhs_rgb)[3]);
