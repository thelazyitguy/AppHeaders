//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt32Array, GPBInt64Array, NSString;

@interface ORCH2SelectorOptionData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64Array *contentDataReferenceArray; // @dynamic contentDataReferenceArray;
@property(readonly, nonatomic) unsigned long long contentDataReferenceArray_Count; // @dynamic contentDataReferenceArray_Count;
@property(retain, nonatomic) GPBInt32Array *groupIdArray; // @dynamic groupIdArray;
@property(readonly, nonatomic) unsigned long long groupIdArray_Count; // @dynamic groupIdArray_Count;
@property(nonatomic) _Bool hasSelectorDataReference; // @dynamic hasSelectorDataReference;
@property(nonatomic) _Bool hasTemplateTextSummary; // @dynamic hasTemplateTextSummary;
@property(nonatomic) long long selectorDataReference; // @dynamic selectorDataReference;
@property(copy, nonatomic) NSString *templateTextSummary; // @dynamic templateTextSummary;

@end

