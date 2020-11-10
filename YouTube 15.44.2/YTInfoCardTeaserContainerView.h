//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTInfoCardTeaserViewProtocol-Protocol.h>

@class NSString, UIImageView, UIPanGestureRecognizer, YTInfoCardButton, YTSimpleInfoCardTeaserView;
@protocol YTInfoCardTeaserViewControllerDelegate;

@interface YTInfoCardTeaserContainerView : UIView <YTInfoCardTeaserViewProtocol>
{
    double _subViewPanX;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _visible;
    YTSimpleInfoCardTeaserView *_teaserView;
    id <YTInfoCardTeaserViewControllerDelegate> _delegate;
    UIView *_contentContainerView;
    UIImageView *_teaserBackgroundView;
    UIImageView *_teaserIconImageView;
    YTInfoCardButton *_infoCardButton;
    double _iconDelay;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double iconDelay; // @synthesize iconDelay=_iconDelay;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) YTInfoCardButton *infoCardButton; // @synthesize infoCardButton=_infoCardButton;
@property(readonly, nonatomic) UIImageView *teaserIconImageView; // @synthesize teaserIconImageView=_teaserIconImageView;
@property(readonly, nonatomic) UIImageView *teaserBackgroundView; // @synthesize teaserBackgroundView=_teaserBackgroundView;
@property(readonly, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic) __weak id <YTInfoCardTeaserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YTSimpleInfoCardTeaserView *teaserView; // @synthesize teaserView=_teaserView;
- (void)panWithXDistance:(double)arg1 xVelocity:(double)arg2 panFinished:(_Bool)arg3;
- (void)didPan:(id)arg1;
- (void)hideIconAnimatedAfterDelay;
- (void)setIconVisible:(_Bool)arg1;
- (void)hideAnimated:(_Bool)arg1;
- (void)hideAnimatedAfterDelayed;
- (void)showAnimated:(_Bool)arg1 hideAfterDelay:(double)arg2 iconDelay:(double)arg3;
- (void)removeDidTapInfoCardIconTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidTapInfoCardIconTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)additionalYOffset;
- (double)additionalXOffset;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

