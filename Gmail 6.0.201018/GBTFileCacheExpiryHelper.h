//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GBTFileCache, NSTimer;

@interface GBTFileCacheExpiryHelper : NSObject
{
    NSTimer *_expiryCheckTimer;
    GBTFileCache *_cache;
    double _maxTimeIntervalSinceCached;
    double _maxTimeIntervalSinceLastAccessed;
    double _runInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double runInterval; // @synthesize runInterval=_runInterval;
@property(nonatomic) double maxTimeIntervalSinceLastAccessed; // @synthesize maxTimeIntervalSinceLastAccessed=_maxTimeIntervalSinceLastAccessed;
@property(nonatomic) double maxTimeIntervalSinceCached; // @synthesize maxTimeIntervalSinceCached=_maxTimeIntervalSinceCached;
@property(readonly, nonatomic) GBTFileCache *cache; // @synthesize cache=_cache;
- (id)expiryCheckTimer;
- (void)expiryCheckTimerDidFire:(id)arg1;
- (void)scheduleNextExpiryCheckIfEnabled;
- (void)clearExpiryCheckTimer;
- (_Bool)isItemLastAccessedTooOld:(id)arg1 atDate:(id)arg2;
- (_Bool)isItemCachedDateTooOld:(id)arg1 atDate:(id)arg2;
- (void)runNow;
- (void)disable;
- (void)enableWithRunInterval:(double)arg1;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithCache:(id)arg1;

@end
