//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOIAccountCreationModalController, NSError;

@protocol GOIAccountCreationDelegate <NSObject>
- (void)accountCreationDidFailWithError:(NSError *)arg1;
- (void)accountCreationDidSelectAnotherAccount:(GOIAccountCreationModalController *)arg1;
- (void)accountCreationDidDeny:(GOIAccountCreationModalController *)arg1;
- (void)accountCreationDidAllow:(GOIAccountCreationModalController *)arg1;
@end
