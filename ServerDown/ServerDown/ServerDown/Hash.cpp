﻿#include "Hash.h"

Hash::Hash(HashType type)
{
	m_type = type;
	switch (type)
	{
	case HashType::T_MD5:
		md5Init();
		break;
	case HashType::T_SHA1:
		sha1Init();
		break;
	case HashType::T_SHA224:
		sha224Init();
		break;
	case HashType::T_SHA256:
		sha256Init();
		break;
	case HashType::T_SHA384:
		sha384Init();
		break;
	case HashType::T_SHA512:
		sha512Init();
		break;
	default:
		md5Init();
		break;
	}
}

void Hash::addData(string data)
{
	switch (m_type)
	{
	case HashType::T_MD5:
		md5AddData(data.data());
		break;
	case HashType::T_SHA1:
		sha1AddData(data.data());
		break;
	case HashType::T_SHA224:
		sha224AddData(data.data());
		break;
	case HashType::T_SHA256:
		sha256AddData(data.data());
		break;
	case HashType::T_SHA384:
		sha384AddData(data.data());
		break;
	case HashType::T_SHA512:
		sha512AddData(data.data());
		break;
	default:
		md5AddData(data.data());
		break;
	}
}

string Hash::result()
{
	string result = string();
	switch (m_type)
	{
	case HashType::T_MD5:
		result = md5Result();
		break;
	case HashType::T_SHA1:
		result = sha1Result();
		break;
	case HashType::T_SHA224:
		result = sha224Result();
		break;
	case HashType::T_SHA256:
		result = sha256Result();
		break;
	case HashType::T_SHA384:
		result = sha384Result();
		break;
	case HashType::T_SHA512:
		result = sha512Result();
		break;
	default:
		result = md5Result();
		break;
	}
	return result;
}

string Hash::md5Result()
{
	unsigned char md[MD5_DIGEST_LENGTH];
	char res[MD5_DIGEST_LENGTH * 2 + 1];		//一个字节转化为16进制表达
	MD5_Final(md, &m_md5);
	for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
	{
		sprintf(&res[i * 2], "%02x", md[i]);
	}
	return string(res, MD5_DIGEST_LENGTH * 2 + 1);
}

string Hash::sha1Result()
{
	unsigned char md[SHA_DIGEST_LENGTH];
	char res[SHA_DIGEST_LENGTH * 2 + 1];
	SHA1_Final(md, &m_sha1);
	for (int i = 0; i < SHA_DIGEST_LENGTH; ++i)
	{
		sprintf(&res[i * 2], "%02x", md[i]);
	}
	return string(res, SHA_DIGEST_LENGTH * 2 + 1);
}

string Hash::sha224Result()
{
	unsigned char md[SHA224_DIGEST_LENGTH];
	char res[SHA224_DIGEST_LENGTH * 2 + 1];
	SHA224_Final(md, &m_sha224);
	for (int i = 0; i < SHA224_DIGEST_LENGTH; ++i)
	{
		sprintf(&res[i * 2], "%02x", md[i]);
	}
	return string(res, SHA224_DIGEST_LENGTH * 2 + 1);
}

string Hash::sha256Result()
{
	unsigned char md[SHA256_DIGEST_LENGTH];
	char res[SHA256_DIGEST_LENGTH * 2 + 1];
	SHA256_Final(md, &m_sha256);
	for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i)
	{
		sprintf(&res[i * 2], "%02x", md[i]);
	}
	return string(res, SHA256_DIGEST_LENGTH * 2 + 1);
}

string Hash::sha384Result()
{
	unsigned char md[SHA384_DIGEST_LENGTH];
	char res[SHA384_DIGEST_LENGTH * 2 + 1];
	SHA384_Final(md, &m_sha384);
	for (int i = 0; i < SHA384_DIGEST_LENGTH; ++i)
	{
		sprintf(&res[i * 2], "%02x", md[i]);
	}
	return string(res, SHA384_DIGEST_LENGTH * 2 + 1);
}

string Hash::sha512Result()
{
	unsigned char md[SHA512_DIGEST_LENGTH];
	char res[SHA512_DIGEST_LENGTH * 2 + 1];
	SHA512_Final(md, &m_sha512);
	for (int i = 0; i < SHA512_DIGEST_LENGTH; ++i)
	{
		sprintf(&res[i * 2], "%02x", md[i]);
	}
	return string(res, SHA512_DIGEST_LENGTH * 2 + 1);
}
