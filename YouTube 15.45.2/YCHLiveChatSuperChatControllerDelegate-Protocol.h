//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString, YCHLiveChatSuperChatController, YTILiveChatErrorMessageRenderer;

@protocol YCHLiveChatSuperChatControllerDelegate <NSObject>
- (void)superChatContollerCancelledPayment:(YCHLiveChatSuperChatController *)arg1;
- (void)superChatControllerDidComplete:(YCHLiveChatSuperChatController *)arg1;
- (void)superChatController:(YCHLiveChatSuperChatController *)arg1 didNotValidateError:(YTILiveChatErrorMessageRenderer *)arg2;
- (void)superChatController:(YCHLiveChatSuperChatController *)arg1 didReturnErrorMessage:(NSString *)arg2;
@end
