//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWExternalLinkMarketplaceController, NSString;

@protocol AWExternalLinkMarketplaceControllerDelegate <NSObject>

@optional
- (void)marketplaceController:(AWExternalLinkMarketplaceController *)arg1 didChangeLocale:(NSString *)arg2;
- (void)marketplaceController:(AWExternalLinkMarketplaceController *)arg1 didChangeMarketplace:(NSString *)arg2;
- (void)marketplaceController:(AWExternalLinkMarketplaceController *)arg1 didCancelSwitchMarketplace:(NSString *)arg2;
- (void)marketplaceController:(AWExternalLinkMarketplaceController *)arg1 didConfirmToSwitchMarketplace:(NSString *)arg2;
- (void)marketplaceController:(AWExternalLinkMarketplaceController *)arg1 marketplaceNotSupportedForInternationalShopping:(NSString *)arg2;
@end

