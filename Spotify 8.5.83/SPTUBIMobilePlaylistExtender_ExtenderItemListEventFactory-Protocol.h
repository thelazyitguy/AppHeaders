//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobilePlaylistExtender_ExtenderItemList_HeaderEventFactory, SPTUBIMobilePlaylistExtender_ExtenderItemList_ItemEventFactory, SPTUBIMobilePlaylistExtender_ExtenderItemList_RefreshButtonEventFactory;

@protocol SPTUBIMobilePlaylistExtender_ExtenderItemListEventFactory <NSObject>
- (id <SPTUBIMobilePlaylistExtender_ExtenderItemList_ItemEventFactory>)itemFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobilePlaylistExtender_ExtenderItemList_RefreshButtonEventFactory>)refreshButtonFactory;
- (id <SPTUBIMobilePlaylistExtender_ExtenderItemList_HeaderEventFactory>)headerFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

