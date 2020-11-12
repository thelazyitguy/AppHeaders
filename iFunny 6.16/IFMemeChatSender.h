//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFMemeShareSendTaskDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol IFMemeChatSenderDelegate;

@interface IFMemeChatSender : NSObject <IFMemeShareSendTaskDelegate>
{
    NSObject<IFMemeChatSenderDelegate> *_delegate;
    NSMutableArray *_tasks;
    long long _completedTasksCount;
    NSString *_sendingMessage;
    long long _retryCount;
}

+ (id)messageWithMemeLink:(id)arg1 withText:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *sendingMessage; // @synthesize sendingMessage=_sendingMessage;
@property(nonatomic) long long completedTasksCount; // @synthesize completedTasksCount=_completedTasksCount;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(nonatomic) __weak NSObject<IFMemeChatSenderDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)sendTask:(id)arg1 completedWithError:(id)arg2;
- (void)continueSending;
- (void)sendMemeLink:(id)arg1 withText:(id)arg2 toRecipients:(id)arg3;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
