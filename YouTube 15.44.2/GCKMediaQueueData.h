//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/NSSecureCoding-Protocol.h>

@class GCKMediaQueueContainerMetadata, NSArray, NSString;

@interface GCKMediaQueueData : NSObject <NSCopying, NSSecureCoding>
{
    long long _queueType;
    NSString *_queueID;
    NSString *_name;
    NSString *_entity;
    long long _repeatMode;
    GCKMediaQueueContainerMetadata *_containerMetadata;
    unsigned long long _startIndex;
    double _startTime;
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
+ (id)queueDataWithJSONObject:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(readonly, copy, nonatomic) GCKMediaQueueContainerMetadata *containerMetadata; // @synthesize containerMetadata=_containerMetadata;
@property(readonly, nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(readonly, copy, nonatomic) NSString *entity; // @synthesize entity=_entity;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *queueID; // @synthesize queueID=_queueID;
@property(readonly, nonatomic) long long queueType; // @synthesize queueType=_queueType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithQueueType:(long long)arg1 items:(id)arg2 queueID:(id)arg3 entity:(id)arg4 name:(id)arg5 repeatMode:(long long)arg6 startIndex:(unsigned long long)arg7 startTime:(double)arg8 containerMetadata:(id)arg9;

@end

