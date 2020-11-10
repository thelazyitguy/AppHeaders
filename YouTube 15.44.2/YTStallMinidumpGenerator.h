//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTStallObserver-Protocol.h>

@class GoogleBreakpadController, NSDictionary, NSString, YTClientSamplerGate, YTIStallDetectorSettings, YTUserDefaults;

@interface YTStallMinidumpGenerator : NSObject <YTStallObserver>
{
    GoogleBreakpadController *_breakpadController;
    YTUserDefaults *_userDefaults;
    _Bool _alreadyGeneratedMinidumpForCurrentStall;
    unsigned long long _minidumpsGenerated;
    YTIStallDetectorSettings *_stallSettings;
    YTClientSamplerGate *_clientSamplerGate;
    _Bool _wasStallDetected;
    NSDictionary *_minidumpFileNames;
}

- (void).cxx_destruct;
@property _Bool wasStallDetected; // @synthesize wasStallDetected=_wasStallDetected;
@property(retain, nonatomic) NSDictionary *minidumpFileNames; // @synthesize minidumpFileNames=_minidumpFileNames;
- (id)breakpad:(void *)arg1 generateReportAndPauseThreadsWithParameters:(id)arg2;
- (id)breakpad:(void *)arg1 generateReportWithParameters:(id)arg2;
- (void)removeUploadParameterWithKey:(id)arg1 breakpadRef:(void *)arg2;
- (void)addUploadParameterValue:(id)arg1 forKey:(id)arg2 withBreakpadRef:(void *)arg3;
- (void)removeParameterWithKey:(id)arg1 breakpadRef:(void *)arg2;
- (void)setParameterValue:(id)arg1 forKey:(id)arg2 withBreakpadRef:(void *)arg3;
- (void)generateReportWithBreakpad:(void *)arg1 parameters:(id)arg2;
- (id)parameterValueForKey:(id)arg1 withBreakpadRef:(void *)arg2;
- (void)appDidRecover;
- (void)stallDetectedWithApplicationState:(long long)arg1;
- (void)generateMinidumpWithApplicationState:(long long)arg1;
- (void)maybeStartStallMinidumpGenerator;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

