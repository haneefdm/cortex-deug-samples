/*******************************************************************************
* File Name: cycfg_system.h
*
* Description:
* System configuration
* This file was automatically generated and should not be modified.
* 
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_SYSTEM_H)
#define CYCFG_SYSTEM_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#include "cy_syspm.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define cpuss_0_dap_0_ENABLED 1U
#define srss_0_clock_0_ENABLED 1U
#define srss_0_clock_0_fastclk_0_ENABLED 1U
#define srss_0_clock_0_fll_0_ENABLED 1U
#define srss_0_clock_0_hfclk_0_ENABLED 1U
#define CY_CFG_SYSCLK_CLKHF0 0UL
#define srss_0_clock_0_ilo_0_ENABLED 1U
#define srss_0_clock_0_imo_0_ENABLED 1U
#define srss_0_clock_0_lfclk_0_ENABLED 1U
#define CY_CFG_SYSCLK_CLKLF_FREQ_HZ 32000
#define srss_0_clock_0_pathmux_0_ENABLED 1U
#define srss_0_clock_0_pathmux_1_ENABLED 1U
#define srss_0_clock_0_pathmux_2_ENABLED 1U
#define srss_0_clock_0_pathmux_3_ENABLED 1U
#define srss_0_clock_0_pathmux_4_ENABLED 1U
#define srss_0_clock_0_periclk_0_ENABLED 1U
#define srss_0_clock_0_slowclk_0_ENABLED 1U
#define srss_0_power_0_ENABLED 1U
#define CY_CFG_PWR_VDDA_MV 3300
#define CY_CFG_PWR_VDDD_MV 3300
#define CY_CFG_PWR_VBACKUP_MV 3300
#define CY_CFG_PWR_VDD_NS_MV 3300
#define CY_CFG_PWR_VDDIO0_MV 3300
#define CY_CFG_PWR_VDDIO1_MV 3300

void init_cycfg_system(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_SYSTEM_H */