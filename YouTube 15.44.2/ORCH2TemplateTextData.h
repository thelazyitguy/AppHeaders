//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt64Array, NSString;

@interface ORCH2TemplateTextData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64Array *childDataReferenceArray; // @dynamic childDataReferenceArray;
@property(readonly, nonatomic) unsigned long long childDataReferenceArray_Count; // @dynamic childDataReferenceArray_Count;
@property(nonatomic) _Bool hasTemplate_p; // @dynamic hasTemplate_p;
@property(copy, nonatomic) NSString *template_p; // @dynamic template_p;

@end

