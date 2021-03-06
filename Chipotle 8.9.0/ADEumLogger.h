//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADEumBeaconBuilder, ADEumBeaconDispatcher, NSString;

@interface ADEumLogger : NSObject
{
    NSString *_appKey;
    ADEumBeaconDispatcher *_beaconDispatcher;
    long long _logInterval;
    long long _lastLoggedTime;
    int _numDroppedMessages;
    ADEumBeaconBuilder *_beaconBuilder;
}

- (void).cxx_destruct;
- (void)logExternalCrashReport:(id)arg1 crashInfo:(id)arg2;
- (void)logCrashReport:(id)arg1 stackFrames:(id)arg2 context:(id)arg3;
- (void)logMessage:(id)arg1 exception:(id)arg2;
- (void)logMessage:(id)arg1;
- (id)initWithAppKey:(id)arg1 beaconDispatcher:(id)arg2 logInterval:(long long)arg3 beaconBuilder:(id)arg4;

@end

