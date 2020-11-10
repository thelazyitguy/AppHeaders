//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIInteractionEvent, SPTUBIMobileNowPlayingViewVideoShow_BottomBarEventFactory, SPTUBIMobileNowPlayingViewVideoShow_MainControlsEventFactory, SPTUBIMobileNowPlayingViewVideoShow_PlaybackProgressEventFactory, SPTUBIMobileNowPlayingViewVideoShow_TopBarEventFactory, SPTUBIMobileNowPlayingViewVideoShow_TrackInformationEventFactory, SPTUBIMobileNowPlayingViewVideoShow_VideoEventFactory;

@protocol SPTUBIMobileNowPlayingViewVideoShowEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)swipeUiHide;
- (id <SPTUBIMobileNowPlayingViewVideoShow_BottomBarEventFactory>)bottomBarFactory;
- (id <SPTUBIMobileNowPlayingViewVideoShow_MainControlsEventFactory>)mainControlsFactory;
- (id <SPTUBIMobileNowPlayingViewVideoShow_PlaybackProgressEventFactory>)playbackProgressFactory;
- (id <SPTUBIMobileNowPlayingViewVideoShow_TrackInformationEventFactory>)trackInformationFactory;
- (id <SPTUBIMobileNowPlayingViewVideoShow_VideoEventFactory>)videoFactory;
- (id <SPTUBIMobileNowPlayingViewVideoShow_TopBarEventFactory>)topBarFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

