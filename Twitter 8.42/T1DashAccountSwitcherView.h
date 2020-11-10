//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, T1AppBadging, T1DashAccountSwitcherAddAccountsBubble, T1DashAccountSwitcherMoreBubble, TFNTwitterAccount;

@interface T1DashAccountSwitcherView : UIView
{
    TFNTwitterAccount *_account;
    NSArray *_accounts;
    NSArray *_visibleAccounts;
    CDUnknownBlockType _manageAccountsBlock;
    CDUnknownBlockType _switchAccountBlock;
    long long _maxNumberOfAccounts;
    NSArray *_avatars;
    T1DashAccountSwitcherAddAccountsBubble *_addAccountsBubble;
    T1DashAccountSwitcherMoreBubble *_moreBubble;
    T1AppBadging *_appBadging;
}

+ (double)avatarSpacing;
- (void).cxx_destruct;
@property(retain, nonatomic) T1AppBadging *appBadging; // @synthesize appBadging=_appBadging;
@property(retain, nonatomic) T1DashAccountSwitcherMoreBubble *moreBubble; // @synthesize moreBubble=_moreBubble;
@property(retain, nonatomic) T1DashAccountSwitcherAddAccountsBubble *addAccountsBubble; // @synthesize addAccountsBubble=_addAccountsBubble;
@property(retain, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars;
@property(nonatomic) long long maxNumberOfAccounts; // @synthesize maxNumberOfAccounts=_maxNumberOfAccounts;
@property(copy, nonatomic) CDUnknownBlockType switchAccountBlock; // @synthesize switchAccountBlock=_switchAccountBlock;
@property(copy, nonatomic) CDUnknownBlockType manageAccountsBlock; // @synthesize manageAccountsBlock=_manageAccountsBlock;
@property(retain, nonatomic) NSArray *visibleAccounts; // @synthesize visibleAccounts=_visibleAccounts;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)appBadgesUpdated:(id)arg1;
- (void)updateAccounts;
- (void)updateAccountsIfChanged;
- (id)accountsSortedByLastActiveDate:(id)arg1;
@property(readonly, nonatomic) struct CGSize switcherSize;
- (long long)numberOfBubbles;
- (long long)maxNumberOfBubbles;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithMaxNumberOfAccounts:(long long)arg1;

@end
