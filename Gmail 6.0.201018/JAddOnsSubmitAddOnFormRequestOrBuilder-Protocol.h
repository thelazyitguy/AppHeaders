//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsAddonsCapabilityInfo, JAddOnsFormAction_ActionParameter, JAddOnsFormInput, JAddOnsIdFormat, JAddOnsSubmitAddOnFormRequest_Context, JAddOnsTriggerEvent, NSString;
@protocol ComGoogleProtobufProtocolStringList, JavaUtilList;

@protocol JAddOnsSubmitAddOnFormRequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JAddOnsTriggerEvent *)getTriggerEvent;
- (_Bool)hasTriggerEvent;
- (ComGoogleAppsAddonsCapabilityInfo *)getCapabilityInfo;
- (_Bool)hasCapabilityInfo;
- (JAddOnsSubmitAddOnFormRequest_Context *)getContext;
- (_Bool)hasContext;
- (NSString *)getParametersWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getParametersList;
- (int)getParametersCount;
- (JAddOnsFormAction_ActionParameter *)getActionParametersWithInt:(int)arg1;
- (id <JavaUtilList>)getActionParametersList;
- (int)getActionParametersCount;
- (JAddOnsFormInput *)getOldActionParametersWithInt:(int)arg1;
- (id <JavaUtilList>)getOldActionParametersList;
- (int)getOldActionParametersCount;
- (JAddOnsFormInput *)getFormInputsWithInt:(int)arg1;
- (id <JavaUtilList>)getFormInputsList;
- (int)getFormInputsCount;
- (NSString *)getCallbackMethodName;
- (_Bool)hasCallbackMethodName;
- (NSString *)getAppsScriptProjectId;
- (_Bool)hasAppsScriptProjectId;
- (NSString *)getAddOnId;
- (_Bool)hasAddOnId;
- (JAddOnsIdFormat *)getMessageIdFormat;
- (_Bool)hasMessageIdFormat;
- (NSString *)getMessageId;
- (_Bool)hasMessageId;
- (NSString *)getUserId;
- (_Bool)hasUserId;
@end
