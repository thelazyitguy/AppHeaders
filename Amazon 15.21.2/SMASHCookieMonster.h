//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMASHCookieMonster : NSObject
{
    _Bool _userCookieIsCorruptedForThisInstance;
    unsigned long long _signInLoopInterval;
    unsigned long long _userSignedInTimestamp;
    long long _signInAttemptCounter;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool userCookieIsCorruptedForThisInstance; // @synthesize userCookieIsCorruptedForThisInstance=_userCookieIsCorruptedForThisInstance;
@property(nonatomic) long long signInAttemptCounter; // @synthesize signInAttemptCounter=_signInAttemptCounter;
@property(nonatomic) unsigned long long userSignedInTimestamp; // @synthesize userSignedInTimestamp=_userSignedInTimestamp;
@property(nonatomic) unsigned long long signInLoopInterval; // @synthesize signInLoopInterval=_signInLoopInterval;
- (void)logCounterWithServiceName:(id)arg1 methodName:(id)arg2 metricName:(id)arg3 value:(double)arg4;
- (long long)signInLoopCounterWithIncrement;
- (void)logSignInLoopMetrics;
- (void)scheduleLogging;
- (void)userSignedIn;
- (_Bool)userCookieIsCorrupted;
- (void)signalUserCookieIsCorrupted;
- (void)dealloc;
- (id)initWithSignInLoopInterval:(unsigned long long)arg1;

@end
