//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSCreditCardResult, NSArray;

@protocol A9VSCreditCardReaderCPPDelegate <NSObject>
- (void)didDetermineSceneIsDark;
- (void)didDetermineSceneIsBlack;
- (void)didDetectCardPromising;
- (void)didDetectCardStabilized;
- (void)didDetectCard:(NSArray *)arg1;
- (void)didRecognizeCreditCard:(A9VSCreditCardResult *)arg1;
@end

