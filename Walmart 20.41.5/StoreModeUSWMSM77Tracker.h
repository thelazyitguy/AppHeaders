//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WMAniviaEvent;

@interface StoreModeUSWMSM77Tracker : NSObject
{
    unsigned long long _storeStatus;
    NSString *_storeId;
    double _storeDistance;
    double _locationAccuracy;
    WMAniviaEvent *_lastUSWMSM77Event;
    StoreModeUSWMSM77Tracker *_previousTracker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreModeUSWMSM77Tracker *previousTracker; // @synthesize previousTracker=_previousTracker;
@property(retain, nonatomic) WMAniviaEvent *lastUSWMSM77Event; // @synthesize lastUSWMSM77Event=_lastUSWMSM77Event;
@property(nonatomic) double locationAccuracy; // @synthesize locationAccuracy=_locationAccuracy;
@property(nonatomic) double storeDistance; // @synthesize storeDistance=_storeDistance;
@property(retain, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(nonatomic) unsigned long long storeStatus; // @synthesize storeStatus=_storeStatus;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)p_trackIfWithinTimeFrameWithStoreStatus:(unsigned long long)arg1 storeId:(id)arg2 storeDistance:(double)arg3 locationAccuracy:(double)arg4;
- (double)timeSinceTrack;
- (void)p_resetTrackDate;
@property(readonly, nonatomic) NSDate *trackDate;
- (void)trackWithStoreStatus:(unsigned long long)arg1 storeId:(id)arg2 storeDistance:(double)arg3 locationAccuracy:(double)arg4;

@end

