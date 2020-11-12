//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFBaseRouter.h>

#import <Funny/IFFeedbackRouterProtocol-Protocol.h>
#import <Funny/MFMailComposeViewControllerDelegate-Protocol.h>

@class IFRouterFields, NSString, UIViewController;

@interface IFFeedbackRouter : IFBaseRouter <MFMailComposeViewControllerDelegate, IFFeedbackRouterProtocol>
{
}

- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)showSendEmailWithClaim:(id)arg1 detailDescription:(id)arg2 fromUser:(id)arg3;
- (void)dismiss;
- (void)close;

// Remaining properties
@property(nonatomic) __weak UIViewController *controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) IFRouterFields *fields;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
