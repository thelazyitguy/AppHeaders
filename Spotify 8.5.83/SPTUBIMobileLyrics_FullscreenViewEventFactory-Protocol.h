//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIImpressionEvent, SPTUBIMobileLyrics_FullscreenView_ContextMenuEventFactory, SPTUBIMobileLyrics_FullscreenView_FooterViewEventFactory, SPTUBIMobileLyrics_FullscreenView_HeaderViewEventFactory, SPTUBIMobileLyrics_FullscreenView_LyricsViewEventFactory, SPTUBIMobileLyrics_FullscreenView_ReportBannerEventFactory;

@protocol SPTUBIMobileLyrics_FullscreenViewEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileLyrics_FullscreenView_ContextMenuEventFactory>)contextMenuFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_FooterViewEventFactory>)footerViewFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_LyricsViewEventFactory>)lyricsViewFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_HeaderViewEventFactory>)headerViewFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_ReportBannerEventFactory>)reportBannerFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

