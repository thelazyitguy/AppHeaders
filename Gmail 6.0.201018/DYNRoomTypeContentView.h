//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class DYNRoomTypeCardView, MDCCard, NSArray;

@interface DYNRoomTypeContentView : GOOBaseContentView
{
    NSArray *_roomTypeViews;
    DYNRoomTypeCardView *_flatRoomTypeView;
    DYNRoomTypeCardView *_threadedRoomTypeView;
    DYNRoomTypeCardView *_postRoomTypeView;
    MDCCard *_containerView;
    DYNRoomTypeCardView *_selectedRoomTypeCard;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) DYNRoomTypeCardView *selectedRoomTypeCard; // @synthesize selectedRoomTypeCard=_selectedRoomTypeCard;
- (id)nextRoomCardView:(_Bool)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)updateViewWithObject:(id)arg1;
- (void)roomTypeSelected:(id)arg1;
- (void)roomTypeSelectedByUser:(id)arg1;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
