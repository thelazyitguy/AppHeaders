//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, STDSChallengeResponseViewController;

@protocol STDSChallengeResponseViewControllerDelegate
- (void)challengeResponseViewControllerDidRequestResend:(STDSChallengeResponseViewController *)arg1;
- (void)challengeResponseViewControllerDidCancel:(STDSChallengeResponseViewController *)arg1;
- (void)challengeResponseViewControllerDidOOBContinue:(STDSChallengeResponseViewController *)arg1;
- (void)challengeResponseViewController:(STDSChallengeResponseViewController *)arg1 didSubmitHTMLForm:(NSString *)arg2;
- (void)challengeResponseViewController:(STDSChallengeResponseViewController *)arg1 didSubmitSelection:(NSArray *)arg2;
- (void)challengeResponseViewController:(STDSChallengeResponseViewController *)arg1 didSubmitInput:(NSString *)arg2;
@end
