//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTSwipeableTableViewCell.h"

#import "CacheableHeightForNugget-Protocol.h"
#import "ContactHandler-Protocol.h"
#import "GBTCellBackViewDelegate-Protocol.h"
#import "GBTCellFrontViewDelegate-Protocol.h"
#import "GBTSwipeable-Protocol.h"
#import "GBTThumbnailSupport-Protocol.h"
#import "NIRecyclableView-Protocol.h"

@class CardCarouselView, GBTSmartMailInteractionForwarder, NSArray, NSString;
@protocol GBTSmartMailInteractionSupport, GBTSwipeableDelegate;

@interface ThreadCell : GBTSwipeableTableViewCell <GBTCellBackViewDelegate, GBTCellFrontViewDelegate, CacheableHeightForNugget, ContactHandler, NIRecyclableView, GBTSwipeable, GBTThumbnailSupport>
{
    GBTSmartMailInteractionForwarder *_forwarder;
    id <GBTSwipeableDelegate> _swipeableDelegate;
}

+ (double)heightForObject:(id)arg1 width:(double)arg2;
+ (_Bool)requiresCacheForDifferentWidthsWithNugget:(id)arg1;
+ (_Bool)hasCacheableHeightForNugget:(id)arg1;
+ (Class)backViewClass;
+ (Class)frontViewClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GBTSwipeableDelegate> swipeableDelegate; // @synthesize swipeableDelegate=_swipeableDelegate;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (void)updateAvatar;
- (struct CGRect)selectFrame;
@property(copy, nonatomic) NSArray *swipeActions;
- (id)cellFrontViewParentVisualElement:(id)arg1;
- (void)cellFrontView:(id)arg1 didInvokeAction:(unsigned long long)arg2;
- (void)cellBackView:(id)arg1 didInvokeAction:(unsigned long long)arg2;
@property(nonatomic) __weak id <GBTSmartMailInteractionSupport> smartMailDelegate;
- (void)updateWithNugget:(id)arg1 parentVisualElement:(id)arg2;
@property(readonly, nonatomic) CardCarouselView *cardCarouselView;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *reuseIdentifier;
@property(readonly) Class superclass;

@end
