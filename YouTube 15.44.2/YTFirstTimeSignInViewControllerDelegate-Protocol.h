//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTAccountsListResponseData, YTGoogleAccount, YTIAccountItemRenderer;

@protocol YTFirstTimeSignInViewControllerDelegate <NSObject>
- (void)accountStatusDidChange:(YTAccountsListResponseData *)arg1 status:(unsigned long long)arg2;
- (void)didSelectContinueAsGuest;
- (void)didSelectUseOtherAccount;
- (void)didSelectAccount:(YTGoogleAccount *)arg1 accountItem:(YTIAccountItemRenderer *)arg2;
@end

