//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSigninInterstitialProtocol-Protocol.h"

@interface AWSigninInterstitialImpl : NSObject <AWSigninInterstitialProtocol>
{
    long long _startCount;
}

+ (id)sharedInstance;
@property(nonatomic) long long startCount; // @synthesize startCount=_startCount;
- (void)showSignInModalWithSignedInHandler:(CDUnknownBlockType)arg1;
- (_Bool)isCNMarketplaceOrUserSignedIn;
- (void)showSigninInterstitialIfApplicable;
- (void)showSignInInterstitialIfCustomerPreferencesSynchronizationRequired;
- (id)init;

@end
