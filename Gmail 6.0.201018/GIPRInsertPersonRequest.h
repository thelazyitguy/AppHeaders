//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GIPRExtensionSet, GIPRGetPeopleRequest, GIPRMergedPersonSourceOptions, GIPRPeopleContext, POEMPerson;

@interface GIPRInsertPersonRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPRPeopleContext *context; // @dynamic context;
@property(retain, nonatomic) GIPRExtensionSet *extensionSet; // @dynamic extensionSet;
@property(retain, nonatomic) GIPRGetPeopleRequest *getPeopleRequest; // @dynamic getPeopleRequest;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasExtensionSet; // @dynamic hasExtensionSet;
@property(nonatomic) _Bool hasGetPeopleRequest; // @dynamic hasGetPeopleRequest;
@property(nonatomic) _Bool hasMergedPersonSourceOptions; // @dynamic hasMergedPersonSourceOptions;
@property(nonatomic) _Bool hasPerson; // @dynamic hasPerson;
@property(nonatomic) _Bool includeLinkedPeople; // @dynamic includeLinkedPeople;
@property(retain, nonatomic) GIPRMergedPersonSourceOptions *mergedPersonSourceOptions; // @dynamic mergedPersonSourceOptions;
@property(retain, nonatomic) POEMPerson *person; // @dynamic person;
@property(nonatomic) _Bool skipPostMutateGet; // @dynamic skipPostMutateGet;

@end

