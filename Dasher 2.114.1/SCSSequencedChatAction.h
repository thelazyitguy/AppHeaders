//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SCSLiveAgentAction.h>

@interface SCSSequencedChatAction : SCSLiveAgentAction
{
}

+ (id)actionToSendRichMessageWithSessionInfo:(id)arg1 withRichMessage:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)actionToSetUserNotTypingWithSessionInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)actionToSetUserTypingWithSessionInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)actionToSendSneakPeekWithSessionInfo:(id)arg1 withText:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)actionToSendSensitveDataRuleTriggeredWithSessionInfo:(id)arg1 withRules:(struct NSMutableArray *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)actionToSendTextMessageWithSessionInfo:(id)arg1 withText:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)arrayFromPrechatEntityFields:(id)arg1;
+ (id)arrayFromPrechatEntities:(id)arg1;
+ (id)arrayFromPrechatDetails:(id)arg1;
+ (id)actionToEndLiveAgentChatSessionWithInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)actionToStartLiveAgentChatSessionWithInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)contentFromData:(id)arg1 fromResponse:(id)arg2 error:(id *)arg3;
- (id)initWithSessionInfo:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
