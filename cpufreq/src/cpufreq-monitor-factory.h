/*
 * MATE CPUFreq Applet
 * Copyright (C) 2004 Carlos Garcia Campos <carlosgc@gnome.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Authors : Carlos Garc�a Campos <carlosgc@gnome.org>
 */

#ifndef CPUFREQ_MONITOR_FACTORY_H
#define CPUFREQ_MONITOR_FACTORY_H

#include "cpufreq-monitor.h"

G_BEGIN_DECLS

CPUFreqMonitor *cpufreq_monitor_factory_create_monitor (guint cpu);

G_END_DECLS

#endif /* CPUFREQ_MONITOR_FACTORY_H */
