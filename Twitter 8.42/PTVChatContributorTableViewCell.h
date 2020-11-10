//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVChatTableViewCell.h>

#import <PeriscopeSDK/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PTVChatContributorViewCellContentView;

@interface PTVChatContributorTableViewCell : PTVChatTableViewCell <UIGestureRecognizerDelegate>
{
    PTVChatContributorViewCellContentView *_containerView;
    struct CGRect _cachedContainerFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect cachedContainerFrame; // @synthesize cachedContainerFrame=_cachedContainerFrame;
@property(retain, nonatomic) PTVChatContributorViewCellContentView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) NSString *bottomMessage;
@property(readonly, nonatomic) NSString *topMessage;
- (void)setTopMessage:(id)arg1 bottomMessage:(id)arg2 participantIndex:(long long)arg3;
- (void)setProfileImageURL:(id)arg1;
- (void)setProfileImageEntity:(id)arg1 type:(unsigned long long)arg2;
- (void)setUseLargeChatFont:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

