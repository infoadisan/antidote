/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */
/*
 * \file pmstore_req.h
 * \brief PMStore request struct definitions
 *
 * Copyright (C) 2011 Signove Tecnologia Corporation.
 * All rights reserved.
 * Contact: Signove Tecnologia Corporation (contact@signove.com)
 *
 * $LICENSE_TEXT:BEGIN$
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation and appearing
 * in the file LICENSE included in the packaging of this file; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 * $LICENSE_TEXT:END$
 *
 * \date Oct 19, 2011
 * \author Elvis Pfutzenreuter
 */

#ifndef PMSTORE_REQ_H_
#define PMSTORE_REQ_H_

#include <communication/service.h>

typedef struct PMStoreGetRet {
	request_ret_data_free del_function;
	int handle;
	int response;
} PMStoreGetRet;

typedef struct PMStoreGetSegmDataRet {
	request_ret_data_free del_function;
	int handle;
	int inst;
	int response; 
} PMStoreGetSegmDataRet;

typedef struct PMStoreGetSegmInfoRet {
	request_ret_data_free del_function;
	int handle;
	int response;
} PMStoreGetSegmInfoRet;

typedef struct PMStoreClearSegmRet {
	request_ret_data_free del_function;
	int handle;
	int inst;
	int response;
	SegmSelection segm_selection;
} PMStoreClearSegmRet;

#endif /* PMSTORE_REQ_H_ */
