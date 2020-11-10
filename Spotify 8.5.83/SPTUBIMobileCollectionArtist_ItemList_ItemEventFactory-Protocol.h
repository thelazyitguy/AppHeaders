//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIInteractionEvent, SPTUBIMobileCollectionArtist_ItemList_Item_ContextMenuButtonEventFactory;

@protocol SPTUBIMobileCollectionArtist_ItemList_ItemEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)swipeAddItemToQueueWithItemToAddToQueue:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)swipeRemoveLikeWithItemNoLongerLiked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)swipeLikeWithItemToBeLiked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)longHitUiReveal;
- (id <SPTUBIInteractionEvent>)hitPlayWithItemToBePlayed:(NSURL *)arg1;
- (id <SPTUBIMobileCollectionArtist_ItemList_Item_ContextMenuButtonEventFactory>)contextMenuButtonFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

