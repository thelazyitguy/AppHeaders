//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SSOSafariSignInHandler;

@protocol SSOSafariSignInHandlerDelegate <NSObject>
- (_Bool)safariSignInHandlerPausedBySecurityKey:(id <SSOSafariSignInHandler>)arg1;
- (_Bool)safariSignInHandler:(id <SSOSafariSignInHandler>)arg1 handleOpenURL:(NSURL *)arg2;
@end
