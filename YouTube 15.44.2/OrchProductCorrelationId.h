//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface OrchProductCorrelationId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int billableService; // @dynamic billableService;
@property(nonatomic) _Bool hasBillableService; // @dynamic hasBillableService;
@property(nonatomic) _Bool hasProductAccountKey; // @dynamic hasProductAccountKey;
@property(nonatomic) _Bool hasProductOrderLineKey; // @dynamic hasProductOrderLineKey;
@property(copy, nonatomic) NSString *productAccountKey; // @dynamic productAccountKey;
@property(copy, nonatomic) NSString *productOrderLineKey; // @dynamic productOrderLineKey;

@end

