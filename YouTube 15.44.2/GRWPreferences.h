//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUserDefaults;

@interface GRWPreferences : NSObject
{
    NSUserDefaults *_sharedAppGroupDefaults;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *sharedAppGroupDefaults; // @synthesize sharedAppGroupDefaults=_sharedAppGroupDefaults;
- (id)objectWithExpectedClass:(Class)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 withExpectedClass:(Class)arg2 forKey:(id)arg3;
- (void)removeAllSharedAppGroupDefaults;
- (id)stringForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)dateForKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)keyIsPresentInDefaults:(id)arg1;
- (id)init;
- (id)lastPromptShownDateWithinBounds:(id)arg1;
- (void)setLastPromptShownDateToOneYearAgoForAllIntentTypes;
- (void)setLastPromptShownDateToOneYearAgoForAllApps;
- (void)resetCooldownPreferencesToDefault;
- (void)restoreCooldownPreferencesFromBackup:(id)arg1;
- (id)backUpCooldownPreferences;
- (id)allCooldownPreferencesKeys;
- (id)cooldownDurationKeyForApps;
- (id)lastPromptShownDateKeyForApps;
- (id)cooldownDurationKeyForIntentType:(int)arg1;
- (id)lastPromptShownDateKeyForIntentType:(int)arg1;
- (void)setLastPromptShownDateToDate:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setLastPromptShownDateToDate:(id)arg1 forIntentType:(int)arg2;
- (id)lastPromptShownDateForIntentType:(int)arg1;
- (void)setLastPromptShownDateToNowForIntentType:(int)arg1;
- (id)lastPromptShownDateForApp:(id)arg1;
- (void)setLastPromptShownDateToNowForApp:(id)arg1;
- (double)cooldownDurationForIntentType:(int)arg1;
- (void)setCooldownDuration:(double)arg1 forIntentType:(int)arg2;
- (double)cooldownDurationForApp:(id)arg1;
- (void)setCooldownDuration:(double)arg1 forApp:(id)arg2;
- (_Bool)isPendingIntentDictionaryValid:(id)arg1;
- (id)pendingIntentsDictionary;
- (void)removePendingIntentDictionaryForBundleID:(id)arg1;
- (id)pendingIntentDictionaryForBundleID:(id)arg1;
- (void)setPendingIntentDictionary:(id)arg1 forBundleID:(id)arg2;
- (void)resetAppPreferencesToDefaultForIntentType:(int)arg1;
- (void)resetAppPreferencesToDefault;
- (void)validateAppPreferences;
- (id)shouldPromptKeyForIntentType:(int)arg1;
- (id)preferredBundleIDKeyForIntentType:(int)arg1;
- (void)restoreAppPreferencesFromBackup:(id)arg1;
- (id)backUpAppPreferences;
- (id)allAppPreferencesKeys;
- (id)defaultAppForIntentType:(int)arg1;
- (void)validatePreferencesForIntentType:(int)arg1;
- (_Bool)preferenceForApp:(id)arg1 isValidForIntentType:(int)arg2;
- (void)populateLocationIntentPreferencesIfNeeded;
- (void)makeSystemAppsPreferredAndDisablePrompts;
- (_Bool)userHasSetPreferenceForIntentType:(int)arg1;
- (void)setShouldAskEveryTime:(_Bool)arg1 forIntentType:(int)arg2;
- (_Bool)shouldAskEveryTimeForIntentType:(int)arg1;
- (void)setPreferredApp:(id)arg1 forType:(int)arg2;
- (id)preferredAppForIntentType:(int)arg1;
- (id)appSwitchingPreferenceWithIntentType:(int)arg1;
@property(copy, nonatomic) NSString *lastSystemAppsListFetchLanguageCode;
@property(copy, nonatomic) NSString *lastSystemAppsListFetchCountryCodeLegacy;
@property(copy, nonatomic) NSString *lastSystemAppsListFetchCountryCode;
@property(retain, nonatomic) NSDate *lastSystemAppsListFetchDate;
@property(copy, nonatomic) NSString *lastAppsListFetchLanguageCode;
@property(copy, nonatomic) NSString *lastAppsListFetchCountryCodeLegacy;
@property(copy, nonatomic) NSString *lastAppsListFetchCountryCode;
@property(retain, nonatomic) NSDate *lastAppsListFetchDate;

@end

