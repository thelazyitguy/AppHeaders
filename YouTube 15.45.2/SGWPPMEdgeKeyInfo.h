//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface SGWPPMEdgeKeyInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *containerId; // @dynamic containerId;
@property(nonatomic) int containerType; // @dynamic containerType;
@property(nonatomic) _Bool hasContainerId; // @dynamic hasContainerId;
@property(nonatomic) _Bool hasContainerType; // @dynamic hasContainerType;
@property(nonatomic) _Bool hasMaterialized; // @dynamic hasMaterialized;
@property(nonatomic) _Bool materialized; // @dynamic materialized;

@end
