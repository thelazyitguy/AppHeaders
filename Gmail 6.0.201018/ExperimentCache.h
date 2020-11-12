//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ExperimentCache : NSObject
{
}

+ (id)sharedExperimentCache;
- (id)description;
- (id)stableIdForExperimentKey:(unsigned long long)arg1;
- (id)settingsKeyForKey:(unsigned long long)arg1 forAccount:(id)arg2;
- (id)keyForExperimentIdsForAccount:(id)arg1;
- (id)prefixWithEmailAddress:(id)arg1;
- (void)clearCachesNotFoundInActiveEmailAddresses:(id)arg1;
- (void)clearCacheForAccount:(id)arg1;
- (id)enabledExperimentIdsForAccount:(id)arg1;
- (void)setEnabledExperimentIds:(id)arg1 forAccount:(id)arg2;
- (_Bool)canCacheForKey:(unsigned long long)arg1;
- (id)numberForKey:(unsigned long long)arg1 forAccount:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(unsigned long long)arg2 forAccount:(id)arg3;

@end
