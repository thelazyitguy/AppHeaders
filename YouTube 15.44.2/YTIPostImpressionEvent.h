//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIVisualElement;

@interface YTIPostImpressionEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *csn; // @dynamic csn;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasCsn; // @dynamic hasCsn;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasPostVisualElement; // @dynamic hasPostVisualElement;
@property(retain, nonatomic) YTIVisualElement *postVisualElement; // @dynamic postVisualElement;

@end

