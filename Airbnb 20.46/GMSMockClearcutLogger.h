//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSAnalyticsLogger-Protocol.h"

@class GMSClientParameters, NSMutableDictionary, NSString;
@protocol GMCSClock;

@interface GMSMockClearcutLogger : NSObject <GMSAnalyticsLogger>
{
    NSMutableDictionary *_logs;
    id <GMCSClock> _clock;
    _Bool _appInBackground;
    GMSClientParameters *_clientParameters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GMSClientParameters *clientParameters; // @synthesize clientParameters=_clientParameters;
@property(nonatomic, getter=isAppInBackground) _Bool appInBackground; // @synthesize appInBackground=_appInBackground;
- (void)incrementCounter:(id)arg1 dimensions:(id)arg2 bucket:(long long)arg3 amount:(long long)arg4;
- (void)stopLoggingAnonymously;
- (void)startLoggingAnonymously;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)logCounterOccurrence:(long long)arg1 bucket:(long long)arg2;
- (void)logCounterIncrement:(id)arg1 bucket:(long long)arg2 amount:(long long)arg3 dimensions:(id)arg4;
- (void)logElapsedTime:(long long)arg1 forCounterName:(id)arg2 frequency:(unsigned long long)arg3 dimensions:(id)arg4;
- (long long)elapsedTimeForCounter:(long long)arg1;
- (int)loggedBucketCountForCounterName:(id)arg1;
- (long long)loggedCountForCounterName:(id)arg1 bucket:(long long)arg2;
- (long long)loggedCountForCounter:(long long)arg1 bucket:(long long)arg2;
- (long long)loggedCountForCounterName:(id)arg1;
- (long long)loggedCountForCounter:(long long)arg1;
- (void)deleteLogsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)countersAsJSONObject;
@property(readonly, copy) NSString *description;
- (id)initWithClock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
