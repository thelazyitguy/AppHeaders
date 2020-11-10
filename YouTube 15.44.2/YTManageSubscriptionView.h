//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTCellActionProtocol-Protocol.h>
#import <Module_Framework/YTReusableView-Protocol.h>

@class NSString, YTAdditionalInfosView, YTFormattedStringLabel, YTQTMButton, YTSubscriptionInfosView;
@protocol YTFormattedStringLabelDelegate;

@interface YTManageSubscriptionView : UIView <YTCellActionProtocol, YTReusableView>
{
    YTFormattedStringLabel *_titleLabel;
    YTSubscriptionInfosView *_subscriptionInfosView;
    YTAdditionalInfosView *_additionalInfosView;
    YTQTMButton *_manageSubscriptionButton;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
- (double)subViewAvailableWidthWithWidth:(double)arg1;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)prepareForReuse;
- (void)setEntry:(id)arg1;
- (void)setManageSubscriptionButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

