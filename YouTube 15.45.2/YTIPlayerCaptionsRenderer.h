//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIPlayerCaptionsMetadataSupportedRenderers;

@interface YTIPlayerCaptionsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *baseURL; // @dynamic baseURL;
@property(retain, nonatomic) YTIPlayerCaptionsMetadataSupportedRenderers *contribute; // @dynamic contribute;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasBaseURL; // @dynamic hasBaseURL;
@property(nonatomic) _Bool hasContribute; // @dynamic hasContribute;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasShowAutoCaptions; // @dynamic hasShowAutoCaptions;
@property(nonatomic) _Bool hasVisibility; // @dynamic hasVisibility;
@property(nonatomic) _Bool showAutoCaptions; // @dynamic showAutoCaptions;
@property(nonatomic) int visibility; // @dynamic visibility;

@end

