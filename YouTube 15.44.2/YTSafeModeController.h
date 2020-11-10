//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTDebugCrashSafeModeProtocol-Protocol.h"
#import "YTHotConfigObserver-Protocol.h"
#import "YTUserDefaultsObserver-Protocol.h"

@class NSString, NSUserDefaults, YTUserDefaults;
@protocol YTInnerTubeSharedData;

@interface YTSafeModeController : NSObject <YTHotConfigObserver, YTUserDefaultsObserver, YTDebugCrashSafeModeProtocol>
{
    NSUserDefaults *_safeUserDefaults;
    YTUserDefaults *_appUserDefaults;
    void *_breakpad;
    NSObject<YTInnerTubeSharedData> *_innerTubeSharedData;
    _Bool _safeModeTriggered;
    unsigned long long _numCrashesInARow;
}

- (void).cxx_destruct;
- (id)whitelistedUserDefaultKeys;
- (id)configGroupKeys;
- (void)showErrorOccurredDialog;
- (void)deleteAllSettingsInUserDefaults:(id)arg1;
- (void)deleteConfigGroupsInUserDefaults:(id)arg1;
- (id)getPlatform;
- (void)transferInnerTubeSharedData:(id)arg1;
- (void)automaticallyEnableSafeMode;
- (void)setUserDefaultsConfigWithHotConfig:(id)arg1;
- (void)transferShouldSendCrashReportsFromAppUserDefaults:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)valueDidChangeForKey:(id)arg1;
- (void)hotConfigDidChange:(id)arg1;
- (void)sendFirstCrashReport;
- (void)stopBreakpad;
- (void)setupBreakpad;
- (void)logSafeModeWithEventLogger:(id)arg1;
- (void)transferValuesFromHotConfig:(id)arg1 appUserDefaults:(id)arg2 innerTubeSharedData:(id)arg3;
- (void)startupDidFinishNormallyWithColdConfig:(id)arg1;
- (void)setupAndCheckForCrashLoop;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

