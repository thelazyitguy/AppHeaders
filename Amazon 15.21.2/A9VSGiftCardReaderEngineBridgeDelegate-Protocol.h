//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSGiftCardResult, UIImage;

@protocol A9VSGiftCardReaderEngineBridgeDelegate <NSObject>
- (void)didReceiveBestGiftCardImage:(UIImage *)arg1;
- (void)didFailToDetectClaimCode:(long long)arg1;
- (void)shouldTimeout;
- (void)didDetermineDarkScreen;
- (void)didDetermineBlackScreen;
- (void)didReceiveHigherClaimCodeProgressLevel:(long long)arg1;
- (void)didDeterminePromising;
- (void)didDecodeGiftCard:(A9VSGiftCardResult *)arg1;
@end
