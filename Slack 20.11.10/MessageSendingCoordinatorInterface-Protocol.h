//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSAttributedString, NSString, SLKDependencies, UITextView;
@protocol SLKChannelGenerics, SLKMessageGenerics;

@protocol MessageSendingCoordinatorInterface
- (void)commitEditedMessageWithText:(NSAttributedString *)arg1 message:(id <SLKMessageGenerics>)arg2 dependencies:(SLKDependencies *)arg3 currentLocaleIdentifier:(NSString *)arg4 completion:(void (^)(_Bool, SLKMessageSendingCoordinatorCommitMessageErrorContext *))arg5;
- (void)sendTextMessage:(NSAttributedString *)arg1 toChannel:(id <SLKChannelGenerics>)arg2 clientMessageId:(NSString *)arg3 threadTimestamp:(NSString *)arg4 broadcast:(_Bool)arg5 dependencies:(SLKDependencies *)arg6 textView:(UITextView *)arg7 isEditing:(_Bool)arg8 completion:(void (^)(id <SLKChannelGenerics>, NSError *))arg9;
@end
