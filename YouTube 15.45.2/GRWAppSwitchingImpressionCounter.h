//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface GRWAppSwitchingImpressionCounter : NSObject
{
    NSUserDefaults *_sharedAppGroupDefaults;
    NSUserDefaults *_standardDefaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *standardDefaults; // @synthesize standardDefaults=_standardDefaults;
@property(retain, nonatomic) NSUserDefaults *sharedAppGroupDefaults; // @synthesize sharedAppGroupDefaults=_sharedAppGroupDefaults;
- (id)userDefaultsKeyForCountsWithApp:(id)arg1;
- (void)resetAllAppsCountForApp:(id)arg1;
- (long long)allAppsCountForApp:(id)arg1;
- (void)resetAppCountForApp:(id)arg1;
- (_Bool)hasReachedMaxAppImpressionsForApp:(id)arg1;
- (long long)appCountForApp:(id)arg1;
- (void)incrementCountForApp:(id)arg1;
- (_Bool)shouldEnableImpressionCapping;
- (id)initWithStandardDefaults:(id)arg1 sharedAppGroupDefaults:(id)arg2;
- (id)init;

@end

