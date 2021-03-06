//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class CLLocation;

@protocol GCRGeolocationUpdater <NSObject>
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)setDesiredAccuracy:(double)arg1 distanceFilter:(double)arg2;
- (void)setUpdateInterval:(double)arg1;
- (void)setStopUpdateDelay:(double)arg1;
- (void)requestWhenInUseAuthorization;
- (CLLocation *)currentLocation;
@end

