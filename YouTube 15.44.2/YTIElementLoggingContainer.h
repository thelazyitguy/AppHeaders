//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ELMPBCommand, ELMPBElement, NSData;

@interface YTIElementLoggingContainer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ELMPBCommand *counterfactualVisible; // @dynamic counterfactualVisible;
@property(retain, nonatomic) ELMPBElement *element; // @dynamic element;
@property(nonatomic) _Bool hasCounterfactualVisible; // @dynamic hasCounterfactualVisible;
@property(nonatomic) _Bool hasElement; // @dynamic hasElement;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

