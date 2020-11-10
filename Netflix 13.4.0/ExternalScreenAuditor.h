//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RebuildableKeyValueTable;
@protocol AppleNativeStorage, OS_dispatch_queue;

@interface ExternalScreenAuditor : NSObject
{
    _Bool _needsDelayedReset;
    id <AppleNativeStorage> _storage;
    RebuildableKeyValueTable *_storageTable;
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _externalPlaybackDayThreshold;
    long long _internalPlaybackCountThreshold;
}

+ (id)internalKey;
+ (id)externalKey;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsDelayedReset; // @synthesize needsDelayedReset=_needsDelayedReset;
@property(nonatomic) long long internalPlaybackCountThreshold; // @synthesize internalPlaybackCountThreshold=_internalPlaybackCountThreshold;
@property(nonatomic) long long externalPlaybackDayThreshold; // @synthesize externalPlaybackDayThreshold=_externalPlaybackDayThreshold;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) RebuildableKeyValueTable *storageTable; // @synthesize storageTable=_storageTable;
@property(retain, nonatomic) id <AppleNativeStorage> storage; // @synthesize storage=_storage;
- (void)reset;
- (_Bool)isExternalPlaybackLikely;
- (long long)playsSinceExternalPlayback;
- (long long)daysSinceExternalPlayback;
- (void)recordInternalScreenPlayback;
- (void)recordExternalScreenPlayback;
- (void)setConfiguration:(id)arg1;
- (void)_performDelayedReset;
- (id)init;

@end

