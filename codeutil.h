#ifndef __CODEUTIL_H
#define __CODEUTIL_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LOOP 2

/*
参数1：待加密字符串
参数2：密码长度
参数3：加密后的字符串
参数4：参数3的长度
密码首字母不会是数字和特殊字符
*/

char* codeutil_password(const char* ,const char* ,char* ,size_t );
#endif
