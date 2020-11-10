//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNDismissableView-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, TFNLegacyButton, UIImageView, UILabel, UITapGestureRecognizer;
@protocol TFNAuthorizationRequestItem, TFNDismissDelegate;

@interface TFNAuthorizationRequestItemView : UIView <UIGestureRecognizerDelegate, TFNDismissableView>
{
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_learnMoreLabel;
    TFNLegacyButton *_notNowButton;
    TFNLegacyButton *_acceptButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <TFNDismissDelegate> _dismissDelegate;
    id _learnMoreTarget;
    SEL _learnMoreAction;
    id <TFNAuthorizationRequestItem> _requestItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TFNAuthorizationRequestItem> requestItem; // @synthesize requestItem=_requestItem;
@property(readonly, nonatomic) SEL learnMoreAction; // @synthesize learnMoreAction=_learnMoreAction;
@property(readonly, nonatomic) __weak id learnMoreTarget; // @synthesize learnMoreTarget=_learnMoreTarget;
@property(nonatomic) __weak id <TFNDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void)accept:(id)arg1;
- (void)notNow:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)learnMoreTapped:(id)arg1;
- (void)setLearnMoreTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithRequestItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

