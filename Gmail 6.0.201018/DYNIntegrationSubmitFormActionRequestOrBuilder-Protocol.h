//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNIntegrationSubmitFormActionRequest_FormActionEvent, DYNProtoMessageId, DYNProtoUserId, JAddOnsFormAction, JAddOnsFormInput;
@protocol JavaUtilList;

@protocol DYNIntegrationSubmitFormActionRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JAddOnsFormInput *)getFormInputsWithInt:(int)arg1;
- (id <JavaUtilList>)getFormInputsList;
- (int)getFormInputsCount;
- (JAddOnsFormAction *)getAction;
- (_Bool)hasAction;
- (DYNProtoUserId *)getBotId;
- (_Bool)hasBotId;
- (DYNProtoMessageId *)getMessageId;
- (_Bool)hasMessageId;
- (DYNIntegrationSubmitFormActionRequest_FormActionEvent *)getDialogEvent;
- (_Bool)hasDialogEvent;
@end
