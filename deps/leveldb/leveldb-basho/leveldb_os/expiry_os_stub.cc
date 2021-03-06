// -------------------------------------------------------------------
//
// expiry_os_stub.cc
//
// Copyright (c) 2016 Basho Technologies, Inc. All Rights Reserved.
//
// This file is provided to you under the Apache License,
// Version 2.0 (the "License"); you may not use this file
// except in compliance with the License.  You may obtain
// a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
// -------------------------------------------------------------------

#include "db/dbformat.h"
#include "leveldb/expiry.h"
#include "util/expiry_os.h"

namespace leveldb {

/**
 * This is the factory function to create
 *  an open source version of object expiry
 */
ExpiryModule *
ExpiryModule::CreateExpiryModule()
{

    return(new leveldb::ExpiryModuleOS);

}   // ExpiryModule::CreateExpiryModule()

}  // namespace leveldb
