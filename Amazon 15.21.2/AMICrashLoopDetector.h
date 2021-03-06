//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMIEarlyCrashCriticalRegion, NSDate;

@interface AMICrashLoopDetector : NSObject
{
    double _recoveryModeTimePeriod;
    NSDate *_recoveryStartTime;
    AMIEarlyCrashCriticalRegion *_crashRegion;
}

+ (void)registerForWeblabCacheUpdate;
+ (void)startCrashDetectionWithLaunchOptions:(id)arg1 isBackgroundStart:(_Bool)arg2;
+ (_Bool)isInRecoveryMode;
+ (id)createCrashLoopDetector;
+ (id)_internalSharedInstance;
+ (id)internalSharedInstance;
@property(retain, nonatomic) AMIEarlyCrashCriticalRegion *crashRegion; // @synthesize crashRegion=_crashRegion;
@property(retain, nonatomic) NSDate *recoveryStartTime; // @synthesize recoveryStartTime=_recoveryStartTime;
@property(nonatomic) double recoveryModeTimePeriod; // @synthesize recoveryModeTimePeriod=_recoveryModeTimePeriod;
- (void).cxx_destruct;
- (void)checkToExitRecoveryMode;
- (id)initWithCrashRegion:(id)arg1 recoveryStartTime:(id)arg2;

@end

