//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, UISegmentedControl;

@interface DDCollectionReusableSegmentedControlView : UICollectionReusableView
{
    UISegmentedControl *_segmentedControl;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_bottomSpacingConstraint;
    NSLayoutConstraint *_topSpacingConstraint;
    NSLayoutConstraint *_rightSpacingConstraint;
    NSLayoutConstraint *_leftSpacingConstraint;
}

+ (id)nib;
- (void).cxx_destruct;
@property(nonatomic) NSLayoutConstraint *leftSpacingConstraint; // @synthesize leftSpacingConstraint=_leftSpacingConstraint;
@property(nonatomic) NSLayoutConstraint *rightSpacingConstraint; // @synthesize rightSpacingConstraint=_rightSpacingConstraint;
@property(nonatomic) NSLayoutConstraint *topSpacingConstraint; // @synthesize topSpacingConstraint=_topSpacingConstraint;
@property(nonatomic) NSLayoutConstraint *bottomSpacingConstraint; // @synthesize bottomSpacingConstraint=_bottomSpacingConstraint;
@property(nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) __weak UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)drawRect:(struct CGRect)arg1;

@end

