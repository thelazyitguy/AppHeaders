//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class BTLBigTopVisualElementMetadata, FormSubmissionMetadata;

@interface NativeActionMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) FormSubmissionMetadata *formMetadata; // @dynamic formMetadata;
@property(nonatomic) _Bool hasFormMetadata; // @dynamic hasFormMetadata;
@property(nonatomic) _Bool hasVeMetadata; // @dynamic hasVeMetadata;
@property(retain, nonatomic) BTLBigTopVisualElementMetadata *veMetadata; // @dynamic veMetadata;

@end
