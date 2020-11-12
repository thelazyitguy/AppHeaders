//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileYourLibraryLikedSongs_ItemList_ItemEventFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTUBIEventAbsoluteLocation;

@interface SPTUBIMobileYourLibraryLikedSongs_ItemList_ItemEventFactoryImplementation : NSObject <SPTUBIMobileYourLibraryLikedSongs_ItemList_ItemEventFactory>
{
    NSArray *_components;
    id <SPTUBIEventAbsoluteLocation> _parentAbsoluteLocation;
}

+ (id)factoryWithPosition:(long long)arg1 uri:(id)arg2 reason:(id)arg3 components:(id)arg4 parentAbsoluteLocation:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIEventAbsoluteLocation> parentAbsoluteLocation; // @synthesize parentAbsoluteLocation=_parentAbsoluteLocation;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)swipeRemoveLikeWithItemNoLongerLiked:(id)arg1;
- (id)swipeAddItemToQueueWithItemToAddToQueue:(id)arg1;
- (id)swipeLikeWithItemToBeLiked:(id)arg1;
- (id)longHitUiReveal;
- (id)hitPlayWithItemToBePlayed:(id)arg1;
- (id)heartButtonFactory;
- (id)contextMenuButtonFactory;
- (id)absoluteLocation;
- (id)_location;
- (id)initWithPosition:(long long)arg1 uri:(id)arg2 reason:(id)arg3 components:(id)arg4 parentAbsoluteLocation:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
