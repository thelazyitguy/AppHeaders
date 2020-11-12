//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADEumBackgroundQueue, ADEumCollectorService, ADEumPersistentBeaconQueue;

@interface ADEumBeaconDispatcher : NSObject
{
    ADEumPersistentBeaconQueue *_beaconQueue;
    ADEumPersistentBeaconQueue *_crashBeaconQueue;
    ADEumCollectorService *_collectorService;
    ADEumBackgroundQueue *_dispatchQueue;
    int _failureTimes;
    _Bool _okayToSend;
    _Bool _suspended;
}

- (void).cxx_destruct;
- (void)disable;
- (void)resume;
- (void)setAppKey:(id)arg1;
- (void)setCollectorURL:(id)arg1;
- (int)getDelay;
- (void)setFailureTimes:(int)arg1;
- (int)getFailureTimes;
- (_Bool)sendBeaconsToCollector:(id)arg1;
- (void)flushBeaconsNow;
- (void)addOldBeaconsToQueue:(id)arg1;
- (void)addNewBeacon:(id)arg1;
- (id)queueForBeacon:(id)arg1;
- (id)initWithCollectorService:(id)arg1 beaconQueue:(id)arg2 crashBeaconQueue:(id)arg3 dispatchQueue:(id)arg4;
- (id)init;

@end
