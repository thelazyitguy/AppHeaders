//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileNowPlayingViewFreetier_MainControls_BanButtonEventFactory, SPTUBIMobileNowPlayingViewFreetier_MainControls_HeartButtonEventFactory, SPTUBIMobileNowPlayingViewFreetier_MainControls_PlayButtonEventFactory, SPTUBIMobileNowPlayingViewFreetier_MainControls_SkipNextButtonEventFactory, SPTUBIMobileNowPlayingViewFreetier_MainControls_SkipPreviousButtonEventFactory;

@protocol SPTUBIMobileNowPlayingViewFreetier_MainControlsEventFactory <NSObject>
- (id <SPTUBIMobileNowPlayingViewFreetier_MainControls_BanButtonEventFactory>)banButtonFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_MainControls_SkipNextButtonEventFactory>)skipNextButtonFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_MainControls_PlayButtonEventFactory>)playButtonFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_MainControls_SkipPreviousButtonEventFactory>)skipPreviousButtonFactory;
- (id <SPTUBIMobileNowPlayingViewFreetier_MainControls_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

