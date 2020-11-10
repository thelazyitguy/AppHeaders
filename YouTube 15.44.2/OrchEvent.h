//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt64Array, NSString, OrchApiRequestData;

@interface OrchEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchApiRequestData *apiRequestData; // @dynamic apiRequestData;
@property(nonatomic) int contextStartEventId; // @dynamic contextStartEventId;
@property(retain, nonatomic) GPBInt64Array *contextUiReferenceArray; // @dynamic contextUiReferenceArray;
@property(readonly, nonatomic) unsigned long long contextUiReferenceArray_Count; // @dynamic contextUiReferenceArray_Count;
@property(readonly, nonatomic) int dataOneOfCase; // @dynamic dataOneOfCase;
@property(nonatomic) int eventId; // @dynamic eventId;
@property(nonatomic) _Bool hasContextStartEventId; // @dynamic hasContextStartEventId;
@property(nonatomic) _Bool hasEventId; // @dynamic hasEventId;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasResult; // @dynamic hasResult;
@property(nonatomic) _Bool hasResultCode; // @dynamic hasResultCode;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasTimedStartEventId; // @dynamic hasTimedStartEventId;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) int name; // @dynamic name;
@property(nonatomic) int result; // @dynamic result;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int timedStartEventId; // @dynamic timedStartEventId;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

