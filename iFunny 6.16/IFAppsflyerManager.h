//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/AppsFlyerLibDelegate-Protocol.h>

@class AppsFlyerLib, NSString;

@interface IFAppsflyerManager : NSObject <AppsFlyerLibDelegate>
{
    _Bool _trackedConverionInfo;
    _Bool _trackerStarted;
    AppsFlyerLib *_appsFlyerLib;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AppsFlyerLib *appsFlyerLib; // @synthesize appsFlyerLib=_appsFlyerLib;
@property(nonatomic) _Bool trackerStarted; // @synthesize trackerStarted=_trackerStarted;
@property(nonatomic) _Bool trackedConverionInfo; // @synthesize trackedConverionInfo=_trackedConverionInfo;
- (void)onConversionDataRequestFailure:(id)arg1;
- (void)onConversionDataReceived:(id)arg1;
- (void)onConversionDataSuccess:(id)arg1;
- (void)onConversionDataFail:(id)arg1;
- (void)onAppOpenAttribution:(id)arg1;
@property(readonly, nonatomic) _Bool appsflyerDisabled;
- (_Bool)appsflyerDidTrackedToAPI;
- (void)trackAppsFlyerRetentionEvent;
- (void)trackEvent:(id)arg1 withValues:(id)arg2;
- (void)trackAppsflyerInfoWithParams:(id)arg1;
- (void)trackAppLaunch;
- (void)startIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
