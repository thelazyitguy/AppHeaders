//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class CRPTPolicyReference, NSMutableArray;

@interface CRPTKeyDirective : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *crossproofKeyNamesArray; // @dynamic crossproofKeyNamesArray;
@property(readonly, nonatomic) unsigned long long crossproofKeyNamesArray_Count; // @dynamic crossproofKeyNamesArray_Count;
@property(nonatomic) long long enrollTimeMillis; // @dynamic enrollTimeMillis;
@property(nonatomic) _Bool hasPolicyReference; // @dynamic hasPolicyReference;
@property(retain, nonatomic) CRPTPolicyReference *policyReference; // @dynamic policyReference;

@end

