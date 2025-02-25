/*
 *  NASA Docket No. GSC-18,370-1, and identified as "Operating System Abstraction Layer"
 *
 *  Copyright (c) 2019 United States Government as represented by
 *  the Administrator of the National Aeronautics and Space Administration.
 *  All Rights Reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/**
 * \file
 * \ingroup  adaptors
 * \author   joseph.p.hickey@nasa.gov
 *
 */

/* pull in the OSAL configuration */
#include "osconfig.h"
#include "ut-adaptor-binsem.h"

#include "os-vxworks.h"
#include "os-impl-binsem.h"

void *const  UT_Ref_OS_impl_bin_sem_table      = OS_impl_bin_sem_table;
size_t const UT_Ref_OS_impl_bin_sem_table_SIZE = sizeof(OS_impl_bin_sem_table);

const UT_EntryKey_t UT_StubKey_GenericSemTake = UT_KEY(OS_VxWorks_GenericSemTake);
const UT_EntryKey_t UT_StubKey_GenericSemGive = UT_KEY(OS_VxWorks_GenericSemGive);

int32 UT_Call_OS_VxWorks_BinSemAPI_Impl_Init(void)
{
    return OS_VxWorks_BinSemAPI_Impl_Init();
}
