//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class EIDClientEventIdMessage, EIDEventIdMessage;

@interface FLOGTreeRef : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) EIDClientEventIdMessage *clientEventId; // @dynamic clientEventId;
@property(retain, nonatomic) EIDEventIdMessage *eventId; // @dynamic eventId;
@property(readonly, nonatomic) int eventOneOfCase; // @dynamic eventOneOfCase;
@property(nonatomic) int featureIndex; // @dynamic featureIndex;
@property(nonatomic) long long featureTreeRefLabel; // @dynamic featureTreeRefLabel;
@property(nonatomic) _Bool hasFeatureTreeRefLabel; // @dynamic hasFeatureTreeRefLabel;
@property(readonly, nonatomic) int identifierOneOfCase; // @dynamic identifierOneOfCase;

@end
