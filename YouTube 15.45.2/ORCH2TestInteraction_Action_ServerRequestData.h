//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ORCH2InitializeRequest, ORCH2SubmitRequest, ORCH2UiResponse;

@interface ORCH2TestInteraction_Action_ServerRequestData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRequestType; // @dynamic hasRequestType;
@property(retain, nonatomic) ORCH2InitializeRequest *initializeRequest; // @dynamic initializeRequest;
@property(readonly, nonatomic) int requestOneOfCase; // @dynamic requestOneOfCase;
@property(nonatomic) int requestType; // @dynamic requestType;
@property(readonly, nonatomic) int responseOneOfCase; // @dynamic responseOneOfCase;
@property(retain, nonatomic) ORCH2SubmitRequest *submitRequest; // @dynamic submitRequest;
@property(retain, nonatomic) ORCH2UiResponse *uiResponse; // @dynamic uiResponse;

@end

