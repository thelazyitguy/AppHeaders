//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ServiceChat/SCSLoadingIndicator-Protocol.h>

@class NSLayoutConstraint, NSString, SCSImageView, UILabel;

@interface SCSChatMinimizedMessageView : UIView <SCSLoadingIndicator>
{
    NSLayoutConstraint *_countHorizontalConstraint;
    NSLayoutConstraint *_countVerticalConstraint;
    double _animationDuration;
    _Bool _animating;
    SCSImageView *_imageView;
    UILabel *_countLabel;
}

@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) SCSImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGSize countLabelOffset;
@property(nonatomic) double animationDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

