//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIImpressionEvent, SPTUBIInteractionEvent, SPTUBIMobileAssistedCurationSearch_Content_OnlineResults_TopResults_ResultItem_AlbumCoverEventFactory;

@protocol SPTUBIMobileAssistedCurationSearch_Content_OnlineResults_TopResults_ResultItemEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitAddItemToQueueWithItemToAddToQueue:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitLikeWithItemToBeLiked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitAddToPlaylistWithPlaylist:(NSURL *)arg1 itemToBeAdded:(NSURL *)arg2;
- (id <SPTUBIInteractionEvent>)hitUiNavigateWithDestination:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitPauseWithItemToBePaused:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitPlayPreviewWithItemToBePreviewed:(NSURL *)arg1;
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileAssistedCurationSearch_Content_OnlineResults_TopResults_ResultItem_AlbumCoverEventFactory>)albumCoverFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end
