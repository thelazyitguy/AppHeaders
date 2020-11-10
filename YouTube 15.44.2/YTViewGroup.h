//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YTViewGroup : NSObject
{
    NSArray *_groupViews;
}

+ (id)groupWithVisibleViewArray:(id)arg1;
+ (id)groupWithVisibleViews:(id)arg1;
+ (id)groupWithViews:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *groupViews; // @synthesize groupViews=_groupViews;
- (struct CGRect)positioningRectOfView:(id)arg1;
- (struct CGRect)boundingBox;
- (void)distributeViewsVerticallyLeadingAlignedWithPaddingY:(double)arg1;
- (void)distributeViewsVerticallyRightAlignedWithPaddingY:(double)arg1;
- (void)distributeViewsVerticallyLeftAlignedWithPaddingY:(double)arg1;
- (void)distributeViewsVerticallyWithPaddingY:(double)arg1;
- (void)distributeViewsHorizontallyTopAlignedWithPaddingX:(double)arg1;
- (void)distributeViewsHorizontallyWithPaddingX:(double)arg1;
- (void)distributeViewsHorizontallyWithWidth:(double)arg1;
- (void)centerVerticallyInRect:(struct CGRect)arg1 paddingX:(double)arg2 interItemSpacing:(double)arg3;
- (void)centerVerticallyInRect:(struct CGRect)arg1 paddingX:(double)arg2;
- (void)alignCenterToCenterOfRect:(struct CGRect)arg1;
- (void)alignCenterToCenterOfView:(id)arg1;
- (void)alignCenterBottomToCenterBottomOfView:(id)arg1 paddingY:(double)arg2;
- (void)alignCenterBottomToCenterTopOfView:(id)arg1 paddingY:(double)arg2;
- (void)alignCenterTopToCenterBottomOfView:(id)arg1 paddingY:(double)arg2;
- (void)alignCenterTopToCenterTopOfView:(id)arg1 paddingY:(double)arg2;
- (void)alignCenterRightToCenterLeftOfView:(id)arg1 paddingX:(double)arg2;
- (void)alignCenterRightToCenterRightOfView:(id)arg1 paddingX:(double)arg2;
- (void)alignCenterLeftToCenterLeftOfView:(id)arg1 paddingX:(double)arg2;
- (void)alignCenterLeftToCenterRightOfView:(id)arg1 paddingX:(double)arg2;
- (void)alignBottomRightToTopRightOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignBottomRightToBottomRightOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignBottomLeftToTopLeftOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignBottomLeftToBottomLeftOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopRightToBottomRightOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopRightToTopLeftOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopRightToTopRightOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopLeftToBottomLeftOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopLeftToTopRightOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopLeftToTopLeftOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignCenterTrailingToCenterLeadingOfView:(id)arg1 paddingX:(double)arg2;
- (void)alignCenterTrailingToCenterTrailingOfView:(id)arg1 paddingX:(double)arg2;
- (void)alignCenterLeadingToCenterLeadingOfView:(id)arg1 paddingX:(double)arg2;
- (void)alignCenterLeadingToCenterTrailingOfView:(id)arg1 paddingX:(double)arg2;
- (void)alignBottomTrailingToBottomTrailingOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignBottomLeadingToTopLeadingOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignBottomLeadingToBottomLeadingOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopTrailingToBottomTrailingOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopTrailingToTopLeadingOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopTrailingToTopTrailingOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopLeadingToBottomLeadingOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopLeadingToTopTrailingOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (void)alignTopLeadingToTopLeadingOfView:(id)arg1 paddingX:(double)arg2 paddingY:(double)arg3;
- (id)initWithViewArray:(id)arg1;

@end

