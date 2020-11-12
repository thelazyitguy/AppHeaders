//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLLog.h"

@class CLDeviceInfo, NSString;

@interface CLShanYanContentLog : CLLog
{
    _Bool _needAccumulate;
    CLDeviceInfo *_devideInfo;
    NSString *_clDB_DID;
    NSString *_clDB_sdkMode;
    NSString *_clDB_osVersion;
    NSString *_clDB_romVersion;
    NSString *_clDB_sdkVersion;
    NSString *_clDB_uuid;
    NSString *_clDB_ip;
    NSString *_clDB_network;
    NSString *_clDB_dbm;
    NSString *_clDB_wifidbm;
    NSString *_clDB_processName;
    NSString *_clDB_method;
    NSString *_clDB_beginTime;
    NSString *_clDB_costTime;
    NSString *_clDB_stepTime;
    NSString *_clDB_status;
    NSString *_clDB_resCode;
    NSString *_clDB_resDesc;
    NSString *_clDB_innerCode;
    NSString *_clDB_innerDesc;
    NSString *_clDB_telcom;
    NSString *_clDB_count;
    NSString *_clDB_sid;
}

@property(copy, nonatomic) NSString *clDB_sid; // @synthesize clDB_sid=_clDB_sid;
@property _Bool needAccumulate; // @synthesize needAccumulate=_needAccumulate;
@property(copy, nonatomic) NSString *clDB_count; // @synthesize clDB_count=_clDB_count;
@property(copy, nonatomic) NSString *clDB_telcom; // @synthesize clDB_telcom=_clDB_telcom;
@property(copy, nonatomic) NSString *clDB_innerDesc; // @synthesize clDB_innerDesc=_clDB_innerDesc;
@property(copy, nonatomic) NSString *clDB_innerCode; // @synthesize clDB_innerCode=_clDB_innerCode;
@property(copy, nonatomic) NSString *clDB_resDesc; // @synthesize clDB_resDesc=_clDB_resDesc;
@property(copy, nonatomic) NSString *clDB_resCode; // @synthesize clDB_resCode=_clDB_resCode;
@property(copy, nonatomic) NSString *clDB_status; // @synthesize clDB_status=_clDB_status;
@property(copy, nonatomic) NSString *clDB_stepTime; // @synthesize clDB_stepTime=_clDB_stepTime;
@property(copy, nonatomic) NSString *clDB_costTime; // @synthesize clDB_costTime=_clDB_costTime;
@property(copy, nonatomic) NSString *clDB_beginTime; // @synthesize clDB_beginTime=_clDB_beginTime;
@property(copy, nonatomic) NSString *clDB_method; // @synthesize clDB_method=_clDB_method;
@property(copy, nonatomic) NSString *clDB_processName; // @synthesize clDB_processName=_clDB_processName;
@property(copy, nonatomic) NSString *clDB_wifidbm; // @synthesize clDB_wifidbm=_clDB_wifidbm;
@property(copy, nonatomic) NSString *clDB_dbm; // @synthesize clDB_dbm=_clDB_dbm;
@property(copy, nonatomic) NSString *clDB_network; // @synthesize clDB_network=_clDB_network;
@property(copy, nonatomic) NSString *clDB_ip; // @synthesize clDB_ip=_clDB_ip;
@property(copy, nonatomic) NSString *clDB_uuid; // @synthesize clDB_uuid=_clDB_uuid;
@property(copy, nonatomic) NSString *clDB_sdkVersion; // @synthesize clDB_sdkVersion=_clDB_sdkVersion;
@property(copy, nonatomic) NSString *clDB_romVersion; // @synthesize clDB_romVersion=_clDB_romVersion;
@property(copy, nonatomic) NSString *clDB_osVersion; // @synthesize clDB_osVersion=_clDB_osVersion;
@property(copy, nonatomic) NSString *clDB_sdkMode; // @synthesize clDB_sdkMode=_clDB_sdkMode;
@property(copy) NSString *clDB_DID; // @synthesize clDB_DID=_clDB_DID;
@property(retain) CLDeviceInfo *devideInfo; // @synthesize devideInfo=_devideInfo;
- (void).cxx_destruct;
- (id)init;

@end
