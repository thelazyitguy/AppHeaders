//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTDrivingModeController, SPTNowPlayingMode, SPTNowPlayingModeResolverObserver;

@protocol SPTNowPlayingModeResolver <NSObject>
@property(readonly, nonatomic) id <SPTNowPlayingMode> mode;
- (void)removeObserver:(id <SPTNowPlayingModeResolverObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingModeResolverObserver>)arg1;
- (void)updateDrivingModeController:(id <SPTDrivingModeController>)arg1;
@end

