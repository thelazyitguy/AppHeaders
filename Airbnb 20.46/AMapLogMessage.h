//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSDate, NSString;

@interface AMapLogMessage : NSObject <NSCopying>
{
    _Bool _backGround;
    NSString *_message;
    unsigned long long _level;
    NSString *_file;
    NSString *_fileName;
    NSString *_function;
    unsigned long long _line;
    NSString *_tag;
    NSString *_timestamp;
    NSString *_threadID;
    NSString *_threadName;
    NSString *_queueLabel;
    NSString *_componentName;
    NSString *_componentProduct;
    NSString *_componentVersion;
    NSDate *_time;
    NSString *_session;
    NSString *_net;
}

+ (id)logStringWithDictionary:(id)arg1 encrypted:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool backGround; // @synthesize backGround=_backGround;
@property(copy, nonatomic) NSString *net; // @synthesize net=_net;
@property(copy, nonatomic) NSString *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, copy, nonatomic) NSString *componentVersion; // @synthesize componentVersion=_componentVersion;
@property(readonly, copy, nonatomic) NSString *componentProduct; // @synthesize componentProduct=_componentProduct;
@property(readonly, copy, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property(readonly, copy, nonatomic) NSString *queueLabel; // @synthesize queueLabel=_queueLabel;
@property(readonly, copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(readonly, copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) unsigned long long line; // @synthesize line=_line;
@property(readonly, copy, nonatomic) NSString *function; // @synthesize function=_function;
@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *completeInformation;
@property(readonly, copy, nonatomic) NSString *levelStr;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyObject:(id)arg1;
- (id)initWithMessage:(id)arg1 component:(id)arg2 level:(unsigned long long)arg3 file:(id)arg4 function:(id)arg5 line:(unsigned long long)arg6 session:(id)arg7 date:(id)arg8;
- (id)init;
@property(readonly, nonatomic) NSString *ignoreRule;
@property(readonly, nonatomic) NSData *rawData;
@property(readonly, nonatomic) NSString *rawStr;
@property(readonly, nonatomic) NSString *logMessage;
@property(readonly, nonatomic) NSString *encrytStr;
@property(readonly, nonatomic) NSData *encryptData;

@end

