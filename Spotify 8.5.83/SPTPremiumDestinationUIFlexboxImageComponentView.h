//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithChildren-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"
#import "SPTPremiumDestinationUIFlexboxChildComponentViewControllerDataSource-Protocol.h"

@class NSLayoutConstraint, NSString, SPTPremiumDestinationUIFlexboxChildComponentViewController, UIImageView;
@protocol HUBComponentViewChildDelegate;

@interface SPTPremiumDestinationUIFlexboxImageComponentView : HUBComponentView <SPTPremiumDestinationUIFlexboxChildComponentViewControllerDataSource, HUBComponentViewWithImageHandling, HUBComponentViewWithChildren>
{
    id <HUBComponentViewChildDelegate> _childDelegate;
    SPTPremiumDestinationUIFlexboxChildComponentViewController *_childComponentViewController;
    UIImageView *_imageView;
    NSLayoutConstraint *_imageViewHeightConstraint;
}

+ (struct CGSize)imageSizeFromModel:(id)arg1;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SPTPremiumDestinationUIFlexboxChildComponentViewController *childComponentViewController; // @synthesize childComponentViewController=_childComponentViewController;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (_Bool)inverseLayout;
- (id)childComponentModelsForLayout;
- (id)childDelegateForLayout;
- (id)componentViewForLayout;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)updateImageViewHeightConstraintIfNeeded;
- (void)layoutSubviews;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

