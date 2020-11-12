//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDKCacheStatistics : NSObject
{
    unsigned long long _maximumCacheSize;
    unsigned long long _currentCacheSize;
    unsigned long long _currentItemCount;
    unsigned long long _lifetimeEvictedCount;
    unsigned long long _lifetimeHitCount;
    unsigned long long _lifetimeMissCount;
}

@property(readonly, nonatomic) unsigned long long lifetimeMissCount; // @synthesize lifetimeMissCount=_lifetimeMissCount;
@property(readonly, nonatomic) unsigned long long lifetimeHitCount; // @synthesize lifetimeHitCount=_lifetimeHitCount;
@property(readonly, nonatomic) unsigned long long lifetimeEvictedCount; // @synthesize lifetimeEvictedCount=_lifetimeEvictedCount;
@property(readonly, nonatomic) unsigned long long currentItemCount; // @synthesize currentItemCount=_currentItemCount;
@property(readonly, nonatomic) unsigned long long currentCacheSize; // @synthesize currentCacheSize=_currentCacheSize;
@property(readonly, nonatomic) unsigned long long maximumCacheSize; // @synthesize maximumCacheSize=_maximumCacheSize;
- (id)description;
- (id)initWithMaximimCacheSize:(unsigned long long)arg1 currentCacheSize:(unsigned long long)arg2 currentItemCount:(unsigned long long)arg3 lifetimeEvictedCount:(unsigned long long)arg4 lifetimeHitCount:(unsigned long long)arg5 lifetimeMissCount:(unsigned long long)arg6;

@end
