//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTICommentsStreamReloadSupportedContinuations;

@interface YTICommentsStreamReloadEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommentsStreamReloadSupportedContinuations *continuation; // @dynamic continuation;
@property(nonatomic) _Bool hasContinuation; // @dynamic hasContinuation;
@property(nonatomic) _Bool hasNumTopContentsToKeep; // @dynamic hasNumTopContentsToKeep;
@property(nonatomic) _Bool hasSectionIdentifier; // @dynamic hasSectionIdentifier;
@property(nonatomic) int numTopContentsToKeep; // @dynamic numTopContentsToKeep;
@property(copy, nonatomic) NSString *sectionIdentifier; // @dynamic sectionIdentifier;

@end

