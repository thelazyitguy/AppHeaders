//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCHostActionHandler-Protocol.h>

@class DSCToast, NSString;

@interface DSCDefaultHostActionHandler : NSObject <DSCHostActionHandler>
{
    DSCToast *_toast;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DSCToast *toast; // @synthesize toast=_toast;
- (void)dismissAllUserMessages;
- (void)dismissUserMessagesFromViewController:(id)arg1;
- (void)presentSignInFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleUserMessage:(id)arg1 withButtonText:(id)arg2 fromViewController:(id)arg3 actionCompletionBlock:(CDUnknownBlockType)arg4;
- (void)handleUserMessage:(id)arg1 fromViewController:(id)arg2 withUndoBlock:(CDUnknownBlockType)arg3;
- (_Bool)handleClientAction:(id)arg1 fromViewController:(id)arg2 sender:(id)arg3;
- (_Bool)handleClientAction:(id)arg1 fromViewController:(id)arg2 sender:(id)arg3 anchorView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
