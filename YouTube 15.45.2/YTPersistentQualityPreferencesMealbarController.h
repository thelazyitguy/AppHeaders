//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTHotConfigObserver-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTTimedAction, YTUserDefaults;
@protocol YTResponder;

@interface YTPersistentQualityPreferencesMealbarController : NSObject <YTResponder, YTHotConfigObserver>
{
    YTUserDefaults *_userDefaults;
    YTTimedAction *_mealbBarTimer;
    double _mealbarReminderWaitTime;
    _Bool _interactionLoggingEnabled;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)titleStringForPersistentVideoQuality:(int)arg1;
- (id)mealbarWithTitle:(id)arg1 message:(id)arg2 iconType:(int)arg3 mealbarVEType:(int)arg4 actionButtonText:(id)arg5 actionButtonVEType:(int)arg6 dismissButtonText:(id)arg7 dismissButtonVEType:(int)arg8;
- (id)persistentSettingMealbarReminder;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void)hotConfigDidChange:(id)arg1;
- (void)showQualityPreferencesReminderMealbarWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
