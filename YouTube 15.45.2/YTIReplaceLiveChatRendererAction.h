//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIRenderer;

@interface YTIReplaceLiveChatRendererAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasReplacement; // @dynamic hasReplacement;
@property(nonatomic) _Bool hasToReplace; // @dynamic hasToReplace;
@property(retain, nonatomic) YTIRenderer *replacement; // @dynamic replacement;
@property(nonatomic) int toReplace; // @dynamic toReplace;

@end
