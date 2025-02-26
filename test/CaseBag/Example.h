/***********************************************************************************
This file is part of Test Project for MaratonMaster
For the latest info, see  https://github.com/Yhgenomics/MaratonMaster.git

Copyright 2016 Yhgenomics

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
***********************************************************************************/

/***********************************************************************************
* Description   : An example on the way test cases organized.
* Creator       : Ke Yang(keyang@yhgenomics.com)
* Date          : 2016/2/25
* Modifed       : When      | Who       | What
***********************************************************************************/

#ifndef EXAMPLE_H_
#define EXAMPLE_H_

#include "gtest.h"

// Assert if 1 equals to 1
TEST( exampleCase , test1 )
{
    ASSERT_EQ( 1 , 1 );
}

// Assert if 1 not equals to 0
TEST( exampleCase , test2 )
{
    ASSERT_NE( 1 , 0 );
}

#endif //!EXAMPLE_H_