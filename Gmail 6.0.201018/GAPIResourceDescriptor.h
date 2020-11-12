//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBEnumArray, NSMutableArray, NSString;

@interface GAPIResourceDescriptor : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int history; // @dynamic history;
@property(retain, nonatomic) NSMutableArray *nameDescriptorArray; // @dynamic nameDescriptorArray;
@property(readonly, nonatomic) unsigned long long nameDescriptorArray_Count; // @dynamic nameDescriptorArray_Count;
@property(copy, nonatomic) NSString *nameField; // @dynamic nameField;
@property(retain, nonatomic) NSMutableArray *patternArray; // @dynamic patternArray;
@property(readonly, nonatomic) unsigned long long patternArray_Count; // @dynamic patternArray_Count;
@property(copy, nonatomic) NSString *plural; // @dynamic plural;
@property(copy, nonatomic) NSString *singular; // @dynamic singular;
@property(retain, nonatomic) GPBEnumArray *styleArray; // @dynamic styleArray;
@property(readonly, nonatomic) unsigned long long styleArray_Count; // @dynamic styleArray_Count;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end
