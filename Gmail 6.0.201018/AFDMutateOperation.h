//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class AFDMutateDataRequest;

@interface AFDMutateOperation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMutateRequest; // @dynamic hasMutateRequest;
@property(nonatomic) int id_p; // @dynamic id_p;
@property(retain, nonatomic) AFDMutateDataRequest *mutateRequest; // @dynamic mutateRequest;

@end
