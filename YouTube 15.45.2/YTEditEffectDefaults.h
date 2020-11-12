//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>

@class GIMMe, NSMutableDictionary, NSString, NSUserDefaults;

@interface YTEditEffectDefaults : NSObject <YTSystemNotificationsObserver>
{
    NSUserDefaults *_defaults;
    NSMutableDictionary *_effectViewedStatuses;
    NSMutableDictionary *_effectIntensities;
    _Bool _isDefaultStartupEffectIDEnabled;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDefaultStartupEffectIDEnabled; // @synthesize isDefaultStartupEffectIDEnabled=_isDefaultStartupEffectIDEnabled;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)appWillResignActive:(id)arg1;
- (void)saveDictionaryToDefaults:(id)arg1 forKey:(id)arg2;
- (id)loadMutableDictionaryForKey:(id)arg1;
- (void)setEffectIntensity:(double)arg1 forEffectID:(id)arg2;
- (double)effectIntensityForEffectID:(id)arg1;
- (void)setViewedStatus:(long long)arg1 forEffectID:(id)arg2;
- (long long)viewedStatusForEffectID:(id)arg1;
- (id)startupEffectID;
- (void)setStartupEffectID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
