//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface CHRWidgetEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int family; // @dynamic family;
@property(nonatomic) _Bool hasFamily; // @dynamic hasFamily;
@property(nonatomic) _Bool hasKind; // @dynamic hasKind;
@property(nonatomic) _Bool hasViewTag; // @dynamic hasViewTag;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *viewTag; // @dynamic viewTag;

@end

