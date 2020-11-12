//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplSnoozeApiInternalSnoozePresets-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, JBTLoggingUserActionRecorder, NSString;
@protocol JBTSettingsClient;

@interface ComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl : NSObject <ComGoogleAppsBigtopSyncClientImplSnoozeApiInternalSnoozePresets>
{
    id <JBTSettingsClient> settingsClient_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    JBTLoggingUserActionRecorder *userActionRecorder_;
}

+ (void)initialize;
- (void)dealloc;
- (void)getMorningPresetWithComGoogleAppsBigtopSyncClientImplCommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)getPeriodForPresetWithJBTSnoozePresets_SnoozePreset:(id)arg1;
- (id)toProto;
- (id)getTimeOfDayPresets;
- (void)getTimeOfDayPresetsWithComGoogleAppsBigtopSyncClientImplCommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)edit;
- (id)getPreloadedTimeOfDayPresets;
- (void)getTimeOfDayPresetsWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
